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
