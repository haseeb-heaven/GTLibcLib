#define GT_USE_PROC_MODULES
#include "GTLibc.h"
#include <iostream>

int main()
{
    auto gHandle = GT_FindGameProcess("Notepad");
    GT_EnableLogs();

    if (gHandle)
    {
        auto gModules = GT_GetProcessModule(NULL);
        std::cout << gModules << std::endl;
    }
    std::cin.get();
    //while (!GT_IsKeyPressed(VK_RETURN));
    return 0;
}
