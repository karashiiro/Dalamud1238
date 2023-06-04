using System.Runtime.InteropServices;
using Dalamud.Plugin;

namespace Dalamud1238;

public class Dalamud1238 : IDalamudPlugin
{
    public string Name => "Dalamud1238";

    public Dalamud1238()
    {
        Product(2, 4);
    }

    public void Dispose()
    {
    }

    [DllImport("DynamicLibrary1.dll", EntryPoint = "Product")]
    static extern int Product(int a, int b);
}