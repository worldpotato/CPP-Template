/**
 * @file main.cpp
 * @author Worldpotato
 * @date 2021-09-20
 * @brief The Main file of this template, where all the magic starts.
 *
 * The main file is the starting point of each project.
 */

#include <iostream>
#include "printer.hpp"

/**
 * This is the main where all the magic starts.
 *
 */
int main(int argc, char** argv)
{
    printer p;
    p = printer("Hello World!");
    p.print("hello world!");
    p.print();
    return 0;
}

