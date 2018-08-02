#include "lists.h"
#include <stdio.h>

/**
  * pre_main - prints a string
  */

void __attribute__ ((constructor)) pre_main(void)
{
	char *str;

	str = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
;
	printf("%s", str);
}
