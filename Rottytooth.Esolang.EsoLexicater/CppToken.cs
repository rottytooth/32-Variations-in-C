using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Rottytooth.Esolang.EsoLexicater
{
    public class CppToken : Token
    {
        public bool IsComment { get; set; }

        public bool IsPreprocessorDirective { get; set; }

        /// <summary>
        /// The (possibly multi-word) token is a string value
        /// </summary>
        public bool IsString { get; set; }

        public CppToken() : base() { }

        public CppToken(string tokenName): base(tokenName) { }

    }
}
