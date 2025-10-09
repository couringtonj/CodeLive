/*
    . Project description
        . Topic #1
        . Topic #2
*/
//This will comment out the entire line
#include <fmt/format.h>
import utilities;

int main(){
    int value1 {10};
    int value2{20};
    int value3 {30};
    int value5 {50};
    int value4 {value1+value2+value3+value5};
    
    fmt::print("Hello the values are {} and {}!\n",value1,value2);
    fmt::println("Hello the values are {} and {} and {} and {} equals {}!",value1,value2,value3,value5,value4);
}