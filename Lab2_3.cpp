#include <stdio.h>

int main()
{
    int x, f1, f2;
    printf("Enter a number x>1: ");
    scanf_s("%d", &x);
    if (x < 2) printf("Incorrect number");
    else { //скобка 1
        f1 = 0; f2 = 1;  //числа Фибоначчи
        for (f1; f1 <= x && f2 <= x; f1 = f1) {  //скобка 2
            f1 = f1 + f2;
            f2 = f2 + f1;
        }  //скобка 2
        if (f2 > x && f1 > x) printf("Next Fibonacci number after x is %d", f1);
        else printf("Next Fibonacci number after x is %d", f2);
    }  //скобка 1
    return 0;
}
