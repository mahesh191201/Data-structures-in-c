#include<stdio.h>
int main()
{

    char ch;
    char s[10];
    char sen[50];
    scanf("%c",&ch);
    scanf("%s\n", &s);
    scanf("%[^\n]", sen);

    printf("%c\n",ch);
   printf("%s\n", s);
    printf("%s\n", sen);


    return 0;
}
