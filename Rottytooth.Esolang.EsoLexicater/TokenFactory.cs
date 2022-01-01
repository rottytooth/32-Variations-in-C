using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Rottytooth.Esolang.EsoLexicater
{
    public class TokenFactory<T> : ITokenFactory
        where T : Token, new() //: ITokenFactory
    {
        public readonly ConcurrentDictionary<string, T> Cache = new ConcurrentDictionary<string, T>();

        public Token GetToken(string tokenName)
        {
            T token = Cache.GetOrAdd(tokenName, f => new T() { Name = f });
            token.Count++;
            return (Token)token;
        }
    }
}
