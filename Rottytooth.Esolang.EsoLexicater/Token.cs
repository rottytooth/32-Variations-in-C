using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Rottytooth.Esolang.EsoLexicater
{
    public class Token
    {
        public string Name { get; set; }

        public int Count { get; set; }

        public Token() {
            this.Count = 0;
        }

        public Token(string tokenName) : this()
        {
            this.Name = tokenName;
        }
    }
}
