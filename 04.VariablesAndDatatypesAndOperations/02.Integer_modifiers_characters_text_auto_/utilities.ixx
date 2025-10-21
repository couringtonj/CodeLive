module;
#include<fmt/format.h>
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