#include<stdio.h>
char upper(char);
int main()
{
    int a=0;
    char str[20],v;
    printf("Enter the string:\n");
    gets(str);
    for(int i=0;str[i];i++)
    {
        v=upper(str[i]);
        if(v=='A'||v=='U'||v=='I'||v=='E'||v=='O')
            a++;
    }
    printf("The total vowel in string %d",a);
    getch();
    return 0;
}

char upper(char c)
{
    if(c>90)
    {
        c=c-32;
    }
    return c;

}
