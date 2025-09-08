#include <stdio.h>

// Factorielle en it�ratif avec for
long long fact_for(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

// Factorielle en it�ratif avec while
long long fact_while(int n) {
    long long res = 1;
    int i = 1;
    while (i <= n) {
        res *= i;
        i++;
    }
    return res;
}

// Factorielle en r�cursif
long long fact_rec(int n) {
    if (n == 0 || n == 1) return 1;  // cas de base
    return n * fact_rec(n - 1);      // appel r�cursif
}

int main(void) {
    int n;
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    printf("Factorielle de %d avec for    : %lld\n", n, fact_for(n));
    printf("Factorielle de %d avec while  : %lld\n", n, fact_while(n));
    printf("Factorielle de %d en r�cursif : %lld\n", n, fact_rec(n));

    return 0;
}