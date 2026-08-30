#include <iostream>

int main(){
///////////////////////////// arethamitics /////////////////////////////
//                  Order of the arethamitics
//                   1. parenthesis
//                   2. Multiplications & division
//                   3. addition and subtraction

    //int students = 6 - (5 + 4) * 3 / 2;

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

    //int remainder = students % 3;         ///   % = modulus/remainder

    //std::cout << students;

///////////////////////////// type conversion /////////////////////////////
// type convirsion converts a value of one data type to another
//                  Implicit = automatic
//                  Explicit = Precede value with new data type (int)

//    int x = 3.14;               //Implicitly

//    double x = (int) 3.14;      //Explicitly using '(int)'

//    std::cout << x;

//    std::cout << (char) 100;

    int correct = 32;
    int questions = 50;
    double score = correct/(double)questions * 100;     // (double) is used to make sure value isn't removed/truncated from "questions"
                                                        // from being an int not a double
    std::cout << score << "% \n";

        if (score <= 69)
    {
        std::cout << "You Failed";
        
    }
    

    return 0;
}