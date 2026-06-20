/******Student Result Management System program******/


#include<stdio.h>
#include<conio.h>/*These are all Header Files use in this program*/
#include<string.h>
#include<stdlib.h>
/*struct SRMS
{
    int SRM
} RMS;*/
struct Student/*this is structure */
 {
    int Rolln;
    char name[30];
    int total,hindi, english, maths;   // Subject Marks
    float percentege;
    char grade;
}st;
void addStudent();
float calculategrade();
void updateStudent();   /*These are All Function*/
void showStudent();
void searchStudent();
void topperList();
void deleteStudent();


void main()/*This is Main Function*/
{
   char c;
   system("cls");
   printf("\n\t\t\t----------------------------------------------------------------------------------------------\n");
   printf("\t\t\t\t\t\t*****Student Result Management System*****") ;
   printf("\n\t\t\t----------------------------------------------------------------------------------------------\n\n");
   printf("------------\n");
   printf("Main Menu :-");
   printf("\n------------\n\n");
    printf("1. Add-Student\t2. Update-Student\n");
    printf("3. Show-Student\t4. Search-Student\n");
    printf("5. TopperList\t6. Delete-Student\n");
    printf("7. Exit\n\n");
    printf("-------------------------------------------------------------------");
    printf("\nEnter Your Choice -- ");
         c=getchar();
    if(c=='1'){
        addStudent();
    }
    else if (c=='2'){
    updateStudent();
    }
    else if(c=='3'){
      showStudent();

    }
    else if(c=='4'){
            searchStudent();

    }
   else if(c=='5'){
        topperList();
    }
    else if(c=='6'){
        deleteStudent();
    }
   else if(c=='7'){
        exit(0);
   }
   else{
    printf("\nInvalid Choice!!\n\n");
    main();

   }
        printf("Enter Your Choice -- ");
    printf("\n Do you want to continu press 1 else 0 --");
    c=getch();
    if(c=='1'){
    main();
    }
}
void addStudent()/*This is Add Student module Function*/
{
    FILE *fp,fptr;/*this is file pointer*/
    system("cls");/*this is use for Clear the output screen*/
    char c;
       printf("\t\t\t----------------------------------------------------------------------------------------------\n");
   printf("\t\t\t\t\t\t\t****Add-Student Module****") ;
   printf("\n\t\t\t----------------------------------------------------------------------------------------------\n\n");
    printf("\nEnter student name :- ");
     scanf(" %[^\n]",st.name);  /* %[^\n] is called a Scanset (or Scan Set) in C Programing It is a special scanf() format specifier that reads all characters until a newline (\n) is encountered. */
    printf("\nEnter Roll Number :- ");
    scanf("%d",&st.Rolln);
    printf("\nEnter hindi Marks :- ");
    scanf("%d",&st.hindi);
      printf("\nEnter English Marks :- ");
    scanf("%d",&st.english);
      printf("\nEnter Maths Marks :- ");
    scanf("%d",&st.maths);
      st.total = st.hindi+st.maths+st.english;
    st.percentege = st.total/300.0*100;

    st.grade = calculategrade();
      printf("\n-------------------------------------------------------");
    printf("\nDo you want to insert Record.. Press 1 else any key..");
    c=getch();
    if(c=='1'){
        fp = fopen("stu.txt","a+");/*file is open in append mode*/
        fseek(fp, 0, SEEK_END);/*fseek() is a file handling function in C that is used to move the file pointer to a specified location within a file.*/

        if (ftell(fp) == 0){/*ftell() is a file handling function in C that returns the current position of the file pointer in bytes from the beginning of the file.*/
        fprintf(fp,"%-20s %8s %8s %8s %8s %10s %5s\n","Name","Roll","Hindi","English","Maths","Percentage","Greads");
        fprintf(fp,"---------------------------------------------------------------------------------------\n");
        }
       fprintf(fp, "%-20s %8d %8d %8d %8d %10.2f %5c\n",st.name,st.Rolln,st.hindi,st.english,st.maths,st.percentege,st.grade);
      // fprintf(fptr, "%d\n", RMS.SRM);

        /*fclose(fp);
        printf("\n\nData Successfully Inserted..\n\n");*/
       // fclose(fptr);
    }
    fclose(fp);/*file is close*/
        printf("\n \n!Data Successfully Inserted..\n");
  printf("\n\nDo you want to continue with Add Student Module or GoTo Main Menu or Exit Project\n");
    printf("1. Continue with Add Module\t2. Main Menu\t3. Exit");
    c=getch();
    if(c=='1'){
        addStudent();
    }
    else if (c=='2'){
        main();
    }
    else if (c=='3'){
        exit(0);
    }


}
float calculategrade()/*this is grade calculate Function*/
{

    if(st.percentege > 90 && st.percentege <= 100){
        return 'A';
    }
    else if (st.percentege > 75 && st.percentege <= 90){
       return 'B';
    }
      else if (st.percentege > 60 && st.percentege <= 75){
return 'C';
    }
      else if (st.percentege > 50 && st.percentege <= 60){
         return 'D';
    }
      else if (st.percentege > 40 && st.percentege <= 50){
       return 'E';

    }
    st.grade =  st.percentege;


}
void showStudent()/*this is show student function*/
{
    FILE *fp;
    system("cls");
    char line[200];
         printf("\t\t\t----------------------------------------------------------------------------------------------\n");
   printf("\t\t\t\t\t\t\t****Show-Student Module****") ;
   printf("\n\t\t\t----------------------------------------------------------------------------------------------\n\n");
    printf("\n***All the data of Save student***");
     printf("\n---------------------------------------\n\n");
    fp=fopen("stu.txt","r");
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);
    while (fscanf(fp, " %29[^0-9] %d %d %d %d %f %c",st.name,&st.Rolln,&st.hindi,&st.english,&st.maths,&st.percentege,&st.grade)==7){
   //
     printf("**Student List**\n");
    printf("----------------------------\n");
    printf("Name       : %s\n", st.name);
    printf("Roll No    : %d\n", st.Rolln);
    printf("Hindi      : %d\n", st.hindi);
    printf("English    : %d\n", st.english);
    printf("Maths      : %d\n", st.maths);
    printf("Percentage : %.2f\n", st.percentege);
    printf("Grade      : %c\n", st.grade);
    printf("----------------------------\n\n");
    }
    fclose(fp);
}
void searchStudent()/*this is search student function*/
{
    FILE *fp;
    int Count=0;
    char line[200];
    system("cls");
    int rn;
    printf("\t\t\t----------------------------------------------------------------------------------------------\n");
   printf("\t\t\t\t\t\t\t****Search-Student Module****") ;
   printf("\n\t\t\t----------------------------------------------------------------------------------------------\n\n");
    printf("\n---------------------------------------");
    printf("\nEnter the Roll Number :- ");
    scanf("%d",&rn);
    fp=fopen("stu.txt","r");
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);
     while (fscanf(fp, " %29[^0-9] %d %d %d %d %f %c",st.name,&st.Rolln,&st.hindi,&st.english,&st.maths,&st.percentege,&st.grade)==7){
    if(rn==st.Rolln){
        printf("\n\n\tRecord Found:\n");
    printf("----------------------------\n");
    printf("Name       : %s\n", st.name);
    printf("Roll No    : %d\n", st.Rolln);
    printf("Hindi      : %d\n", st.hindi);
    printf("English    : %d\n", st.english);
    printf("Maths      : %d\n", st.maths);
    printf("Percentage : %.2f\n", st.percentege);
    printf("Grade      : %c\n", st.grade);
    printf("----------------------------\n\n");
    }
    Count++;



   /* else {
        printf("No record Found");
    }*/
}
if(Count>0){
    printf("Record are Founded\n\n");
}
else{
    printf("Record are not found\n\n");
}
}
void topperList()/*this is topper list function*/
{
    FILE *fp;
    char line[200];

    float first = 0, second = 0, third = 0;

    system("cls");

    printf("\t\t\t----------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t****Topper-List Module****");
    printf("\n\t\t\t----------------------------------------------------------------------------------------------\n\n");

    fp = fopen("stu.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!");
        return;
    }

    /* Skip Header Lines */
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);

    /* Find Top 3 Percentages */
    while(fscanf(fp, " %29[^0-9] %d %d %d %d %f %c",
                 st.name,
                 &st.Rolln,
                 &st.hindi,
                 &st.english,
                 &st.maths,
                 &st.percentege,
                 &st.grade) == 7)
    {
        if(st.percentege > first)
        {
            third = second;
            second = first;
            first = st.percentege;
        }
        else if(st.percentege > second)
        {
            third = second;
            second = st.percentege;
        }
        else if(st.percentege > third)
        {
            third = st.percentege;
        }
    }

    rewind(fp);

    /* Skip Header Again */
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);

    /* Print Top 3 Students */
    while(fscanf(fp, " %29[^0-9] %d %d %d %d %f %c",
                 st.name,
                 &st.Rolln,
                 &st.hindi,
                 &st.english,
                 &st.maths,
                 &st.percentege,
                 &st.grade) == 7)
    {
        if(st.percentege == first)
        {
            printf("\n1st Topper of the year:\n");
            printf("----------------------------\n");
            printf("Name       : %s\n", st.name);
            printf("Roll No    : %d\n", st.Rolln);
            printf("Percentage : %.2f\n", st.percentege);
            printf("----------------------------\n");
        }

        else if(st.percentege == second)
        {
            printf("\n2nd Topper of the year:\n");
            printf("----------------------------\n");
            printf("Name       : %s\n", st.name);
            printf("Roll No    : %d\n", st.Rolln);
            printf("Percentage : %.2f\n", st.percentege);
            printf("----------------------------\n");
        }

        else if(st.percentege == third)
        {
            printf("\n3rd Topper of the year:\n");
            printf("----------------------------\n");
            printf("Name       : %s\n", st.name);
            printf("Roll No    : %d\n", st.Rolln);
            printf("Percentage : %.2f\n", st.percentege);
            printf("----------------------------\n");
        }
    }

    fclose(fp);
}
void deleteStudent()/*this is delete student function*/
{
    system("cls");
    FILE *fp,*fpt;
    int found=0;
    int rn;
    char line[200];
    printf("\t\t\t----------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t****Delete-Student Module****");
    printf("\n\t\t\t----------------------------------------------------------------------------------------------\n\n");
    printf("Enter Roll Number For Delete Record :- ");
    scanf("%d",&rn);
    fp=fopen("stu.txt","r");
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);
    fpt=fopen("tem.txt","w");
    while(fscanf(fp," %29[^0-9] %d %d %d %d %f %c",st.name,&st.Rolln,&st.hindi,&st.english,&st.maths,&st.percentege,&st.grade)==7){
        if (rn!=st.Rolln){
        fseek(fpt, 0, SEEK_END);
        if (ftell(fpt) == 0){
        fprintf(fpt,"%-20s %8s %8s %8s %8s %10s %5s\n","Name","Roll","Hindi","English","Maths","Percentage","Greads");
        fprintf(fpt,"---------------------------------------------------------------------------------------\n");
        }
                fprintf(fpt, "%-20s %8d %8d %8d %8d %10.2f %5c\n",st.name,st.Rolln,st.hindi,st.english,st.maths,st.percentege,st.grade);

        }
        else {
            found =1;
        }

    }
    fclose(fp);
    fclose(fpt);
    remove("stu.txt");
    rename("tem.txt","stu.txt");
    if(found){
        printf("\n\nRecord is Succesfully Deleted\n\n");
    }
    else{
        printf("\n\nRecord Not Found!!\n\n");
    }


}
void updateStudent()/*this is update student function*/
{
    system("cls");
    FILE *fp,*fpt;
    int rn,roll;
    char c;
    char line[200];
    char name[100];
    printf("\t\t\t----------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t****Update-Student Module****");
    printf("\n\t\t\t----------------------------------------------------------------------------------------------\n\n");
    printf("Enter Roll Number :-");
    scanf("%d",&rn);
    fp=fopen("stu.txt","r");
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);
    fpt=fopen("temp.txt","w");
    fseek(fpt, 0, SEEK_END);
        if (ftell(fpt) == 0){
        fprintf(fpt,"%-20s %8s %8s %8s %8s %10s %5s\n","Name","Roll","Hindi","English","Maths","Percentage","Greads");
        fprintf(fpt,"---------------------------------------------------------------------------------------\n");
        }
 while (fscanf(fp, " %29[^0-9] %d %d %d %d %f %c",st.name,&st.Rolln,&st.hindi,&st.english,&st.maths,&st.percentege,&st.grade)==7){
        if(rn==st.Rolln){
                 printf("\t\nRecord Found:\n");
    printf("----------------------------\n");
    printf("Name       : %s\n", st.name);
    printf("Roll No    : %d\n", st.Rolln);
    printf("Hindi      : %d\n", st.hindi);
    printf("English    : %d\n", st.english);
    printf("Maths      : %d\n", st.maths);
    printf("Percentage : %.2f\n", st.percentege);
    printf("Grade      : %c\n", st.grade);
    printf("----------------------------\n\n");

        }
 }

        printf("Please Choose What you Wnant  to change---");
