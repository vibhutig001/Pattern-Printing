#include<stdio.h>
//input= 6
//Output= 0 1 2 3 4 5 6 
void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
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