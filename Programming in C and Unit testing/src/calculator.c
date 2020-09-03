#include <stdio.h>

int sum(int, int);
int diff(int, int);

int (*sumptr) (int, int);
int (*diffptr) (int, int);


int main(){
    int a = 7, b = 5, add, sub;
    sumptr = sum;
    diffptr = diff;
    add = sumptr(a, b);
    sub = diffptr(a, b);
    printf("%d\n%d", add, sub);
    return 0;
}

int sum(int a, int b){
    return a+b;
}

int diff(int a, int b){
return a-b;
}
