#include <stdio.h>

int main() 
{ 
    char a;
    char word[200];
    char sentence[2000];
    printf("Enter a value for a :");
    scanf(" %c",&a);
    printf("\nEnter a wordc:");
    scanf(" %s",&word);
    printf("\n Enter a sentence :ur are");
    scanf(" %[^\n]",&sentence);
    printf("\n a is %c \n the word is %s\n the sentence is %s",a,word,sentence);
    return 0;
}
