#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j,t;
	int a[5];
	printf("請輸入5個整數: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j+1] = t;
			}
		}
		printf("Loop %d: ", i);
		for (j = 0; j < 5; j++)
			printf("%3d", a[j]);
		printf("\n");

		if ((a[3] < a[4]) && (a[2] < a[3]) && (a[1] < a[2]) && (a[0] < a[1]))
		{
			break;
		}
	}

	system("pause");
	return 0;
}