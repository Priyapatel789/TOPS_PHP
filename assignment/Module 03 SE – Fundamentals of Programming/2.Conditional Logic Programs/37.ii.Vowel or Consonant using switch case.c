//C program for show ii. Vowel or Consonant using switch case 

#include<stdio.h>
main()
{
	char a; //a:alphabet
	
	printf(" Enter any Alphabet : ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a': 
			printf(" %c is Vowel.",a);
			break;
		case 'e': 
			printf(" %c is Vowel.",a);
			break;
		case 'i': 
			printf(" %c is Vowel.",a);
			break;
		case 'o': 
			printf(" %c is Vowel.",a);
			break;
		case 'u': 
			printf(" %c is Vowel.",a);
			break;
		case 'A': 
			printf(" %c is Vowel.",a);
			break;
		case 'E': 
			printf(" %c is Vowel.",a);
			break;
		case 'I':
			printf(" %c is Vowel.",a);
			break;
		case 'O':
			printf(" %c is Vowel.",a);
			break;
		case 'U':
			printf(" %c is Vowel.",a);
			break;
		default:
			printf(" %c is Consonant.",a);
	}
}

