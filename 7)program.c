int main()
{
    int c=0,d=0,s=0;
    char str[20];
    printf("Enter the string:\n");
    gets(str);
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
            c++;
        else if(str[i]>='0'&&str[i]<='9')
            d++;
        else
            s++;
    }
    printf("The alphabets in string %d\n",c);
    printf("The digits in string %d\n",d);
    printf("The special character %d\n",s);
    getch();
    return 0;
}
