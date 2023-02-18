#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 * 
 * return: Always a 0.
 */
int main(void)
{
	char lowCA;

	for(lowCA = 'a'; lowCA <= 'z'; lowCA++){
		putchar(lowCA);
	

	for(lowCA = 'A'; lowCA <= 'Z'; lowCA++)
		putchar(lowCA);
	

	putchar('\n');

	
	return(0);
}
