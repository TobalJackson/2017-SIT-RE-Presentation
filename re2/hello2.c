#include <stdio.h>
#include <stdlib.h>

char something[] = "Something Else!";

void print_something(char* thing){
	printf("%s\n", thing);
	printf("%s\n", something);
}

int main(){
	char hello[] = "Hello, world!";
	printf("%s\n", hello);

	print_something(hello);

	exit(0);
}

