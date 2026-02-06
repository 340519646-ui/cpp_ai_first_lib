#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    std::size_t last_capacity = v.capacity();

    std::cout << "Initial capacity: " << last_capacity << "\n";

    for (int i = 0; i < 100; ++i) {
        v.push_back(i);

        if (v.capacity() != last_capacity) {
            std::cout
                << "Size: " << v.size()
                << " | Capacity changed: "
                << last_capacity << " -> "
                << v.capacity()
                << "\n";

            last_capacity = v.capacity();
        }
    }

    return 0;
}
