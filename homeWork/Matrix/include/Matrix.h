#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class Matrix
{
   friend std::ostream &operator<<( std::ostream &, const Matrix & );
   friend std::istream &operator>>( std::istream &, Matrix & );

private:
        std::string ff;
        std::string fs;
        std::string ft;
        std::string sf;
        std::string ss;
        std::string st;
        std::string tf;
        std::string ts;
        std::string tt;
};

#endif
