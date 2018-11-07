#ifndef BADCOORD_H
#define BADCOORD_H
#include <exception>

class BadCoord : public std::exception
{
    public:
        const char* what() const throw();
};

#endif // BADCOORD_H
