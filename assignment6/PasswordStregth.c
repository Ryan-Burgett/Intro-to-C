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




