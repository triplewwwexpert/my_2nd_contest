#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len,i;
    gets(s);
    len=strlen(s);
    for(i=len-1;i>=0;i--){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
