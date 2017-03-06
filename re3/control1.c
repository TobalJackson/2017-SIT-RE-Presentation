#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char flag[] = "SIT{Pl34s3_g3t_Me_7o_pR1nt_0ut}";

void validateInput(char* input){
	int i;
	for (i=0; i<strlen(input); i++){
		if (input[i] < 'A' || input[i] > 'Z'){
			printf("Failure!\n");
			exit(0);
		}
		else{
			printf("%c",flag[i]);
		}
	}
	printf("\n");
}


int main(int argc, char* argv[]){

	if (argc < 2){
		printf("Usage: ./control <input>\n");
		exit(0);
	}

	else
		validateInput(argv[1]);

}
