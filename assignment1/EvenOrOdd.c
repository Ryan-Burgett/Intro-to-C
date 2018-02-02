/*         Ryan Burgett
        rdb@iastate.edu (Should be your isu email)
        CPRE 185 Section L  (change to your class and section)
Programming Practice 1
         <Reflection 1 What were you trying to learn or achieve?>
                I was trying to create three functions and have them called in main.
        <Reflection 2 Were you successful? Why or Why not?>
        My functions were successful because they output the correct values and did not cause any interference between each other.
<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
        I would make the scan functions inside of their respective functions so that my main function would look even better.
<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
        I learned that boolean operators work with strings and they work with print statements. This allowed me to output both the if and else statements in a conditional. While it is not extremely significant in my code i thought it was an interesting fact.
<Other questions/comments for Instructors>
        I hope you enjoy some of my humor, if you don't please don't take away points.
*/
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
	 if(!printf("It's Real Sad Boy Hours"));
	 else{
	 	printf(" If you're up it's probably cause you're an Engineer :(\n");
	 }
	 
	}
	return 0;
}