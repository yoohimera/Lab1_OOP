#include <iostream>
#include <vector>
#include <cmath>

void buildArrayC(const std::vector<int>& A) {
    std::vector<int> C(A.size());

    for (size_t i = 0; i < A.size(); i++) {
        C[i] = pow(2, A[i]); // Формула c_i = 2^a_i
    }

    std::cout << "Array C: ";
    for (int val : C) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> A = { 1, 3, 5, 2, 7, 4 };
    buildArrayC(A);
    return 0;
}
