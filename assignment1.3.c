#include<stdio.h>
#include<string.h>

int main()
{
	char st[40];
	int i, count = 0;
	
	printf("\n\n\tEnter any string: ");
	gets(st);
	
	printf("\n\n\tVowels in the string: ");
	
	for(i=0;i<strlen(st);i++)
	{
		if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')
		{
			count++;
			printf("%c",st[i]);
		}
	}
	printf("\n\n\tNumber of vowels in the string: %d", count);
	
	printf("\n");
	return 0;
}
