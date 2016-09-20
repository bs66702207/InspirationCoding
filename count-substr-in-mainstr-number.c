#include <stdio.h>
#include <string.h>


int substr_counter(char* s, char* sub)
{
	char* p = s;
	char* q = sub;
	int count=0;
	do
	{
		p = strstr(p, q);
		if(p !=NULL)
		{
			count++;
			p = p + strlen(q);
		}
		else
		{
			break;
		}
	}while(*p != '\0');

	return count;
}

int main()
{
	char* sub="abcd";
	char* str="abbdabcdbbbbabcdabcd2329u92adbcadabcda";
	char* p = str;;
	int count = 0;
	do
	{
		str = strstr(str, sub);
		if(str!=NULL)
		{
			count++;
			str = str + strlen(sub);
			//str = str + 1;
		}
		else
		{
			break;
		}
	}while(*str !='\0');

	printf("%d\n", count);
	//printf("%s\n", str);
	printf("%s\n", p);

	str = p;
	count = substr_counter(str,sub);
	printf("--%d\n", count);

	return 0;
}
