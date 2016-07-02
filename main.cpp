#include <iostream>

constexpr decltype(auto) sum(int lhs, int rhs) noexcept(noexcept(lhs + rhs))
        {
    return lhs + rhs;
}

int main(){
    std::cout << sum(42, 11) << std:endl;
    return 0;
}
