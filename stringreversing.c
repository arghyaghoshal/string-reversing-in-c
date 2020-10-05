
#include <stdio.h>
#include <string.h>
int main()
{
	char mystring[50];
	int len, i;
		
	//print a string about the program
	printf("C Program to reverse a string\n");
    printf("Enter a string: ");
   	
	//get the input string from the user
	scanf("%s", mystring);
	
	//find the length of the string using strlen()
	len = strlen(mystring);
	
	//loop through the string and print it backwards
    printf("The reversified string is:-\n");
	for(i=len-1; i>=0; i--){
		printf("%c", mystring[i]);	
	}
    getch();
    return 0;
}