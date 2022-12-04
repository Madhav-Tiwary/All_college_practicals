// write a programme to perform arithmetic operation on pointer like increment and decrement
#include <stdio.h>
int main()
{
    int i = 12;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    // ptr=ptr+1,ptr=ptr-1;
    // printf("the  value of ptr is %u\n",ptr);
    //  ptr--;
    //  size of integer is in my architecture  is 4 byte so this is increse by 4 byte
    printf("the  value of ptr is %u\n", ptr);
    //  char incresed by 1 byte
    // char c = 23;
    // char *ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    ptr--;
    //    ize of integer is in my architecture  is 4 byte so this is increse by 4 byte
    printf("the  value of ptr is %u\n", ptr);

    return 0;
}