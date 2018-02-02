#include <stdio.h>

int main() {
	int i = 1;
	while (i<3){
		int j = 1;
		while(j<4)
			{
			printf("%d ",i+j);
			j++;
			}
		printf("\n");
		i++;
		}
return 0;
}