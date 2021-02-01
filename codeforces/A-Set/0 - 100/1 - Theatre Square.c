#include <stdio.h>

int main()
{
    long long n, m, a;
    scanf("%lli %lli %lli", &n, &m, &a);
    long long kolom, baris, jawaban;
    if (n % a == 0) {
        kolom = n/a;
    }
    else {
        kolom = (n/a)+1;
    }
    if (m % a == 0) {
        baris = m/a;
    }
    else {
        baris = (m/a)+1;
    }
    
    jawaban = kolom*baris;
    printf("%lli", jawaban);

    return 0;
}
