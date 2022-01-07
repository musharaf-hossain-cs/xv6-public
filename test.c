#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
	printf(1, "Testing fork...\n");
	printf(1, "H\n");

	fork();
	printf(1, "H\n");


	exit();
}