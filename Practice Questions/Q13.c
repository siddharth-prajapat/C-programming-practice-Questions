
/* WAP to input a character from user and print its ASCII code with do you want to continue
option.  */
#include<stdio.h>
#include<conio.h>
void main()
{
   char ch,c;
   printf("Enter a Character :- ");
   scanf("%c",&ch);

   printf("\nYour Character ASCII is %d\n",ch);
   printf("do you want to Continue press 1\n");
   c = getch();
   if(c == '1'){
    main();
   }
   else{

   }

}

