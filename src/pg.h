#ifndef PG_MIGRATE_PG_H
#define PG_MIGRATE_PG_H
#include <libpq-fe.h>

void cleanup(PGconn *connection, PGresult *res);
PGconn *getConnection(PGconn *connection, char* connStr);
char *getLatest(PGconn *connection, int num);
char *getMigrationsFromDb(PGconn *connection);
char *runMigrations(PGconn *connection, char** migrationsToBeRan);
char *rollbackMigrations(PGconn *connection);
int checkIfSetup(PGconn *connection);
void setup(PGconn *connection);

#endif //PG_MIGRATE_PG_H
