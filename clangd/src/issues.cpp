#include <cstddef>

int sum_array(const int* values, std::size_t length) {
    int total = 0;

    // Issue: no null-pointer validation before dereferencing.
    for (std::size_t i = 0; i < length; ++i) {
        total += values[i];
    }

    return total;
}

int main() {
    return sum_array(nullptr, 1);
}
