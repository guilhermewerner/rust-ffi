using System;
using System.Runtime.InteropServices;

namespace CSharp
{
    class Program
    {
        #if WINDOWS_PLATFORM
            const string Library = "Library";
        #else
            const string Library = "libLibrary";
        #endif

        [DllImport(Library)]
        static extern float Add(float Num1, float Num2);

        [DllImport(Library)]
        static extern float Divide(float Num1, float Num2);

        [DllImport(Library)]
        static extern float Multiply(float Num1, float Num2);

        [DllImport(Library)]
        static extern float Subtract(float Num1, float Num2);

        static void Main(string[] args)
        {
            int num1 = 1;
            int num2 = 2;

            Console.WriteLine("Added: " + Add(num1, num2));
            Console.WriteLine("Subtracted: " + Subtract(num1, num2));
            Console.WriteLine("Multiplied: " + Multiply(num1, num2));
            Console.WriteLine("Divided: " + Divide(num1, num2));
        }
    }
}
