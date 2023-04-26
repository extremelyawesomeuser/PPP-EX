#include <iostream>

int main() {
    std::string firstName;
    std::string friendName;
    char friendSex = 0; 
    int age;

    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> firstName;

    std::cout << "Dear " + firstName + ",\n";
    std::cout << "How are you? I am fine. I miss you.\n";

    std::cout << "Enter your friend's name: ";
    std::cin >> friendName;
    std::cout << "Have you seen " + friendName + " lately?\n";
    
    std::cout << "What is your friend's sex? Type m or f: ";
    std::cin >> friendSex;

    if (friendSex == 'm') {
        std::cout << "If you see " + friendName + " please ask him to call me.";
    }
    else if (friendSex == 'f') {
        std::cout << "If you see " + friendName + " please ask her to call me.";
    }
    else {std::cout << "Error!"; return 0;}

    std::cout << "Enter the age of " + firstName +':';
    std::cin >> age;

    std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if (age <= 0 || age >=110) {
        std::cerr << "You're kidding!";
    }
    
    if (age < 12) {std::cout << "Next year you will be " << age+1;}
    else if (age == 17) {std::cout << "\nNext year you will be able to vote\n";}
    else if (age > 70) {std::cout << "I hope you are enjoying retirement.";}

    std::cout << "\nYours sincerely, Kien";
    return 0;
}