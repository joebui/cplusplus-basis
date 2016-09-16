//
// Created by Bui Quang Dien on 9/10/16.
//

#ifndef ENGINEER_FILEWRITE_H
#define ENGINEER_FILEWRITE_H

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class FileIO {
public:
    void read() {
        cout << "Read to file" << endl;

        filebuf shapeFile;
        shapeFile.open("shapes.txt", ios::in);
        istream is(&shapeFile);

        vector<string> content;
        // Read line-by-line.
        while (!is.eof()) {
            string line;
            is >> line;
            content.push_back(line);
        }

        shapeFile.close();

        for (unsigned int i = 0; i < content.size(); ++i) {
            cout << content.at(i) << endl;
        }
    }

    void write() {
        filebuf shapeFile;
        shapeFile.open("shapes.txt", ios::out);
        ostream os (&shapeFile);

        os << "Coc" << endl;
        os << "Coc" << endl;
        os << "Coc" << endl;

        shapeFile.close();

        cout << "\nWrite to file" << endl;
    }
};

#endif //ENGINEER_FILEWRITE_H
