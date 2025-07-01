#include <process.h>
#include <stdio.h>

int main() {
    int pid = getpid(); // Get the current process ID
    printf("The Process ID of this program is: %d\n", pid);
    return 0;
}
