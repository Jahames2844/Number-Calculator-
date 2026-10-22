#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;

void typeEffect(std::string text) {
    for (int i = 0; i < text.length(); i++) {
        std::cout << text[i] << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}


int main() 
{
    double Number1;
    double Number2;
    double Answer;
    int choice;
    
    typeEffect("==========================\n");
    typeEffect(" [1] Addition\n");
    typeEffect(" [2] Subtraction\n");
    typeEffect(" [3] Multiplicatioon\n");
    typeEffect(" [4] Division\n");
    typeEffect(" [5] Exit\n");
    typeEffect("==========================\n");
    cin >> choice;

    if (choice == 1) {
        typeEffect("Enter the first number: ");
        cin >> Number1;
        typeEffect("Enter the second number: ");
        cin >> Number2;
        Answer = Number1 + Number2;
        typeEffect("The answer is: " + to_string(Answer) + "\n");
        return 1;
    } else if (choice == 2) {
        typeEffect("Enter the first number: ");
        cin >> Number1;
        typeEffect("Enter the second number: ");
        cin >> Number2;
        Answer = Number1 - Number2;
        typeEffect("The answer is: " + to_string(Answer) + "\n");
        return 1;
    } else if (choice == 3) {
        typeEffect("Enter the first number: ");
        cin >> Number1;
        typeEffect("Enter the second number: ");
        cin >> Number2;
        Answer = Number1 * Number2;
        typeEffect("The answer is: " + to_string(Answer) + "\n");
        return 1;
    } else if (choice == 4) {
        typeEffect("Enter the first number: ");
        cin >> Number1;
        typeEffect("Enter the second number: ");
        cin >> Number2;
        Answer = Number1 / Number2;
        typeEffect("The answer is: " + to_string(Answer) + "\n");
        return 1;
    } else if (choice == 5) {
        typeEffect("Exiting the program...\n");
        return 0;
    } else {
        typeEffect("Invalid choice. Please try again.\n");
        return 1;
    }
    

}