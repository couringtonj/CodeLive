/*
    . Project description
        . Topic #1
        . Topic #2
*/
//This will comment out the entire line
#include<fmt/format.h>
import utilities;

int main(){
   
  // number_systems();
    //floating_point_types();
  fmt::println("the range for int is {} to {}: ",std::numeric_limits<int>::min(),std::numeric_limits<int>::max());

  fmt::println("the range for float is {} to {}: ",std::numeric_limits<float>::min(),std::numeric_limits<float>::max());
  fmt::println("the range for double is {} to {}: ",std::numeric_limits<double>::min(),std::numeric_limits<double>::max());
  fmt::println("the range for long double is {} to {}: ",std::numeric_limits<long double>::min(),std::numeric_limits<long double>::max());

    return 0;
}

