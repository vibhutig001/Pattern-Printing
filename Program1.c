#include<stdio.h>
//1    2   3    4   5   6
// *   *   *   *   *   *   *   *   *   *
void Display()
{
    int iCnt=0;
    for(iCnt=1;iCnt<=6;iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}
int main()
{
    Display();

    return 0;
}