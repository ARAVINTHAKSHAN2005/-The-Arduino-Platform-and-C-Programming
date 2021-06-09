#include <stdio.h>

int main()
{
	int i;
	int n1 = 0, n2 = 1;
	int n = 4;
    int newNum = n1 + n2;
    printf("Fibonacci Sequence: 0, 1, ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", newNum);
        n1 = n2;
        n2 = newNum;
        newNum = n1 + n2;
    }

}