#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words;
    words.push_back("Hello");
    words.push_back("World");

    for (const auto& word : words) {
        std::cout << word << " ";
    }

    return 0;
}
