#include<iostream>
#include<algorithm>
using namespace std;
int a[100005];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n);
    long long sum = 0;
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= sum)
        {
            maximum++;
            sum += a[i];
        }
    }
    printf("%d\n", maximum);
    return 0;
}
