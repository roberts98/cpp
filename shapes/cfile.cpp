#include "cfile.h"
#include <stdio.h>

CFile::CFile(const char* fileName) {
    this->file = fopen(fileName, "w");
}

void CFile::write(std::string string) {
    fwrite(string, sizeof(char), string.size(), file);
}

CFile::~CFile() {
    fclose(file);
}
