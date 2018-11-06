#include<stdio.h>
#include<Windows.h>
#define TRUE 1
#define FALSE 0

int Anagram(char str1[], char str2[])
{
	int arr[26] = { 0 };
	int i = 0;

	while (str1[i] != '\0' && str2[i]!='\n')
	{
		arr[str1[i] - 'a']++;
		arr[str2[i] - 'a']--;
		i++;
	}
	

	for (i = 0;i < 25;i++)
	{
		if (arr[i] != 0)
		{
			break;
		}
	}

	if (i == 25)
	{
		return TRUE;
	}
	else if (i != 25)
	{
		return FALSE;
	}
}


int main()
{
	int iRet = 0;
	char str1[30];
	char str2[30];

	printf("enter first string");
	scanf("%s", str1);
	printf("enter second string");
	scanf("%s", str2);
	iRet = Anagram(str1, str2);

	if (iRet == 1)
	{
		printf("strings are anagram");
	}
	else
	{
		printf("strings are not anagaram");
	}
	system("PAUSE");
	return 0;
}