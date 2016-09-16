//
// Created by Bui Quang Dien on 9/10/16.
//

#ifndef ENGINEER_DBACESS_H
#define ENGINEER_DBACESS_H

#include <stdio.h>
#include <sqlite3.h>


class DBAccess {
public:
    sqlite3 *db;
    int rc;

    DBAccess() {
        rc = sqlite3_open("testing.db", &db);
    }

    static int callback(void *NotUsed, int argc, char **argv, char **azColName){
        int i;
        for(i=0; i<argc; i++){
            printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
        }
        printf("\n");
        return 0;
    }

    void select() {
        char *sql;
        char *zErrMsg = 0;
        sql = "SELECT * FROM testing";

        rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

        if (rc != SQLITE_OK) {
            fprintf(stderr, "SQL error: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
        } else {
            fprintf(stdout, "Successful query\n");
        }
    }

    void insert() {
        char *sql;
        char *zErrMsg = 0;
        sql = "INSERT INTO testing VALUES (2, 'asdasd')";

        rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

        if (rc != SQLITE_OK) {
            fprintf(stderr, "SQL error: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
        } else {
            fprintf(stdout, "Add data successfully\n");
        }
    }
};

#endif //ENGINEER_DBACESS_H
