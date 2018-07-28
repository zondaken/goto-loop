#include "../core/loop.h"

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
