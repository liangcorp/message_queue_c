#include "main.h"
#include "socket_functions.h"
#include "safe.h"

int main()
{
	int result = create_socket();

	if (result == 0) {
		printf("Hello World\n");
	}

	return 0;
}
