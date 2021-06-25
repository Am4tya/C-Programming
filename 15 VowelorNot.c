#include <stdio.h>

int main(){
	
//  WAP in c which detects whether the given program is vowel or not.

    char letter;
    printf("Enter character; \n ");
    scanf("%c", &letter);
    
    int isLowerCaseVowel, isUpperCaseVowel;
    
    //  Return true if something is available
    isLowerCaseVowel = (letter== 'a' || letter== 'e' || letter== 'i' || letter== 'o' || letter== 'u');
    isUpperCaseVowel =  (letter== 'A' || letter== 'E' || letter== 'I' || letter== 'O' || letter== 'U');
    
    if(isLowerCaseVowel || isUpperCaseVowel ){
    	printf("%c is vowel",letter);
	}
    else{
    	printf("%c is not vowel",letter);
	}
	return 0;
}
