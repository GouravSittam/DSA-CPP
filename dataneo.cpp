#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    int size1, size2;
    std::cin >> size1;

    std::unordered_set<int> set1;
    for (int i = 0; i < size1; ++i) {
        int num;
        std::cin >> num;
        set1.insert(num);
    }

    std::cin >> size2;

    std::vector<int> commonElements;
    for (int i = 0; i < size2; ++i) {
        int num;
        std::cin >> num;
        if (set1.find(num) != set1.end()) {
            commonElements.push_back(num);
        }
    }

    // Output
    if (commonElements.empty()) {
        std::cout << "Common Elements: None" << std::endl;
    } else {
        std::cout << "Common Elements:";
        for (int element : commonElements) {
            std::cout << " " << element;
        }
        std::cout << std::endl;
    }

    return 0;
}
