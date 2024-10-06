#include <stdio.h>
int find_index(int arr[], int n, int K)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == K)
			return i;
		else if (arr[i] > K)
			return i;
	return n;
}

int main()
{
	int arr[] = { 1, 3, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int K = 2;
	printf("%d\n", find_index(arr, n, K));
	return 0;
}

