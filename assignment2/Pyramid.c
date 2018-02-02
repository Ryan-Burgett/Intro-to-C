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
