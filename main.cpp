#include <iostream>
#include <time.h>

//tes
//nonononono
template<typename T, typename COUNT = size_t>
constexpr decltype(auto) sum(T lhs, T rhs, COUNT count) noexcept{
    T s = 0;
    for(auto i = 0; i < count ; ++i)
        s += lhs + rhs;
    return s;
}

int main(){
    auto begin = clock();
    constexpr auto x = sum(42, 11, 1000000);
    begin = clock() - begin;
    std::cout << "Time: " << static_cast<double>(begin)/CLOCKS_PER_SEC*100 << std::endl;
    std::cout << "Value: " << x << std::endl;
    return 0;
}