printf("\n1. Change Name");
printf("\n2. Change Roll Number");
printf("\n3. Change Hindi Marks");
printf("\n4. Change English Marks");/*these are option of what you change*/
printf("\n5. Change maths Marks");
printf("\n6. Exit option");
printf("\n\nEnter Your Choice:- ");
c=getch();
    if(c=='1'){
        printf("\n\nEnter your Name :- ");
        scanf(" %[^\n]",st.name);
        //strcpy(st.name,name);

    }
    else if (c=='2'){
             printf("\n\nEnter your Roll number :- ");
        scanf("%d",&st.Rolln);

    }
     else if (c=='3'){
             printf("\n\nEnter your Hindi Marks :- ");
        scanf("%d",&st.hindi);



    }
    else if (c=='4'){
             printf("\n\nEnter your English Marks :- ");
        scanf("%d",&st.english);



}
else if (c=='5'){
             printf("\n\nEnter your Maths Marks :- ");
        scanf("%d",&st.maths);


    }
    else if(c=='6'){
        exit(0);
    }
     st.total = st.hindi+st.maths+st.english;
    st.percentege = st.total/300.0*100;
fprintf(fpt, "%-20s %8d %8d %8d %8d %10.2f %5c\n",st.name,st.Rolln,st.hindi,st.english,st.maths,st.percentege,st.grade);

