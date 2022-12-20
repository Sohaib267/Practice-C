
#include <stdio.h>
#include <conio.h>
 
int main(){
    char c;
    printf("Enter an Alphabet: ");
    scanf("%c", &c);
    
    if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u' || c=='A'
          || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("%c is a Vowel\n", c);
    } else {
        printf("%c is a Consonant\n", c);
    }
    getch();
    return 0;
}