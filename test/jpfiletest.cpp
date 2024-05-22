#include <iostream>
#include "cwd.h"

int main(){
    std::cout << "The current directory is: " << jp::get_cwd()->c_str() << std::endl;
}