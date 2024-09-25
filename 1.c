#include <stdio.h>
#include <math.h>
#define llu unsigned long long int

int main(){
    llu n; scanf("%llu", &n);

    llu result = pow(((n*(n+1)) / 2), 2);
    printf("%llu", result);
}
