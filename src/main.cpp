#include <iostream>

int main() {
    int begin = 0;
    int end = 10;

    START:
        if(begin < end) {
            std::cout << begin << " ";
            begin = begin + 1;
            goto START;
        }

        /*
        while(begin < end) {
            std::cout << begin << " ";
            begin = begin + 1;
        }
        */

    return 0;
}
