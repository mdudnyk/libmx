#include "libmx.h"

char *mx_itoa(int number) {
    long n = number;
    int i = 0;
    char *string = mx_strnew(11);

    if (number == 0) {
        string[0] = '0';
        return string;
    }
    if (number < 0) {
		string[i] = ('-');
		n *= -1;
        i++;
	}
    n = mx_reverse_int(n);
    while (n > 0) {
        string[i] = n % 10 + 48;
        n /= 10;
        i++;
    }
    return string;
}
