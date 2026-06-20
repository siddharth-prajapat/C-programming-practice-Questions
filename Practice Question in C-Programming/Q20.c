
/* WAP to input a character from user and check character is vowel or not.  */
#include<stdio.h>
void main()
{
    char a;
    printf("Enter Character :- ");
    scanf("%c",&a);
    if(a == 'a'|'A' || a == 'e'|'E' || a == 'i'|'I' || a == 'o'|'o' || a == 'u'|'U'){
        printf("Character is Vowel");
    }
}
