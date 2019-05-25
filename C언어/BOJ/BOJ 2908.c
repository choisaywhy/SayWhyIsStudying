#include <stdio.h>
int main() {
	int A, B, i, m = 0, n = 0;
	int a[3], b[3];

	scanf("%d %d", &A, &B);
	for (i = 0; i < 3; i++) {
		a[i] = A % 10;
		A = A / 10;
		b[i] = B % 10;
		B = B / 10;
	}
	if (a[0] > b[0]) {
		for (i = 0; i < 3; i++)
			printf("%d", a[i]);
	}
	else if (a[0] < b[0]) {
		for (i = 0; i < 3; i++)
			printf("%d", b[i]);
	}
	else {
		if (a[1] > b[1]) {
			for (i = 0; i < 3; i++)
				printf("%d", a[i]);
		}
		else if (a[1] < b[1]) {
			for (i = 0; i < 3; i++)
				printf("%d", b[i]);
		}
		else {
			if (a[0] > b[0]) {
				for (i = 0; i < 3; i++)
					printf("%d", a[i]);
			}

			else if (a[0] < b[0]) {
				for (i = 0; i < 3; i++) {
					printf("%d", b[i]);
				}
			}
			else {
				for (i = 0; i < 3; i++)
					printf("%d", a[i]);
			}

		}

	}
	return 0;
}
