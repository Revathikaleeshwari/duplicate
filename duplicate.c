#include<stdio.h>
#include<string.h>
int main()
{
char str[256];
int i,j,k,ch,flag;
printf("Enter your input string:");
fgets(str,256,stdin);
str[strlen(str)-1]='\0';
while(str[i]!='\0')
{
ch=str[i];
j=i+1;
while(str[j]!='\0')
{
if(str[j]==ch)
{
k=j;
while(str[k]!='\0')
{
str[k]=str[k+1];
k++;
}
}
else
{
j++;
}
}
i++;
}
printf("After removing duplicates: %s\n",str);
return 0;
}
