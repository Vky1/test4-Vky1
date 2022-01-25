#include<stdio.h>
#include<math.h>
float input()
{
    int n;
    printf("rnter n value");
    scanf("%d",&n);
    return n;
}
float my_sqrt(int n)
{
    float res;
    res = sqrt(n);
    return res;
}
void output(float res)
{
    printf("the square root of a number is %f",res);
}
int main()
{
    float n,res;
    n=input();
    res = my_sqrt(n);
    output(res);
    return 0;
}