#include <functional>

void while_loop_classic(std::function<bool()> cond, std::function<void()> pred);
void do_while_loop_classic(std::function<bool()> cond, std::function<void()> pred);

void while_loop(int i, int j, int k, bool check_eq, std::function<void(int)> pred);
void do_while_loop(int i, int j, int k, bool check_eq, std::function<void(int)> pred);
