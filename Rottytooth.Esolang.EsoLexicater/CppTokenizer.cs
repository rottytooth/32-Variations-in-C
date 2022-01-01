using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Rottytooth.Esolang.EsoLexicater
{
    public static class CppTokenizer
    {
        public static List<char> SingleCharExpressions = new List<char>() { '[', ']', '{', '}', '(', ')', ',', ';' };

        public static bool IsNewline(this char x)
        {
            return (x == '\n' || x == '\r');
        }

        public static List<CppToken> Tokenize(string program)
        {
            StringBuilder currentWord = new StringBuilder();
            List<CppToken> tokenList = new List<CppToken>();
            ITokenFactory tokenFactory = new TokenFactory<CppToken>();

            for (int i = 0; i < program.Length; i++)
            {
                if (program[i] == '#')
                {
                    // if we're not at the beginning of a line (ignoring whitespace), move on
                    bool isPreprocessor = true;
                    if (i > 0) // if we're at 0, it's def preprocessor
                    {
                        for (int count = i - 1; count >= 0; count--)
                        {
                            if (program[count].IsNewline())
                            {
                                break;
                            }
                            if (!char.IsWhiteSpace(program[count]))
                            {
                                isPreprocessor = false;
                                break;
                            }
                        }
                    }

                    if (!isPreprocessor)
                    {
                        continue;
                    }

                    while (!program[i].IsNewline())
                    {
                        currentWord.Append(program[i]);
                        i++;
                    }
                    CppToken preprocessorToken = (CppToken)tokenFactory.GetToken(currentWord.ToString());
                    preprocessorToken.IsPreprocessorDirective = true;
                    tokenList.Add(preprocessorToken);
                    currentWord.Clear();
                    continue;
                }
                if (char.IsWhiteSpace(program[i]) || i == program.Length - 1)
                {
                    // if we have a word, add a token for it
                    if (currentWord.Length > 0)
                    {
                        tokenList.Add((CppToken)tokenFactory.GetToken(currentWord.ToString()));
                        currentWord.Clear();
                    }
                    // then skip to next character, nothing else to do here
                    continue;
                }

                if (SingleCharExpressions.Contains(program[i])) // language features like brackets
                {
                    if (currentWord.Length > 0)
                    {
                        tokenList.Add((CppToken)tokenFactory.GetToken(currentWord.ToString()));
                        currentWord.Clear();
                    }

                    CppToken controlToken = (CppToken)tokenFactory.GetToken(program[i].ToString());


                    tokenList.Add(controlToken);
                    currentWord.Clear();

                    continue;
                }


                // We don't actually need to know if it's a number -- this is complicated, let's not bother

                //if (Regex.IsMatch(program[i].ToString(), @"\d")) // if we're starting a number, look for other symbols
                //{
                //    currentWord.Append(program[i]);
                //    while (Regex.IsMatch(program[i + 1].ToString(), @"[0-9.]"))
                //    {
                //        i++;
                //        currentWord.Append(program[i]);
                //    }
                //    Token commentToken = tokenFactory.GetToken(currentWord.ToString());
                //    commentToken.IsComment = true;
                //    tokenList.Add(commentToken);
                //    currentWord.Clear();
                //    continue;

                //}

                if (program[i] == '/') // check if we're starting a comment
                {
                    if (i < program.Length - 1)
                    {
                        bool isComment = false;
                        bool isMultiline = false;

                        if (program[i + 1] == '*')
                        {
                            isComment = true;
                            isMultiline = true;
                        }
                        if (program[i + 1] == '/')
                        {
                            isComment = true;
                            isMultiline = false;
                        }

                        if (isComment)
                        {
                            while (true)
                            {
                                currentWord.Append(program[i]);
                                i++;
                                if (isMultiline && program[i] == '*' && program.Length > i + 1
                                    && program[i + 1] == '/')
                                {
                                    currentWord.Append(program[i]);
                                    i++;
                                    currentWord.Append(program[i]);
                                    break;
                                }
                                if (!isMultiline && program[i].IsNewline())
                                {
                                    // don't add the newline, let it get consumed by the whitespace test on next round
                                    break;
                                }
                            }
                            CppToken commentToken = (CppToken)tokenFactory.GetToken(currentWord.ToString());
                            commentToken.IsComment = true;
                            tokenList.Add(commentToken);
                            currentWord.Clear();
                            continue;
                        }
                    }
                }

                if (program[i] == '"') // strings
                {
                    i++;
                    while (program[i] != '"')
                    {
                        currentWord.Append(program[i]);
                        i++;
                    }
                    CppToken stringToken = (CppToken)tokenFactory.GetToken(currentWord.ToString());
                    stringToken.IsString = true;
                    tokenList.Add(stringToken);
                    currentWord.Clear();

                    continue;
                }

                currentWord.Append(program[i]);
            }

            return tokenList;
        }
    }
}
