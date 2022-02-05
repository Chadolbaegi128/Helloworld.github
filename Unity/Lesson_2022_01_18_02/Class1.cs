using System;
using System.Collections.Generic;
using System.Text;

namespace Lesson_2022_01_18_02
{    

    class Program
    {

        class Class2
        {
            public string i = "클래스";
            public void method()
            {
                Console.WriteLine("ClassA");
            }
        }
       
        static string PlusString(string A, string B)
        {
            return A + B;
        }

        static void Main(string[] args)
        {
            Class2 class2 = new Class2();
            Console.WriteLine(class2.i);
            Console.Write("메소드 출력: ");
            class2.method();
            string result = PlusString("안녕", "하세요");
            Console.WriteLine(result);
        }
        

    }
}
