#include <functional>

void while_loop(int i, int j, int k, bool check_eq, std::function<void(int)> pred);
void do_while_loop(int i, int j, int k, bool check_eq, std::function<void(int)> pred);
