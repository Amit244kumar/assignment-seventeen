int main()
{
    char str[20],i;
    printf("Enter the string:\n");
    gets(str);
    for(i=0;str[i];i++);
    printf("The length of string is %d",i);
    getch();
    return 0;
}
