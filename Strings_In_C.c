#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";
    char str[34];
    gets(str); //By using scanf() we are not capable of receiving multi-word strings. The way to get a multi-word string is by using the function gets().
            //    In order to read a string that contains the spaces, we use the gets() function. The purpose of gets is to ignore the whitespaces. When a newline is reached, gets stops reading. 
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0;
}
