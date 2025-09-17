// nums.c


# include <stdio.h>
#include <limits.h> // �ִ밪/ �ּҰ� �� ��


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
	printf("Min: %d\n", CHAR_MIN);	//limit.h �� ���


	// unsigned short int 2byte(integer)
	unsigned short int ushort = 1234U;
	printf("\nunsigned shrort int: \n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX); //limit.h �� ���

	// signed int 4byte(integer)
	signed int sint = 12345;
	printf("\nsigned int: \n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);	//limit.h �� ���
	printf("Min: %d\n", INT_MIN);

	// unsigned int 4byte(integer)
	unsigned int uint = 12345U;
	printf("\nunsigned int: \n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX); //limit.h �� ���
	
	//long�� �ٸ� �ü������ �ٸ� ����Ʈ ũ���Դϴ�.
	// ���� 4 ����Ʈ�ε� Linux /Unix/ Mac ���� 8����Ʈ �Դϴ�.
	// Windows���� long long�ϸ� 8����Ʈ ��밡��.


	// signed long int 4byte(integer)
	signed long int slong = 123456789L;
	printf("\nsigned long int: \n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);	//limit.h �� ���
	printf("Min: %d\n", LONG_MIN);


	// unsigned lont int 4byte(integer)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int: \n");
	printf("Value: %d\n", ulong) ;
	printf("Max: %d\n", ULONG_MAX); //limit.h �� ���

	// float 4 byte(float) (�׻� ��ȣ ����signed)
	float f = 123.456f;
	printf("\n float: \n");
	printf("Value: %f\n", f);
	/*printf("Max: %d\n", FLT_MAX); //limit.h �� ���
	printf("Max: %d\n", FLT_MIN); */


	// double 8 byte(float) (�׻� ��ȣ ����signed)
	double d = 123456.7890123f;
	printf("\n double: \n");
	printf("Value: %.3f\n", d);
	// print("Max: %d\n", DBL_MAX); // limit.h�� ���
	// print("Min: %d\n", DBL_MIN);

	return 0;
}