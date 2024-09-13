#include <stdio.h>
#include <stdbool.h>

bool isPrime(long long num) {
    if (num <= 1)
        return false;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    long long num;

    scanf("%lld", &num);

    if (isPrime(num)) {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }

    return 0;
}
