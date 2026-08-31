#include <iostream>
#include <cmath>

int main(){

//    int hearts = 20;
//    int damage = 2;
//    int persentage = 25;

//    double totaldamage = hearts * ((double)persentage / 100);

//    std::cout << totaldamage << "\n";

    int mathquestion1 = 1;

    if(mathquestion1 == 1){

        int questions;
        int correct;

        std::cout << "How many questions were there?" << "\n";
        std::cin >> questions;

        std::cout << "How many did you get right?" << "\n";
        std::cin >> correct;
    
        double score = ( correct / (double)questions ) * 100;

        score = round(score);
    
        if(score >= 101){
            std::cout << "You exailed with a: " << score << "%";
        }
        if(score <= 69){
            std::cout << "You failed with a: " << score << "%";
        }
        else{
            std::cout << "You passed with a: " << score << "%";
        }
    }
    else{

        return 0;
    }
}
