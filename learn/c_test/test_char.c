#include <stdio.h>
#include <string.h>
//#include
//#include

int count_char(const char s[])
{
    int i = 0;
    while(s[i] != '\0')
       ++i;
    return i;
}
void main()
{
    int a = 1,b,c = 11;
    printf("a= %d, b = %d, c= %d\n",a,b,c);
    char *arry = "haliluya";
    int len = strlen(arry);
    int len1 = count_char(arry);
    printf("len = %d, len1 = %d\n",len, len1);
    return;
}


