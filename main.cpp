#include <iostream>
#include <time.h>

constexpr int sum(int lhs, int rhs, int count) noexcept{
    auto s = 0;
    for(auto i = 0; i < count ; ++i)
        s += lhs + rhs;
    return s;
}

int main(){
    int tmp = 42;
    auto begin = clock();
    const auto x = sum(tmp, 11, 1000000);
    begin = clock() - begin;
    std::cout << "Time: " << static_cast<double>(begin)/CLOCKS_PER_SEC*100 << std::endl;
    std::cout << "Value: " << x << std::endl;
    return 0;
}
