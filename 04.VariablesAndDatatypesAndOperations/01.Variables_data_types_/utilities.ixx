module;
#include<fmt/format.h>
export module utilities; 

export void number_systems(){
    int number1=15;
    int number2=017; //Octal representation for 15
    int number3=0x0F; //Hexadecimal representation for 15
    int number4=0b00001111; //Binary representation for 15

    fmt::println("number1:{}",number1);
    fmt::println("number1:{}",number2);
    fmt::println("number1:{}",number3);

    fmt::println("number1:{}",number4);
}

export void floating_point_types(){
     float single_precision=1.123456789123456789f;

    fmt::println("Single precision value: {:.30f}",single_precision);


    double double_precision=1.123456789123456789;
    fmt::println("Double precision value: {:.30f}",double_precision);

    long double extended_precision=1.123456789123456789123456789L;
    fmt::println("Extended precision value: {:.30Lf}",extended_precision);

    fmt::println("Size of float: {}",sizeof(float));
    fmt::println("Size of double: {}",sizeof(double));
    fmt::println("Size of long double: {}",sizeof(long double));
}