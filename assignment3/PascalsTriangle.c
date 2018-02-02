/*         Ryan Burgett
        rdb@iastate.edu 
        CPRE 185 Section L  
Programming Practice NUMBER
         <Reflection 1 What were you trying to learn or achieve?>
                I was trying to create a program that prints pascals triangle using arrays and loops.
        <Reflection 2 Were you successful? Why or Why not?>
        I was successful to a point. I can get my program to print out the values of pascals triangle but only up to the 27th row.
        In Order to go past the 27th row I would have to change the value that I commented on to a lager number. But as the number gets larger the triangle looks less and less like a triangle.
<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
        I would figure out a way to print the triangle without having it rely on the number of digits each number can have in order for spacing to work out.
<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
        The number that comes befor %d is very important. If the number is incorrect all of my program breaks.
<Other questions/comments for Instructors>
        Answer here (optional)
*/

#include <stdio.h>

void pTriangle(int rows);
int main(){
	
	int r;
	
	printf("How many rows of Pascal's Triangle would you like to print? (Up to 27)");
	scanf("%d", &r);
	
	pTriangle(r);
	
	return 0;
}

void pTriangle(int rows){
	int p[rows][rows];
	int i,j,k;
	
	for(i=0;i<rows;i++){
		j=1;
		p[i][0]=1;
		p[i][i]=1;
		
		while(j<i){
			p[i][j]=p[i-1][j-1]+p[i-1][j];
			j++;
		}
	}

	for(i=0;i<rows;i++){
		j=rows;
		
		while(j>i){
			printf("  ");
			j--;
		}
		
		for(k=0;k<=i;k++){
			printf("%8d",p[i][k]);		//By raising the number between the % and the d you can increase the number of rows you can output but it makes the shape look less like a triangle.
		}
		
		printf("\n\n");
	}
	
}