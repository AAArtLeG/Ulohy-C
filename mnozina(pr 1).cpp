 #include <stdio.h>
#include <windows.h>

int main()
{
	int n = 4;
	int a[n] = {1,2,3,4};
	int a2[n] = {1,4,5,6};
	int s[n*2] = {};
	int *arr;
	int p = 0;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i] == a2[j])
			{
				arr = (int*)realloc(arr,1);
				arr[p] = a[i];
				p++;
			}
		}
	}
	for(int i = 0; i < p; i++)
	{
		printf("%d ", arr[i]);
	}
	printf(" g ");
	
	
	int *arr2;
	int p2 = 0;
	int k = 0;
	arr2 = (int*)malloc(4);
	for(int i = 0; i < 4; i ++)
	{
		arr2[i] = a[i];
	}
	for(int i = 0; i < 4; i ++)
	{
		for(int j = 0; j < 4; j++)
		{
			if(a2[i] == a[j])
			{
				k++;
			}
		}
		if(k == 0)
		{
			arr2 = (int*)realloc(arr2,1);
			arr2[4 + p2] = a[i];
			p2++;
		}
		k = 0;
	}
	for(int i = 0; i < p2 + 4; i++)
	{
		printf("%d ", arr2[i]);
	}
	
}