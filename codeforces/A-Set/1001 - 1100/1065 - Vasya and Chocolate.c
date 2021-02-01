#include <stdio.h>
 
long long s, a, b, c, ans, temp;
int t;

int main() {
	scanf("%d", &t);

	while (t--) {
		scanf("%I64d %I64d %I64d %I64d", &s, &a, &b, &c);
		temp = s / c;
		ans = temp + (temp / a)*b;
		printf("%I64d\n", ans);
	}
	return 0;
}