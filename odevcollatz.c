#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main() {

	int j = 0;

	pid_t pid;

	do {
		printf("0 dan büyük bir sayi gir:");
		scanf("%d", &j);
	} while (j <= 0)
		pid = fork();

	if (pid==0)

	{
		printf("cocuk islemi calisiyor...\n");
		printf("%d\n", j);
		while (j!=1)
		{
			if (j % 2 == 0)
			{
				j = j / 2;
			}
			else if (j % 2 == 1)
			{
				j = 3 * (j)+1;
			}
			printf("%d\n", j);
		}
		printf("cocuk islemi yapiliyor");
	}
	else
	{
		printf("cocuk bekleniyor\n");
		wait();
		printf("anne islemleri yapiliyor");
	}
	return 0;
}
