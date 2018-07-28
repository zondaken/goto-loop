#include <iostream>
#include "../core/loop.h"

void pred(int x) {
    std::cout << x << " ";
}

int main(int argc, char** argv) {
    int i = argc == 5 ? atoi(argv[1]) : 0;
    int j = argc == 5 ? atoi(argv[2]) : 10;
    int k = argc == 5 ? atoi(argv[3]) : 1;
    int l = (argc == 5 && argv[4][0] != '0') ? true : false;

    while_loop_classic([&i, &j]() { return i < j; }, [&i, k]() {
        pred(i);
        i += k;
    });

    std::cout << "\n";

    while_loop(i, j, k, l, pred);
    std::cout << "\n";

    do_while_loop(i, j, k, l, pred);
    std::cout << std::flush;

    return 0;
}
