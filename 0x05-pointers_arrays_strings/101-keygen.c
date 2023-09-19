#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int password_length = 12; /* You can adjust the length as needed */
	char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	char password[13]; /* Including the null terminator */
	int i;

	srand(time(NULL)); /* Seed the random number generator with the current time */

	for (i = 0; i < password_length; i++)
	{
		int index = rand() % 62; /* Get a random index between 0 and 61 */
		password[i] = valid_characters[index];
	}

	password[password_length] = '\0'; /* Null-terminate the password */

	printf("%s\n", password);

	return (0);
}}
