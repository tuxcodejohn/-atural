#include "nat.H"
#include <iostream>

int main(){
        std::cout << ℕ<12> << " "  << std::endl;
	auto fub = ℕArray< 1,2, 3>;
	for (auto i: fub){
		std::cout << i << std::endl;
	}
        return 0;
}

