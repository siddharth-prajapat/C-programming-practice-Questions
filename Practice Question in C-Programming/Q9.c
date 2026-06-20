#include<stdio.h>
#include<string.h>
void main()
{
    int m1,amount,meter,bill,meternumber,found=0;
    char month[20];
    char fmonth[20];
    char status[10];
    FILE *fptr;
    printf("Enter Your Meter Number :- ");
    scanf("%d",&meter);
    printf("Enter Month :- ");
    scanf("%s",&month);

   fptr = fopen("bill.txt", "a");

    if(fptr == NULL)
    {
        printf("File open nahi ho rahi!");

    }
        while(fscanf(fptr, "%d %s %s %d", &meternumber, status,month, &amount) != EOF)
        {
     printf("Meter: %d | Month: %s | Status: %s | Amount: %d\n",
               meter, month, status, amount);
                if(meternumber == meter && strcmp(fmonth, month) == 0){
        printf("your Bill is Already paid");
        found = 1;
        break;
}
else{
    printf("Your Bill is due");
}
    }
    fclose(fptr);
//if(found == 1){
    //printf("your Bill is Already paid");
//}
//else{
   // printf("Your Bill is due");
}



//    }

