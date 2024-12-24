#include <iostream>

int main() {
    
    char user_input_char;
    std::cout << "Enter the Character : ";
    std::cin >> user_input_char;

    int char_user = (int) user_input_char;

    if (user_input_char >= 63 && user_input_char <= 89 ) {
        std::cout << "UPPERCASE\n";
    }else if (user_input_char >= 97 && user_input_char <= 123) {
        std::cout << "lowercase\n";
    }else {
        std::cout << "Wrong Letter -> " << user_input_char << "\n";
        std::cout << "Enter Again\n";
        main();
    }

    return 0;
}
