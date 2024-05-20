#include <iostream>
#include <bitset>
#include "../lib/cute_random/cute_random.h"

int main() {
    CuteRandom cr;
    std::string userInput;
    int latestGenNum = -1, generatedNum;

    for (;;) {
        do {
            generatedNum = cr.in_range(1, 6);
        } while (generatedNum == latestGenNum);
        latestGenNum = generatedNum;
        std::string correctAns = std::bitset<3>(generatedNum).to_string();

        do {
            std::cout << generatedNum << " -> ";
            std::getline(std::cin, userInput);
        } while (correctAns != userInput);
    }
}