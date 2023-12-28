#include<stdio.h>

int Sum(int a,int b);
int Product(int c,int d);
int Power(int base,int expo);

int main(){

    int n1,n2;
    char operator;
    int result1, result2, result3;
    printf("Please enter the first number: ");
    scanf("%d",&n1);
    printf("Please enter the second number: ");
    scanf("%d",&n2);
    printf("Please enter one of the following operators:\n + : Addition\n * : Multiplication\n ^ : Power\n ");
    scanf(" %c",&operator);
    
    switch (operator) {
        case '+':
            
            result1= Sum(n1,n2);
            printf("The sum of the two numbers is: %d\n",result1);
            break;
            
        case '*':
            
            result2 =Product(n1,n2);
            printf("The product of the two numbers is: %d\n",result2);
            break;
            
        case '^':
           
            result3= Power(n1,n2);
            printf("%d to the power of %d is: %d\n",n1,n2,result3);
            break;
        default:
            printf("This operator is unvalid\n");
            break;
    }
    
    return 0;
}
int Sum(int a,int b)
{
    int addition;
    addition=a+b;
    return addition;
}

int Product(int c,int d)
{
    int multiplication;
    multiplication=c*d;
    return multiplication;
}

int Power(int base,int expo)
{
int power=1;
    while(expo!=0)
    {
{
    power=power*base;
    expo--;
}
 
   }
    return power;
}
