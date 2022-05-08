#include <iostream>
#include <fstream>
//#include "logger.h"
#include <sstream>

void    openLog(std::string fileName);
void    saveLog(std::string msg);
void    closeLog(void);

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
