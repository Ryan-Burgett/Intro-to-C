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
