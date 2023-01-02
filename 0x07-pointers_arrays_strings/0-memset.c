#include <stdio.h>
#include "main.h"
char *_memset(char *s, char b, unsigned int n);
int main(void) {

	    char str[10];

	        _memset(str, 'a', 10);

		    printf("%s\n", str);  // Outputs "aaaaaaaaaa"

		        return 0;

}
