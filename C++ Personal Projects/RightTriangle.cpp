#include <iostream>
#include <cmath>

// int ifstate();
int switches();
/////////////////////// How to calculate a right triangle ///////////////////////
int main() {

//     double a;
//     double b;
//     double c;
//     std::cout << "Enter side A: ";
//     std::cin >> a;
//     std::cout << "Enter side B: ";
//     std::cin >> b;
// //  a = pow(a, 2);
// //  b = pow(b, 2);         <----     Easier way to calculate
// //  c = sqrt(a + b);
//     c = sqrt(pow(a , 2) + pow(b , 2));  //       <---- Less lines and faster
//     std::cout << "side C: " << c << "\n";

    // ifstate();
    switches();

    return 0;


}

// int ifstate(){

//     int age;

//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     if(age >= 100){
//         std::cout << "Your a little to old for this site";
//     }
//     else if (age >= 18){
//         std::cout << "Welcome to the site!";
//     }
//     else if(age < 0){
//         std::cout << "You haven't been born yet";
//     }
//     else{
//         std::cout << "You are not old enough to enter!";
//     }

//     return 0;
// }

int switches(){
    char grade;
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;
    std::cout << "Enter letter grade (A-D, F): ";
    std::cin >> grade;

    switch(month){
        case 1:
            std::cout << "It is January \n";
            break;
        case 2:
            std::cout << "It is February \n";
            break;
        case 3:
            std::cout << "It is March \n";
            break;
        case 4:
            std::cout << "It is April \n";
            break;
        case 5:
            std::cout << "It is May \n";
            break;
        case 6:
            std::cout << "It is June \n";
            break;
        case 7:
            std::cout << "It is July \n";
            break;
        case 8:
            std::cout << "It is Augest \n";
            break;
        case 9:
            std::cout << "it is Setember \n";
            break;
        case 10:
            std::cout << "it is october \n";
            break;
        case 11:
            std::cout << "It is november \n";
            break;
        case 12:
            std::cout << "It is December \n";
            break;
        default:
            std::cout << "Please only enter in numbers (1-12) \n";
            break;
        
    }   
    switch(grade){
        case 'A':
            std::cout << "You did great";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did alright";
            break;
        case 'D':
            std::cout << "You didn't do good";
            break;
        case 'F':
            std::cout << "YOU FAILED";
            break;
        default:
            std::cout << "Enter valid letter grade";
    }
    return 0;
}