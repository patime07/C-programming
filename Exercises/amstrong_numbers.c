#include<stdio.h>
 //does not print all Amstrong numbers !
int Amstrong(int x);
int main (){
    int start,end,i;
    printf("The range starting: ");
    scanf("%d",&start);
    printf("The range ending: ");
    scanf("%d",&end);
        printf("Armstrong numbers in given range are:\n");
    for (i=start; i<=end; i++)
    {
        if (Amstrong(i)){
            printf("%d\n",i);}
    }
    return 0;
}

int Amstrong(int x){
        int sum=0,r,temp=x;
        while (temp!=0) {
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
        
    if (sum==x) {
        return 1;}
    else
        return 0;
    }

    
    
    
    

