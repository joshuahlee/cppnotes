#include <iostream>
#include <string>

int main()
{
    std::string greeting = "hello";
    std::cout << greeting + " there" << std::endl;
    greeting.insert(3, " ");
    std::cout << greeting << std::endl;
    std::cout << greeting.length() << std::endl;
    greeting.erase(3);
    greeting.replace(0, 4, "heaven");
    greeting.pop_back();
    std::cout << greeting << std::endl;

    greeting.replace(greeting.find("heav"), 4, "hell");
    std::cout << greeting << std::endl;


    std::string uwu;
    getline(std::cin, uwu);
    std::cout << uwu << std::endl;

    // default value of string is empty string
    // If string has space between the next word will over flow into next input
}