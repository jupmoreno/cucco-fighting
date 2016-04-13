#include <server.h>
#include <define.h>
#include <database.h>
#include <stdio.h>

int main(int argc, char const * argv[]) {
	if(!database_open()) {
		fprintf(stderr, "Can't open database\n");
		return 1;
	} else {
		printf("Pude abrir/crear!\n");
	}

	if(!database_cuccos_add("Bola de Nieves II")) {
		fprintf(stderr, "No pude crear\n");
	}
	
	if(!database_cuccos_list()) {
		fprintf(stderr, "No pude crear\n");
	}
	
	database_close();

	return 0;
}
