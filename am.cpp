#include <stdio.h>
int main ()
{
	float A[100];int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%lf", &A[i]);
	float am;
	for (int i=0; i<n; i++)
		if(A[i]<0)
			am= A[i];
	printf("%lf", am);
}
