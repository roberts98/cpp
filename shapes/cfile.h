#ifndef CFILE_H
#define CFILE_H
#include <string>

class CFile
{
    private:
        FILE *file;
    public:
        CFile(const char* fileName);
        ~CFile();
        void write(std::string);
};

#endif // CFILE_H