/* fseek(fpt, 0, SEEK_END);
        if (ftell(fpt) == 0){
        fprintf(fpt,"%-20s %8s %8s %8s %8s %10s %5s\n","Name","Roll","Hindi","English","Maths","Percentage","Greads");
        fprintf(fpt,"---------------------------------------------------------------------------------------\n");
        }*/

  //fprintf(fpt, "%-20s %8d %8d %8d %8d %10.2f %5c\n",st.name,st.Rolln,st.hindi,st.english,st.maths,st.percentege,st.grade);

 if (rn!=st.Rolln){
       /* fseek(fpt, 0, SEEK_END);
        if (ftell(fpt) == 0){
        fprintf(fpt,"%-20s %8s %8s %8s %8s %10s %5s\n","Name","Roll","Hindi","English","Maths","Percentage","Greads");
        fprintf(fpt,"---------------------------------------------------------------------------------------\n");
        }*/
    fprintf(fpt, "%-20s %8d %8d %8d %8d %10.2f %5c\n",st.name,st.Rolln,st.hindi,st.english,st.maths,st.percentege,st.grade);

    }

    fclose(fp);
    fclose(fpt);
    remove("stu.txt");
    rename("temp.txt","stu.txt");
     printf("\n\n Changes updated successfully!\n\n");

}
