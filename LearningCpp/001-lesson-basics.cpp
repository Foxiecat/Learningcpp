#include <iostream>
#include <string>
#include <vector>
#include <format>

// In C++, we don't have a 'Main' class like in C#
// The entry point is the main() function
int main() {
    // 1. Basic Output (similar to Console.WriteLine in C#)
    std::cout << "Hello, Sophia! Welcome to C++" << std::endl;

    // 2. Variables and Types
    // C++ is statically typed like C#, but has some different type names
    int number = 42;                    // Similar to 'int' in C#
    double pi = 3.14159;               // Similar to 'double' in C#
    bool isLearning = true;            // Note: 'true' is lowercase in C++
    char letter = 'A';                 // Single quotes for characters
    std::string name = "Sophia";      // Strings are from the standard library

    // 3. Output variables
    std::cout << "Name: " << name << ", Number: " << number << std::endl;

    // 4. Input (similar to Console.ReadLine in C#)
    std::string input;
    std::cout << "What's your favorite number? ";
    std::cin >> input;
    std::cout << "You entered: " << input << std::endl;

    // 5. Vectors (similar to List<T> in C#)
    const std::vector<int> numbers = {1, 2, 3, 4, 5};

    // 6. Range-based for loop (similar to foreach in C#)
    std::cout << "Numbers: ";
    for (const int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    /*
     * EXERCISE 1:
     * 1. Create a program that asks for your name and age
     * 2. Store them in appropriate variables
     * 3. Print a greeting that includes both pieces of information
     *
     * Example output:
     *   What is your name? Sophia
     *   How old are you? 25
     *   Hello Sophia! You are 25 years old.
     */
    //std::string name;
    int age;

    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "How old are you? ";
    std::cin >> age;

    const std::string greeting = format("Hello {}! You are {} years old.", name, age);
    std::cout << greeting << std::endl;

    /*
     * EXERCISE 2:
     * 1. Create a vector of your favorite colors (as strings)
     * 2. Use a range-based for loop to print each color on a new line
     * 3. Print the total number of colors
     */
    const std::vector<std::string> colours = { "Pink", "Purple", "Light-Blue", "Crimson" };
    std::cout << "My Favorite Colours: ";
    for (const std::string& colour : colours)
        std::cout << "\n- " << colour;
    std::cout << "\nTotal Colours: " << colours.size() << std::endl;

    return 0;  // Return 0 indicates successful execution
}
