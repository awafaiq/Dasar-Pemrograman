#include <stdio.h>
#define llu unsigned long long int

int main(){
    llu N; scanf("%llu", &N);

    printf("aku suka ");

    if(N % 2 != 0){
        printf("%llu", N % 2);
    }
    if(N % 4 != 0){
        printf("%llu", N % 4);
    }
    if(N % 7 != 0){
        printf("%llu", N % 7);
    }
    if(N % 9 != 0){
       printf("%llu", N % 9);
    }
    printf(" dasar pemrograman");

}
