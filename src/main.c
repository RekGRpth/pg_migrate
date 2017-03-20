#include <stdio.h>
#include "pg.h"
#include "fs.h"

int main(int argc, char *argv[]) {

	if (argc != 2) {
		printf("Looks like you either didn't provide a postgres path, or you provided an additional argument.");
		return 0;
	}

	PGconn *uninit_connection;

	PGconn *connection = getConnection(uninit_connection);
//	getLatest(connection, 10);
//	scan(".");
	getUpMigrations(connection);
	return 1;
}



