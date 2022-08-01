int main()
{
    int n;
    char str[20],temp;
    printf("Enter the string\n");
    gets(str);
    n=length(str);
    for(int i=0;i<n/2;i++)
    {
      temp=str[i];
      str[i]=str[n-1-i];
      str[n-i-1]=temp;
    }
    printf("%s",str);
    getch();
    return 0;
}
 int length(char s[])
 {
     int i;
     for(i=0;s[i];i++);
     return i;
 }
