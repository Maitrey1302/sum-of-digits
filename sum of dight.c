//Name-Maitrey Pangal
//email id-marshpangal@gmail.com
// to calculate sum of digits using recursion
#include <stdio.h>
sumofdight(int num);
int main()
{
    int num,sum;
    printf("enter a no");
    scanf("%d",&num);
    sum=sumofdight(num);
    printf("sum of digit of %d=%d",num,sum);
}
int sumofdight(int num)
{
    if(num==0)
    return 0;
    return((num%10)+sumofdight(num/10));
    
}
