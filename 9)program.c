int main()
{
    char str[20];
    printf("Enter the string:\n");
    gets(str);
    ascending(str);
    printf("%s",str);
    getch();
    return 0;
}
void ascending(char s[])        //amit kumar
{
    int i,c;
    char t;
    for(i=0;s[i];i++)
    {
        if(s[i]!=32){
          c=find(s,i);
          t=s[c];
          s[c]=s[i];
          s[i]=t;
        }
    }
}

int find(char s[],int i)
{
    int b=i;
    char d=s[i];
    i++;
    while(s[i])
    {
        if(s[i]!=' ')
        if(d>s[i])
        {
            d=s[i];
            b=i;
        }
        i++;
    }
    return b;
}
