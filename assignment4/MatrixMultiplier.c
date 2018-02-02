/*         Ryan Burgett
        rdb@iastate.edu 
        CPRE 185 Section L  
Programming Practice NUMBER 4
<Reflection 1 What were you trying to learn or achieve?>
                I was trying to create a program that acts as a matrix multiplication calculator.
 <Reflection 2 Were you successful? Why or Why not?>
        I was successful. My program will multiply two matrices of any size up to 10x10.
<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
        I would figure out a way to include more functions in my program to make main look cleaner.
<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
        Arrays need to be passed as pointers not arrays. Much of my debugging process was determining what needed to be passed as what.
<Other questions/comments for Instructors>
        Answer here (optional)
*/

#include <stdio.h>
  
void printMatrix(int arr[10][10], int row, int col);
 
int main(){
  int rFirst, cFirst, rSecond, cSecond, c, d, k, sum = 0;
  int first[10][10], second[10][10], final[10][10];
  
//Gets Dimensions of first Matrix 
	printf("Enter the number of rows and columns of the first matrix:\n");
	scanf("%d%d", &rFirst, &cFirst);
	
//Gets Elements of First Matrix	
	printf("Enter the elements of first matrix:\n");
 
	for (c = 0; c < rFirst; c++){
		for (d = 0; d < cFirst; d++){
      		scanf("%d", &first[c][d]);
      		}
      	}
 //Gets Dimensions of Second Matrix
	printf("Enter the number of rows and columns of second matrix:\n");
	scanf("%d%d", &rSecond, &cSecond);

//Determines if the matrices can be multiplied
	if ( rFirst != rSecond){
		printf("The Matrices cannot be multiplied.\n");
    }
	else {
    	printf("Enter the elements of second matrix:\n");
 
 //Gets Elements of the Second Matrix
    	for( c = 0; c < rSecond ; c++){
      		for( d = 0; d < cSecond ; d++){
        		scanf("%d", &second[c][d]);
        	}
        }
 //Calculates the value of each element in the Final Matrix
    	for ( c = 0; c < rFirst; c++){
     		
     		for ( d = 0; d < cSecond; d++) {
        		
        		for ( k = 0; k < rSecond; k++){
          			sum = sum + first[c][k]*second[k][d];
        		}
 
        		final[c][d] = sum;
        		sum = 0;
      		}
    	}
 
    	printf("The Product of the matrices:\n");
 		printMatrix(final, rFirst, cSecond);
	 	printf("\n");
    }
    
  return 0;
}

void printMatrix(int arr[10][10], int row, int col){
    int i, j;
    
    for (i = 0; i < row; i++){
      	for (j = 0; j < col; j++){
        	printf("%d ", arr[i][j]);
        }
    	printf("\n");
    }
}
 

