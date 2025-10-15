/*
    . Project description
        . Topic #1
        . Topic #2
*/
//This will comment out the entire line
#include <cstdio>
#include <fmt/format.h>
#include <string_view>
import utilities;


void print_msg(std::string_view msg){
    fmt::print("Message: {}\n", msg);
}
int main(){
    print_msg("Starting out...");

    return 0;
}