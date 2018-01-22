#include<stdio.h>
int main()
{
char s;
printf("\nenter the num:");
scanf("%c",&s);
if(s='a'||s='e'||s='i'||s='o'||s='u')
printf("\n%cthe word is vowel",s);
else
printf("\n%cthe wrd is constant",s);
return 0;
}
