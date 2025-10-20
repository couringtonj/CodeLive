module;
#include<fmt/format.h>
#include<string>
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

export void numeric_limits(){
  fmt::println("the range for int is {} to {}: ",std::numeric_limits<int>::min(),std::numeric_limits<int>::max());

  fmt::println("the range for float is {} to {}: ",std::numeric_limits<float>::min(),std::numeric_limits<float>::max());
  fmt::println("the range for double is {} to {}: ",std::numeric_limits<double>::min(),std::numeric_limits<double>::max());
  fmt::println("the range for long double is {} to {}: ",std::numeric_limits<long double>::min(),std::numeric_limits<long double>::max());

}

export void say_hello(std::string name){
    fmt::println("Hello, {}!",name);
}