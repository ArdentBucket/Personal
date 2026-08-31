#include <iostream>
#include <cmath>

int main(){
///////////////////////////// arithmetics/usefull math functions /////////////////////////////
//                  Order of the arithmetics
//                   1. parenthesis
//                   2. Multiplications & division
//                   3. addition and subtraction

    //int students = 6 + (5 + 5) * 3 / 2;

    //students = students + 1;
    //students+=1;
    //students++;

    //students = students - 1;
    //students-=1;
    //students--;

    //students = students * 2;
    //students*=2;
    
    //students = students / 2;
    //students/=2;

    //double remainder = students % 2;         ///   % = modulus/remainder

    //std::cout << remainder << "\n";

//    double x = 3.14;
//    double y = 4;
    double z;

//    z = std::max(x, y);                        //max() compares and tells whats the highest number
//    z = std::min(x, y);                        //min() compares and tells whats the lowest number
//    z = pow(2, 4);                             //pow() raises value 1 to the power of value 2
    z = sqrt(196);                               //sqrt() square root the value
//    z = abs(-3);                               //abs() finds the absolute value of the value (How far away is it from 0)
//    z = round(x);                              //round() rounds the value to the nearest whole number
//    z = ceil(x);                               //ceil() rounds the value up
//    z = floor(x);                              //floor() rounds the value down


    std::cout << z << "\n";

                                                 // "#include <cmath>" includes more math operations to use       

///////////////////////////// type conversion /////////////////////////////
// type convirsion converts a value of one data type to another
//                  Implicit = automatic
//                  Explicit = Precede value with new data type (int)

//    int x = 3.14;               //Implicitly

//    double x = (int) 3.14;      //Explicitly using '(int)'

//    std::cout << x;

//    std::cout << (char) 100;
    int questions = 100;
    int correct = 70;
    double score = correct/(double)questions * 100;     // (double) is used to make sure value isn't removed/truncated from "questions"
//                                                        // from being an int not a double
    std::cout << score << "% \n";

        if (score <= 69){
            std::cout << "You Failed";
        }
        
        if(score > 69){
            std::cout << "You Passed🥳";
        }

///////////////////////////// cout/cin /////////////////////////////
//          cout << (Insertion operator)
//          cin >> (extraction operator)

//    std::string name;
//    int age;

//    std::cout << "What's your age?: ";
//    std::cin >> age;                                // std::ws remove any new line characters/white spaces in the input buffer before the user's input

//    std::cout << "What's your full name?: ";
//    std::getline(std::cin >> std::ws, name);        // std::getline() reads a string that has more than one spaces/white line Ex. Jaylen LaPrade
//                                                                                                                                      ^     
//                                                  // std::getline() also reads those new lines and spaces until its hits \n which is in every cin operation
//                                                     if there's an cin followed by an getline this issue will occur
//    std::cout << "Hello, " << name << "\n";
//    std::cout << "Your are " << age << " years old";

    return 0;
}