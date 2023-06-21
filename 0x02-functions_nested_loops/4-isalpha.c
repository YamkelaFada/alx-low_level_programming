#include "main.h"
/**
 * _isalpha - check alphabets
 * @c: check this char
 * Return 1 if character found, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
