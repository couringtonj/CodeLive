module;
#include<fmt/format.h>
#include<vector>
#include<array>
#include<string>
export module utilities; 

export void braced_initialization() {
  int elephant_count; //contains junk value
   fmt::println("Elephant count: {}", elephant_count);

   int lion_count{}; //value initialized to 0
   fmt::println("Lion count: {}", lion_count);

   int dog_count{10}; //initialized to 10
   fmt::println("Dog count: {}", dog_count);

   int cat_count{15}; //initialized to 15
   fmt::println("Cat count: {}", cat_count);

   int domesticated_animals{dog_count + cat_count}; //initialized to 25
   fmt::println("Domesticated animals: {}", domesticated_animals);

   //int new_number{lion_cout}; //error: 'lion_cout' was not declared in this scope

  // int narrowing_conversion{2.9}; //warning: narrowing conversion from 'double' to 'int'
 //   fmt::println("Narrowing conversion result: {}", narrowing_conversion);

}

export void functional_initialization(){
      //functional initialization
   int apple_count(5);
   fmt::println("Apple count: {}", apple_count);

   int orange_count(10);
   fmt::println("Orange count: {}", orange_count);

   int fruit_count(apple_count + orange_count);
   fmt::println("Total fruit count: {}", fruit_count);  

   int narrowing_conversion(3.7); //allowed but may lead to data loss
   fmt::println("Narrowing conversion result: {}", narrowing_conversion);
   
}

export void assignment_initialization(){
 //Assignment initialization
    int banana_count = 7;
    int bike_count=2;
    int truck_count=7;
    int vehicle_count=bike_count + truck_count;
    int narrowing_conversion = 4.5; //allowed but may lead to data loss
    fmt::println("Banana count: {}", banana_count);
    fmt::println("Vehicle count: {}", vehicle_count);
    fmt::println("Narrowing conversion result: {}", narrowing_conversion);
    
    fmt::println("sizeof int: {}", sizeof(int));
    fmt::println("sizeof truck_count: {}", sizeof(truck_count));
}   

export void integer_modifiers(){
    //Integer modifiers
     //Integer modifiers
   signed int value1{10};
   signed int value2{-20};
   fmt::println("Value1: {},\n Value2: {}", value1, value2);

   unsigned int value3{30}; // only positive numbers
   //unsigned int value4{-40}; //error: negative value not allowed
    fmt::println("Value3: {}", value3);


    short int value5{100}; //only 2 bytes regular ints occupy 4 bytes
    fmt::println("Value5: {}, sizeof: {}", value5,sizeof(value5));

    long int value6{1000};
    fmt::println("Value6: {}", value6);

    signed long int value7{-10000};
    fmt::println("Value7: {}, sizeof: {}", value7, sizeof(value7) );//4 or 8 bytes depending on system

    unsigned long long int value8{20000};
    fmt::println("Value8: {}, sizeof: {}", value8, sizeof(value8)   );//8 bytes

}

export void floating_point(){
   //Fractional numbers
  float number1{1.12345678901234567890f};
  double number2{1.12345678901234567890};
  long double number3{1.12345678901234567890L};

  fmt::println("Float number: {}", number1);
  fmt::println("Double number: {}", number2);
  fmt::println("Long Double number: {}", number3);
  fmt::println("--------------------------------");
  double number5{192400023};
  double number6{1.92400023e8};
  double number7{3.498e8};
  double number8{0.0000000000003498};
  double number9{3.498e-11};
  fmt::println("number5: {}", number5);
  fmt::println("number6: {}", number6);
  fmt::println("number7: {}", number7);   
  fmt::println("number8: {}", number8);
  fmt::println("number9: {}", number9);
}

export void Nan_infinity(){
   fmt::println("--------------------------------");
  double number10{-5.6};
  double number11{0};
  double number12{0};

  //infinity
  double result{number10/number11};
  fmt::println("Result of dividing {} by {}: {}", number10, number11, result);
  fmt::println("{} + {} yields: {}",result,number10,result+number10);
  fmt::println("--------------------------------");
  ///NaN
  result=number11/number12;
  fmt::println("Result of dividing {} by {}: {}", number11, number12, result);

}

export void bool_variables(){
   //Booleans
   bool red_light{false};
   bool green_light{true};
   fmt::print("Red light: {}\n", red_light);
   fmt::print("Green light: {}\n", green_light);

   if(red_light==true){
      fmt::print("Stop!\n");
   } else {
      fmt::print("Go!\n");
   }

   fmt::println("size of bool is: {} bytes", sizeof(bool));
}

export void char_and_text(){
   //Characters and Text
   char character1{'a'};
   char character2{'b'};
   char value=65;
   fmt::println("Character1: {}", character1);
   fmt::println("Character2: {}", character2);
   fmt::println("Value as character: {}", value);
   fmt::println("Value as integer: {}", static_cast<int>(value));
}

export void collections(){
   const std::vector<char> vowels{'a','e','i','o','u','A','E','I','O','U'};//can expand
//std::array<char,5> consonants{'b','c','d','f','g'};//fixed size

 //fmt::println("Vowel: {}",vowels[1]);

 std::string message("arrow");//capacity to grow
 fmt::println("Message: {}",message);

 std::string greeting{"Hello"};
 fmt::println("Greeting: {}",greeting);
 
 std::string farewell = " Goodbye";
 greeting.append(farewell);
 fmt::println("Farewell message: {}",greeting);

}

export void auto_numbers(){
    //auto keyword
 auto var1{12};
 auto var2{13.0};
 auto var3{14.0f};
 auto var4{15.0l};
 auto var5{'c'};
 auto var6{123u};
 auto var7{123ul};
 auto var8{123ll};

 fmt::println("var1 occupies: {} bytes",sizeof(var1));
 fmt::println("var2 occupies: {} bytes",sizeof(var2));  
 fmt::println("var3 occupies: {} bytes",sizeof(var3));
 fmt::println("var4 occupies: {} bytes",sizeof(var4));
 fmt::println("var5 occupies: {} bytes",sizeof(var5));
 fmt::println("var6 occupies: {} bytes",sizeof(var6));
 fmt::println("var7 occupies: {} bytes",sizeof(var7));
 fmt::println("var8 occupies: {} bytes",sizeof(var8));
}