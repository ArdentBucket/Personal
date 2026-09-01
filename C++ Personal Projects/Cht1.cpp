# include <iostream>
# include <vector>
///////////////////////////// typedef/using /////////////////////////////
//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
///////////////////////////// NAMESPACE /////////////////////////////
    //namespace = provides a solution preventing name conflicts
    //namespace can allows for identically names entities
    //as long as the namespacees are different. 

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}
namespace CUZage {
    int x = 31;
}
int main(){

///////////////////////////// VARIABLES /////////////////////////////

    //integer (Whole Number)
    int age = 31;
    int year = 2026;
    //double (Number including decimal
    double days = 7.5; 
    

    //single character (Use single quotes '')
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    //boolean (True or false)
    bool student = false;
    bool power = true;
    bool forSale = false;

    //string (Objexts that represents a sequence of text)
    text_t name = "cuh";
    text_t day = "Thursday";
    text_t food = "burburs";
    text_t address = "1987 freddy fabear st.";

    std::cout << "Hewwo " << name << "\n" << "Your fatass likes to eat " << food << ", \n";


///////////////////////////// CONSTANT /////////////////////////////


    //constwill specify that a value is constant
    //tells the compiler to prevent anything from modifying the value
    // const double PI = 3.14159;
    // double radius = 10;
    // double circumference = 2 * PI * radius;

    // const int WIDTH = 1920;
    // const int HIGHT = 1080;

    //std::cout << circumference << "cm";

///////////////////////////// NAMESPACE /////////////////////////////^^^
    // int x = 0;

    //std::cout << first::x << "\n";


///////////////////////////// typedef/using /////////////////////////////

// keword used to create an additional name (alias) for another data type
// new identifier for an existing type, reduces typos (include <vector> introduced)


    text_t firstname = "";
    number_t CUZage = 31;

    std::cout << firstname << "and your ";
    std::cout << CUZage << "\n";
    

}




