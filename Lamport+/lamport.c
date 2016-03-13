#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdlib.h>

#include "sha256.h"

int main(int argc, char *argv[]) {

	BYTE buf[SHA256_BLOCK_SIZE];
	SHA256_CTX ctx;
	printf("Hello world\n");

	return 0;
}
