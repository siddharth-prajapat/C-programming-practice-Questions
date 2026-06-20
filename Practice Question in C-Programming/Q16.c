
/*WAP to input student name and three subject marks from user and print its name, total of
marks, percentage and division using else if ladder.  */
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[20],c;
    int hindi,english,math,rolln,total;
    float per;
    printf("Enter Your Name :- ");
    scanf("%s",&name);
    printf("Enter Your Roll No. :- ");
    scanf("%d",&rolln);
    printf("Enter Your Hindi Marks :- ");
    scanf("%d",&hindi);
    printf("Enter Your English Marks :- ");
    scanf("%d",&english);
    printf("Enter Your Maths Marks :- ");
    scanf("%d",&math);

    printf("\n\n\t---Student Detail are---\n");
    printf("\n\t----------------------------\n");
    printf("\n\tStudent Name is :- %s\n",name);
    printf("\n\tStudent Roll Number is :- %d\n",rolln);
    printf("\n\tHindi marks is :- %d\n",hindi);
    printf("\n\tEnglish marks is :- %d\n",english);
    printf("\n\tMathmetics marks is :- %d\n",math);
    total = hindi + english + math;
    printf("\n\tTotal Marks is :- %d/300\n",total);
    per = total/300.0*100;
    printf("\n\tPercentage of your is :- %.2f%%\n",per);
    if (per >= 75 && per <= 100){
        printf("\n\tYour Rank is First Division with Distinction\n");
    }
    else if(per >= 60 && per < 75){
        printf("\n\tYour Rank is First Division \n");
    }
   else if (per >= 50 && per < 60){
        printf("\n\tYour Rank is Second Division\n");

    }
    else if(per >= 40 && per < 50){
        printf("\n\tYour Rank is Third Division\n");

    }
    else{
        printf("\n\tYou are Fail in The Exam");
    }



}
