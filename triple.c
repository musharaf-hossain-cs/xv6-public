#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
	int i;
	if(argc < 2){
		printf(1,"No values to triple\n");
		exit();
	}
	for(i=1; i < argc; i++){
		printf(1,"Triple of %d : %d\n", atoi(argv[i]), triple(atoi(argv[i])));
	}
	

	exit();
}