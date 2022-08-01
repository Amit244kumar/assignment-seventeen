int frequency(char[],char);
int main()
{
    char str[20],c;
    printf("Enter the string:\n");
    gets(str);
    printf("Enter the character:\n");
    scanf("%c",&c);
    printf("The frequency of '%c' character is %d",c,frequency(str,c));
    getch();
    return 0;
}
int frequency(char s[],char c)
{
    int i,g=0;
    for(i=0;s[i];i++)
        if(s[i]==c)
           g++;
    return g;
}
