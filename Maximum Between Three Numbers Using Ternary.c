#include <stdio.h>
int main()
{
	int n1 , n2 , n3, max;
	printf("The First Number Is: ");
	scanf("%d",&n1);
	printf("The Second Number Is: ");
	scanf("%d",&n2);
	printf("The Third Number Is: ");
	scanf("%d",&n3);
	max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	printf("Largest number between %d %d and %d is %d. ",n1, n2, n3, max);
	return 0;
}
