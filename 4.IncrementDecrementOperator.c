//Program of increment and decrement oprator

#include<stdio.h>

int main()
{
    int a = 21,l,m,n,o;

    l = a++;
    printf("The value of c = a++ : %d\n",l);

    m = ++a;
    printf("The value of c = ++a : %d\n",m);
    
    n = a--;
    printf("The value of c = a-- : %d\n",n);

    o = --a;
    printf("The value of c = --a : %d\n",o);

    return 0;
}
