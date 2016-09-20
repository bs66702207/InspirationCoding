#include <stdio.h>
#include <string.h>

char* jiequ(char* src, char* dst, int m, int n)
{
	char *p = src;
	char *q = dst;

	p += m;
	while(n--) 
	{
		*(q++) = *(p++);
	}
	*(q++) = '\0';
	return dst;
}

#if 0
void counter(char* str)
{
	int i;
	int count = 1;
	for(i=1;i<strlen(str);i++)
	{
		if(str[i] == str[i-1])
		{
			count++;
		}
		else
		{
			printf("%d\n", count);
			count = 1 ;
		}
	}
}
#endif

#if 1
//void counter(char* str, char *dest)
void counter(char* str, char* dest)
{
	int i;
	int count = 1;
	char buf[100] = {0};
//	printf("str len = %d\n", (int)strlen(str));
	for(i=1;i<=strlen(str);i++)
	{
		if(str[i] == str[i-1])
		{
			count++;
		}
		else
		{
	//		printf("%d\n", count);
			jiequ(str, buf, i-count, count);
	//		printf("i=%d, count=%d\n", i , count);
			if(count > 1)
			{
				buf[count] = count + 48;
			
				buf[count+1] = '\0';
			}
	//		printf("%s\n", buf);
			strcat(dest, buf);
			count = 1 ;
		}
	}
}
#endif

int main()
{
	char buf[100] = {0};
			//232111122331
	char *s="aadddbbedfasshhaaagggf";
	//jiequ(s, buf, 2, 5);
	//printf("jiequ: %s\n\n", buf);
	printf("%s\n\n", s);
	counter(s, buf);
	//printf("%s\n\n", s);
	printf("%s\n\n", buf);
}
