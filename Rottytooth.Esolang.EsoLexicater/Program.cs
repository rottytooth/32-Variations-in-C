using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CppRipper;

namespace Rottytooth.Esolang.EsoLexicater
{
    class Program
    {
        const string callingFormat = "Format:\nEsoLexicater <c file> < ";

        static void Main(string[] args)
        {
            //if (args.Length < 2) throw new ApplicationException(callingFormat);

            //string path = args[0];

            //Parse(path);

            Dictionary<char, int> letterCount = new Dictionary<char, int>();

            char[] buffer = new char[1];
            int count = 0;

            using (StreamReader sr = new StreamReader("..\\..\\..\\Rottytooth.Esolang.32Variations\\Variation10.cpp"))
            {
                int foundStar = 0;

                while (sr.Read(buffer, count, 1) > 0)
                {
                    if (buffer[0] == '*')
                        foundStar++;

                    if (foundStar > 1)
                    {
                        if (letterCount.Keys.Contains(buffer[0]))
                            letterCount[buffer[0]]++;
                        else
                            letterCount.Add(buffer[0], 1);
                    }
                }
            }
        }

        static void Parse(string filePath)
        {
            string program = File.ReadAllText(filePath);
            List<CppToken> tokenList = CppTokenizer.Tokenize(program);

            PrintTokenList(tokenList);

            foreach(CppToken token in tokenList)
            {

            }
        }

        static void ParseTextFile(string filePath)
        { }

        static void PrintTokenList(List<CppToken> tokenList)
        {
            foreach (CppToken token in tokenList)
            {
                Console.Write(token.Name);
                Console.Write("\tCount: ");
                Console.Write(token.Count);
                if (token.IsComment)
                {
                    Console.Write("\tIsComment");
                }
                if (token.IsPreprocessorDirective)
                {
                    Console.Write("\tIsPreprocessorDirective");
                }
                if (token.IsString)
                {
                    Console.Write("\tIsString");
                }
                Console.WriteLine();
            }

        }

        static void ParseUsingCppRipper(string path)
        {
            CppStructuralOutput output = new CppStructuralOutput();
            CppFileParser parser = new CppFileParser(output, path);

            string[] lines = output.GetStrings();
            Console.WriteLine(parser.Message);

            Console.WriteLine();

            foreach (string line in lines)
            {
                Console.WriteLine(line);
            }

            Console.ReadLine();

        }
    }
}
