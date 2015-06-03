#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int i = 0;
    int n;
    n = atoi(argv[1]);
        do {
            i++;
           puts("Hello world!"); 
        } while (i<n);
    return 0;
}
