
#include <stdio.h>

int checkDiv(char *year, int div);

int main ()
{

	char year[3000];
	int leap=0;
	long long m55, m400, m4, m100, m15;

	int flag = 0;
	while (scanf("%s", year) != EOF)
	{

		if (flag==1)
			printf("\n");

		flag = 1;
		leap = 0;

		m4 = checkDiv(year, 4);
		m15 = checkDiv(year, 15);
		m55 = checkDiv(year, 55);
		m100 = checkDiv(year, 100);
		m400 = checkDiv(year, 400);

		if (m400==1 || (m4==1 && m100!=0))
        {
        	printf("This is leap year.\n");
            leap = 1;
        }

		if (m15==1)
        {
            printf("This is huluculu festival year.\n");
            leap = 1;
        }

		if ((m55==1 && m400==1) || ((m4==1 && m100!=0&& m55==1 ))){
			printf("This is bulukulu festival year.\n");
		leap=1;
		}
		if (leap==0)
			printf("This is an ordinary year.\n");

	}

}

int checkDiv(char *year, int div)
{

	int i, j;

	j = 0;
	for (i = 0; year[i]!=0; ++i)
		j = ((year[i] - '0') + j * 10) % div;

	if (j == 0)
		return 1;
	else
		return 0;

}

