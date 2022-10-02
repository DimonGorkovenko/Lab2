#include <stdio.h>

int main()
{
    int x, a, b, c;
    a = 4;  //сотни
    b = 0;  //десятки
    c = 0;  //единицы
    for (x = 400; x < 500; x = x) {  //скобка 1
        x++;
        a = x / 100;
        b = (x - a * 100) / 10;
        c = x - a * 100 - b * 10;
        if (36 * (a * 100 + b * 10 + c) == 47 * (c * 100 + b * 10 + a)) {  //скобка 2
            if (a + b + c == 9)
                break;
            else continue;
        }  //скобка 2
        else continue;
    }  //скобка 1
    printf("%d", x);
    return 0;
}
