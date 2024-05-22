#include <iostream>

#include "ix.h"
#include "ux.h"
#include "fx.h"

int main() {
    using namespace jp;

    std::cout << "A i8 is " << sizeof(i8) << " byte(s)!" << '\n'
              << "A i16 is " << sizeof(i16) << " byte(s)!" << '\n'
              << "A i32 is " << sizeof(i32) << " byte(s)!" << '\n'
              << "A i64 is " << sizeof(i64) << " byte(s)!" << '\n';

    std::cout << std::endl;

    std::cout << "A u8 is " << sizeof(u8) << " byte(s)!" << '\n'
              << "A u16 is " << sizeof(u16) << " byte(s)!" << '\n'
              << "A u32 is " << sizeof(u32) << " byte(s)!" << '\n'
              << "A u64 is " << sizeof(u64) << " byte(s)!" << '\n';

    std::cout << std::endl;

    std::cout << "A f32 is " << sizeof(f32) << " byte(s)!" << '\n'
              << "A f64 is " << sizeof(f64) << " byte(s)!" << '\n';

    std::cout << std::endl;
}