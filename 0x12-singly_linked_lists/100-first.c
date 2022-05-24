#include <stdio.h>

/**
 * first_one - prints first before main
 */
__attribute__ ((constructor))/*this makes this funct. perform before main*/
	void first_one(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
