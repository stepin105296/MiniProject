#include <stdio.h>

int prime(int);

int prime(int a){
    for(int i = 2; i < a; i++){
        if(a%i == 0){
            return 1;
        }
    }
    return 0;
}

int main(){
    int a;
    scanf("%d", &a);
    int flag = prime(a);
    if(flag){
        printf("NOT PRIME");
    }
    else{
        printf("PRIME");
    }
    return 0;
}
