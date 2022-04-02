using System;
using System.Collections.Generic;

namespace Csharp_2022_03_30
{
    class Program
    {
        static void Main()
        {
            string[,,] student = new string[2,2,2]
            {
                { {"유관순","이화학당" } ,{"홍길동","율촌국"} },
                 { {"임꺽정","황해도" } ,{"장길산","광대"} } 
            };
              
            foreach(string count in student)
            {
                Console.WriteLine(count);
            }
        }
    }
}
