#include<stdio.h>
//input= 4
//Output=A  B   C   D
void Display(int iNo)
{
    int iCnt=0;
    char ch='\0';

    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
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