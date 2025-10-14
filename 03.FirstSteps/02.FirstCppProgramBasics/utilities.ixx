

#include <chrono>


#include <fmt/format.h>

export module utilities;

export int add_numbers(int first_param, int second_param){
    return first_param+second_param;
}

export void do_work(){
    fmt::println("Hello,");
    fmt::println("World!");

    int num1{6};
    int num2{6};
    int result=add_numbers(num1,num2);
   // int result=num1+num2;
    fmt::println("Result: {} + {} = {}",num1,num2,result);

    fmt::println("Doing some work...");
}

