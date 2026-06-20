

/*Armstrong Number program*/
#include<stdio.h>
#include<math.h>
void main()
{
    int limit , temp,len,x;
    printf("***Finding Armstrong number between limit ***\n\n");
    printf("enter an end limit--");
    scanf("%d",&limit);
    printf("\n\n");
    printf("Arm strong numbers between %d are
           :", limit);
    for(int i=0;i<=limit;i++){
        for(len=0,temp=i;temp>0;len++,temp/=10);
        for(x=0,temp=i;temp>0;x+pow(i,len),temp/=10);
        if(x==i)
            printf("%d ",i);
    }
}
