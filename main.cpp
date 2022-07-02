#include <QCoreApplication>

#include <iostream>

#include "Problems.h"

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);

    std::string test = "ABCDEFGHIJK";
    zigZag(test, 3);

    return 0;
}
