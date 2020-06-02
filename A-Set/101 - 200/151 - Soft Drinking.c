#include <stdio.h>

int main () {
    long long int n, k, l, c, d, p, nl, np, x, y, z, a;
    float b;
    scanf("%lli %lli %lli %lli %lli %lli %lli %lli", &n, &k, &l, &c, &d, &p, &nl, &np);
    x = k * l;
    y = x/nl;
    z = c * d;
    a = p/np;
    if ( y < z && y<a){
          b= y /n;
        }
    else if ( z < y && z < a) {
        b = z /n;
    }
    else {
        b = a/n;
    }
    printf("%.0f", b);
    return 0;
}
