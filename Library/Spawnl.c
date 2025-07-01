#include <stdio.h>
#include <process.h> // Include process.h for spawning a new process
int main()
{
    printf("Opening Notepad...\n");

    _spawnl(_P_NOWAIT, "C:\\Windows\\notepad.exe", "notepad.exe", NULL);

    printf("Notepad opened. Program will continue...\n");
    return 0;
}
