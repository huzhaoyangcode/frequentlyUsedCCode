# include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50
int main ()
{
    char str[MAX_LENGTH] = {'\0'};
    memset(str, 0, MAX_LENGTH);
    unsigned int retNumber = 0;
    unsigned int maxWriteLength = MAX_LENGTH;
    char *pointer = str;
    
    while (1) {
       retNumber = snprintf(pointer, maxWriteLength,"hello");
       if(retNumber >= maxWriteLength) {
            printf("[ERROR]:out of range\n");
            break;
       }
       pointer += retNumber;
       maxWriteLength -= retNumber;
    }

    printf("retNumber%u,%s\n",retNumber, str);
    return 0;
}
