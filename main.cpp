
#include <iostream>
#include <cstring>

//find the sum 1+2+3+4...+n
int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}

// Recursive version of strlen for C strings.
int str_length(char s[], int counter = 0) {
    if (s[counter] == '\0') {
        return counter;
    } else {
        return str_length(s, counter + 1);
    }
}

//main function to interact on command line
int main() {
    char sentence[100];
    char choice;

    do {
        int number;

        std::cout << "Enter a positive integer: ";
        std::cin >> number;

        int result = sum(number);
        std::cout << "The sum of 1+2+...+" << number << " is: " << result << std::endl;

        std::cout << "Enter a sentence: ";
        std::cin.ignore();
        std::cin.getline(sentence, 100);

        int length = str_length(sentence);
        std::cout << "It contains " << length << " chars, including white spaces" << std::endl;

        std::cout << "Do you want to have another run? Y/N: ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
