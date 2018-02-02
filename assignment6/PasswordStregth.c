/*         Ryan Burgett
        rdb@iastate.edu 
        CPRE 185 Section L  
Programming Practice NUMBER 6
<Reflection 1 What were you trying to learn or achieve?>
                I was trying to create a program that dynamically allocates memory for a password and then determines the "strength" of that password.
 <Reflection 2 Were you successful? Why or Why not?>
        I was successful. My program will dynamically allocate memory and determine the strength of the password.
<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
        I would make my program able to determine the strength of the password based on more than just length.
<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
        I learned that determining the length of a string is important and the compiler wont always catch out of bounds errors.
<Other questions/comments for Instructors>
        Answer here (optional)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char password[100], strength[8], str[30];
	char *key, *strong;   
	int keyLen, strLength;
	
	// Ask user for password
	printf("password:\n") ;   
	scanf("%s",password);

	// Determine the length of the users password, including null character room
	keyLen = strlen(password) + 1;

	// Copy password into dynamically allocated storage
	key = (char*)malloc(keyLen * sizeof(char));
	strcpy(key, password);
	
	//Sets password strength
	if(keyLen<3){
		strcpy(strength, "Weak AF");
	}
	else if(keyLen < 26){
		strcpy(strength, "Ight");
	}
	else{
		strcpy(strength, "Hefty");
	}
	
	strcpy(str, "Your password strength is: ");
	
	//Determine length of strength and str and NULL
	strLength = strlen(strength) + strlen(str) + 2;
	
	//Copy strength into dynamically allocated storage
	strong = (char*)malloc(strLength * sizeof(char));
	strcpy(strong, str);
	
	strcat(strong, strength);
	
	// Print the password and strength
	printf("The password is:\n%s\n", key);
	printf("%s\n", strong);
	
	return 0;
}




