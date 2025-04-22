#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    std::srand(std::time(0)); // Seed random number generator
    int secretNumber = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
        }

    } while (guess != secretNumber);

    return 0;
}
