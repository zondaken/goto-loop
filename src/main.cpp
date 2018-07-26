#include <iostream>
#include <functional>

void loop(int i, int j, int k, std::function<void(int)> pred) {
    START:
        if(i < j) {
            pred(i);
            i = i + k;
            goto START;
        }
}

void pred(int x) {
    std::cout << x << " ";
}

int main() {
    loop(0, 10, 1, pred);

    return 0;
}
