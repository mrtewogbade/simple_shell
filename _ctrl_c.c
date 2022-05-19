#include "GATEOFSHELL.h"

/**
 * sighandler - function that handles keyboard interrupt signals
 *@sig: the signal
 */
void sighandler(int sig)
{
	int sig_command = 0;

	if (sig == SIGINT && sig_command == 0)
		simple_print_shell("\nGosHell$ ");
	else if (sig_command != 0)
		simple_print_shell("\n");
}


/**
 * simple_print_shell - print message
 * @string: string to print
 */
void simple_print_shell(char *string)
{
	int len;

	len = _strlen(string);
	write(STDOUT_FILENO, string, len);
}
