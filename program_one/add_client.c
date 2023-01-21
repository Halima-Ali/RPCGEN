/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"


void
add_prog_1(char *host, int i)
{
	CLIENT *clnt;
	int  *result_1;
	intpair  add_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, ADD_PROG, ADD_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	add_1_arg.a = i;
	// add_1_arg.b = 22;
	result_1 = add_1(&add_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else
	{
		printf("Factorial is = %d\n", *result_1);
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	int i;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];

	if ((i = atoi(argv[2])) == 0 && *argv[2] != '0')
	{
		fprintf(stderr, "invalid value: %s\n", argv[2]);
		exit(1);
	}

	if (argc < 3)
	{
		fprintf(stderr, "usage: %s server_host integer_value", argv[0]);
		exit(1);
	}

	add_prog_1 (host, i);
exit (0);
}
