#include<stdio.h>
//input= 4
//Output=a  b   c   d
void Display(int iNo)
{
    int iCnt=0;
    char ch='\0';

    for(iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
        
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}