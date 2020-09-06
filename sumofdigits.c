#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,a=0;
    scanf("%d", &n);
    do {
        a += (n % 10);
        n /= 10;
    }
    while(n != 0);
    printf("%d", a); 
    return 0;
}