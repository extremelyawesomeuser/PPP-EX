#include <iostream>

int main() {
    std::string word;
    std::string disliked = "Broccoli";
    std::cout << "Type a word: ";
    std::cin >> word;
    if (word == disliked) {
        word = "BLEEP";
    }
    std::cout << word;
}
