int main()
{
    int a=0;
    char str[20],c;
    printf("Enter the string:\n");
    gets(str);
    printf("Enter the character\n");
    scanf("%c",&c);
    for(int i=0;str[i];i++)
    {
        if(c==str[i])
            a++;
    }
    printf("The '%c' character occurrence is %d",c,a);
    getch();
    return 0;
}
