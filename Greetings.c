#include <stdio.h>
#include <string.h>
    char message[]="*    Greetings, ";
	char user_name[];

int main(void)
{
	char d,sp;
	int l1,l2,l3,l4,l5;
		d = '*';
		sp =' ';

	printf("Your name: ");
    scanf("%s", user_name);

    l1 =strlen(message) + strlen(user_name) + 6;
	printf("\n\n");
	for(l2 = l1;l2 !=0;--l2)
		{
			printf("%c",d);

		}
	printf("\n");
	printf("*");
	for(l3 = l1;l3 !=2;--l3)
		{
			printf("%c",sp);

		}
	printf("*");
	printf("\n");
	printf("%s",message);
	printf("%s!    *\n", user_name);
	printf("*");
		for(l4 = l1;l4 !=2;--l4)
			{
				printf("%c",sp);

			}
		printf("*");
		printf("\n");
	for(l5 = l1;l5 !=0;--l5)
			{
				printf("%c",d);

			}

	return 0;
}
