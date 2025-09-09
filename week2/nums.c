// nums.c

# include <stdio.h>
#include <limits.h>
int main(void) {
	//char 1 byte (character)
	char ch= 'A';
	printf("char: \n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n",	CHAR_MAX);
	printf("Value: %d\n", CHAR_MIN);

	// signed short int 2byte(integer)



	// unsigned short int 4byte(integer)
	signed short int sshort = 1234;
	printf("\nsigned shrort int: \n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limit.h 의 상수
	printf("Value: %d\n", SHRT_MIN);

	// signed int 4byte(integer)


	// unsigned int 4byte(integer)
	unsigned short int uint = 12345U;
	printf("\nunsigned shrort int: \n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX); //limit.h 의 상수
	

	// signed long int 4byte(integer)

	// unsigned lont int 4byte(integer)
	unsigned long int ulong = 12345U;
	printf("\nunsigned long int: \n");
	printf("Value: %d\n", ulong) ;
	printf("Max: %d\n", ULONG_MAX); //limit.h 의 상수

	// float 8 byte(float) (항상 부호 있음signed)
	float f = 123.456f;
	printf("\n float: \n");
	printf("Value: %.1f\n", f);
	/*printf("Max: %d\n", FLT_MAX); //limit.h 의 상수
	printf("Max: %d\n", FLT_MIN); */


	// double 8 byte(float) (항상 부호 있음signed)
	double d = 123456.7890123f;
	printf("\n double: \n");
	printf("Value: %.3f\n", d);


	return 0;
}