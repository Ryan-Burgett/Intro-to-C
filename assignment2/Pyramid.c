/*         Ryan Burgett
        rdb@iastate.edu (Should be your isu email)
        CPRE 185 Section L  (change to your class and section)
Programming Practice 1
         <Reflection 1 What were you trying to learn or achieve?>
                I was trying to create a program that would print out a pyramid made of $ with a certain number of layers.
        <Reflection 2 Were you successful? Why or Why not?>
        My program was successful because it output the correct shape and the correct size of pyramid.
<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
        I would make the it inside of a function so i could call it instead of writing it in main.
<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
        I learned that i needed to be careful when writing nested loops because variables are not independent in C so they can be used outside of a loop.
<Other questions/comments for Instructors>
        I hope you enjoy some of my humor, if you don't please don't take away points.
*/
#include <stdio.h>

int main() {
        int numMoney, numRows;
        
        printf("Please enter a number of Moneys:");
        scanf("%d", &numMoney);
        
        numRows = numMoney;

        for (int rows=1; rows <= numRows; rows++) {
                for (int spaces=1; spaces <= numMoney; spaces++) {
                        printf(" ");
                }
                for (int money=1; money <= rows; money++) {
                        printf("$");
                        printf(" ");
                }
                printf("\n");
                numMoney = numMoney - 1;
        }
        return 0;
}