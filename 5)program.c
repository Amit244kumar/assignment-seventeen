int main()
{
    char str[20];
    printf("Enter the string\n");
    gets(str);
    for(int i=0;str[i];i++)
    {

        if(str[i]<91&&str[i]!=32)
        {
            str[i]+=32;
        }
    }
    printf("%s",str);
    getch();
    return 0;
}
