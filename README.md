#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<assert.h>

//void my_strlen(char* a1,char* a2)
//{
//	assert(a1!=NULL);
//	assert(a2 != NULL);
//
//	while(*a2!='\0')
//	{
//		*a1++ = *a2++;
//	}
//	*a1 = *a2;
//}
//void my_strlen(char* a1, char* a2)
//{
//	assert(a1 != NULL);
//	assert(a2 != NULL);
//
//	while (*a1++=*a2++)
//	{
//		;
//	}
//}
char* my_strcp(char* a1,const char* a2)
{
	char* ret = a1;
	assert(a1 != NULL);
	assert(a2 != NULL);

	while (*a1++ = *a2++)
	{
		;
		
	}
		return ret;
	
}
	int main()
{
	char arr1[] ="###33";
	char arr2[] = "bit";


	printf("%s\n", my_strcp(arr1,arr2));

	return 0;
}
