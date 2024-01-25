#include <stdio.h>
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch,s[30],sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    getchar();
    scanf("%[^\n]%*c", sen);
    printf("%c\n" , ch );
    printf("%s" , s );
    printf("\n");
    printf("%s" , sen );    
    return 0;
}