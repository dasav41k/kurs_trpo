#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void pass_gen(int N)
{
	int i = 0;

	int random = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";
	char lower[] = "abcdefghijklmnoqprstuvwyzx";
	char upper[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";

	char password[N];

	random = rand() % 4;

	for (i = 0; i < N; i++) 
    {

		if (random == 1) {
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2) {
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3) {
			password[i] = upper[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = lower[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
    printf("\n");
    memset(password, '\n', N);
}

int main()
{
	
	int n;
    int k;
    
    printf("Введите желаемую длинну пароля: ");
    scanf("%d", &n);
    printf("Введите желаемое количество паролей: ");
    scanf("%d", &k);

	for (int i = 1; i < k+1; i++)
    {
        pass_gen(n);
    }

	return 0;
}
