// See https://aka.ms/new-console-template for more information

using System.Runtime.InteropServices;

Console.WriteLine($"{Product(2, 4)}");

[DllImport("DynamicLibrary1.dll", EntryPoint = "Product")]
static extern int Product(int a, int b);
