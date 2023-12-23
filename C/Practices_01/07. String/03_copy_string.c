#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Hello, World!"; // Source string
    char destination[20];            // Destination string buffer

    strcpy(destination, source); // Copy source to destination

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}
