#include <iostream>
#include <functional>

void while_loop(int i, int j, int k, bool check_eq, std::function<void(int)> pred) {
    if(check_eq) {
        if(i < j) {
            START1:
                if(i <= j) {
                    pred(i);
                    i = i + k;
                    goto START1;
                }
        } else {
            START2:
                if(i >= j) {
                    pred(i);
                    i = i - k;
                    goto START2;
                }
        }
    } else {
        if(i < j) {
            START3:
                if(i < j) {
                    pred(i);
                    i = i + k;
                    goto START3;
                }
        } else {
            START4:
                if(i > j) {
                    pred(i);
                    i = i - k;
                    goto START4;
                }
        }
    }
}

void do_while_loop(int i, int j, int k, bool check_eq, std::function<void(int)> pred) {
    if(check_eq) {
        if(i < j) {
            START1:
                pred(i);
                i = i + k;

                if(i <= j) {
                    goto START1;
                }
        } else {
            START2:
                pred(i);
                i = i - k;

                if(i >= j) {
                    goto START2;
                }
        }
    } else {
        if(i < j) {
            START3:
                pred(i);
                i = i + k;

                if(i < j) {
                    goto START3;
                }
        } else {
            START4:
                pred(i);
                i = i - k;

                if(i > j) {
                    goto START4;
                }
        }
    }
}

void pred(int x) {
    std::cout << x << " ";
}

int main(int argc, char** argv) {
    int i = argc == 5 ? atoi(argv[1]) : 0;
    int j = argc == 5 ? atoi(argv[2]) : 10;
    int k = argc == 5 ? atoi(argv[3]) : 1;
    int l = (argc == 5 && argv[4][0] == '0') ? false : true;

    while_loop(i, j, k, l, pred); std::cout << "\n";
    do_while_loop(i, j, k, l, pred); std::cout << std::flush;

    return 0;
}
