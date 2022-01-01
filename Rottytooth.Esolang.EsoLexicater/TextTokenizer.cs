using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Rottytooth.Esolang.EsoLexicater
{
    public class TextTokenizer
    {
        public static List<CppToken> Tokenize(string program)
        {
            List<CppToken> tokenList = new List<CppToken>();

            string[] programWords = program.Split(' ');

            return tokenList;
        }
    }
}
