/*         Ryan Burgett
        rdb@iastate.edu 
        CPRE 185 Section L  
Programming Practice NUMBER 5
<Reflection 1 What were you trying to learn or achieve?>
                I was trying to create a program that cycles through a given set of numbers using pointers.
 <Reflection 2 Were you successful? Why or Why not?>
        I was successful. My program will cycle through a set of three integers.
<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
        I would make my program able to cycle through a chosen number of integers not just three.
<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
        I learned that if you use pointers as parameters you have to use pointers throughout the entire function.
<Other questions/comments for Instructors>
        Answer here (optional)
*/

#include<stdio.h>

void cycle(int *a, int *b, int *c);

int main(){
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);

	cycle(&a, &b, &c);

    return 0;
}

void cycle(int *a, int *b, int *c){

    int temp;

	printf("Values before cycling:\n");
    printf("a = %d \nb = %d \nc = %d\n", *a, *b, *c);
    
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
    
    printf("Value after cycling:\n");
    printf("a = %d \nb = %d \nc = %d\n", *a, *b, *c);
}