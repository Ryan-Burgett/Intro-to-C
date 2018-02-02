
#include <stdio.h>
int ansToLife(int count);
int evenOrOdd(int num);
int printIsFun(int t);
int  main() {
	int count, num, t;
	printf("Please input an integer for count:\n");
	scanf("%d", &count);
	printf("Please input an integer number: \n");
	scanf("%d", &num);
	printf("Please input a Number of Sad (Integer) : \n");
	scanf("%d", &t);	
	
	ansToLife(count);
	evenOrOdd(num);
	printIsFun(t);

return 0;
}

int ansToLife(int count){
	int i;
	for(i = 0; i < count && count< 42; i++){
		printf("Counting to Life: %d\n", i);
	}
	printf("WRONG!\nThe Answer To Life Is 42\n\n\n\n");
	return 0;
}

int evenOrOdd(int num){
	if(num % 2 == 1){
		printf("%d is an ODD number./n\n\n\n", num);
	}
	else{
		printf("%d is an EVEN number./n\n\n\n", num);
	}
	return 0;
}

int printIsFun(int t){
	int i;
	for(i =0; i < t; i++){
	 if(!printf("It is sad."));
	 else{
	 	printf(" Now it's happy :(\n");
	 }
	 
	}
	return 0;
}
