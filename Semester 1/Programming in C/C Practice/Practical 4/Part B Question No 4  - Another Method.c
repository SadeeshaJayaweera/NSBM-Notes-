#include<stdio.h>
int main()
{
    char letter;

    printf("Please Enter a Leter: ");
    scanf("%c", &letter);

    switch(letter) {

        case'a':
    printf("The Letter %c is a Vowel", letter);
    break;

    case'e':
    printf("The Letter %c is a Vowel", letter);
    break;

    case'i':
    printf("The Letter %c is a Vowel", letter);
    break;

    case'o':
    printf("The Letter %c is a Vowel", letter);
    break;

    case'u':
    printf("The Letter %c is a Vowel", letter);
    break;

    default:
    printf("The Letter %c is not a Vowel", letter);
    break;

    }





}
