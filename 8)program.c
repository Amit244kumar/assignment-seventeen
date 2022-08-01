int main()
{
    char str1[20],str2[20];
    printf("Enter the string:\n");
    gets(str1);
    for(int i=0;str1[i];i++)
        str2[i]=str1[i];
    printf("The string copied\n%s",str2);
    getch();
    return 0;
}
