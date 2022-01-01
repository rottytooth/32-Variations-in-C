using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Rottytooth.Esolang.EsoLexicater
{
    public interface ITokenFactory
    {
        Token GetToken(string token);
    }
}
