#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i;
    scanf("%d %d %d", &a, &b, &c);
    d = a+b+c;
    e = a+b*c;
    f = a*(b+c);
    g = a*b*c;
    h = (a+b)*c;
    i = a*b+c;
    
    int arr[6] = {d, e, f, g, h, i};
    int palinggede = arr[0];
    for (int j = 1; j < 6; j++) 
        {
		if (palinggede < arr[j])
			palinggede = arr[j];
	    }
 
    printf("%d", palinggede);
    return 0;
}
