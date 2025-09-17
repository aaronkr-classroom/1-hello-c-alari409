// nums.c


# include <stdio.h>
#include <limits.h> // 최대값/ 최소값 볼 때


int main(void) {
	//char 1 byte (character)
	char ch= 'A';
	printf("char: \n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n",	CHAR_MAX);
	printf("Value: %d\n", CHAR_MIN);

	// signed short int 2byte(integer)
	signed short int sshort= 1234;
	printf("\nsigned short int: \n");
	printf("Value: %c\n", sshort);
	printf("Max: %d\n", CHAR_MAX);
	printf("Min: %d\n", CHAR_MIN);	//limit.h 의 상수


	// unsigned short int 2byte(integer)
	unsigned short int ushort = 1234U;
	printf("\nunsigned shrort int: \n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX); //limit.h 의 상수

	// signed int 4byte(integer)
	signed int sint = 12345;
	printf("\nsigned int: \n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);	//limit.h 의 상수
	printf("Min: %d\n", INT_MIN);

	// unsigned int 4byte(integer)
	unsigned int uint = 12345U;
	printf("\nunsigned int: \n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX); //limit.h 의 상수
	
	//long은 다른 운영체제에서 다른 바이트 크기입니다.
	// 보통 4 바이트인데 Linux /Unix/ Mac 에서 8바이트 입니다.
	// Windows에서 long long하면 8바이트 사용가능.


	// signed long int 4byte(integer)
	signed long int slong = 123456789L;
	printf("\nsigned long int: \n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);	//limit.h 의 상수
	printf("Min: %d\n", LONG_MIN);


	// unsigned lont int 4byte(integer)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int: \n");
	printf("Value: %d\n", ulong) ;
	printf("Max: %d\n", ULONG_MAX); //limit.h 의 상수

	// float 4 byte(float) (항상 부호 있음signed)
	float f = 123.456f;
	printf("\n float: \n");
	printf("Value: %f\n", f);
	/*printf("Max: %d\n", FLT_MAX); //limit.h 의 상수
	printf("Max: %d\n", FLT_MIN); */


	// double 8 byte(float) (항상 부호 있음signed)
	double d = 123456.7890123f;
	printf("\n double: \n");
	printf("Value: %.3f\n", d);
	// print("Max: %d\n", DBL_MAX); // limit.h의 상수
	// print("Min: %d\n", DBL_MIN);

	return 0;
}