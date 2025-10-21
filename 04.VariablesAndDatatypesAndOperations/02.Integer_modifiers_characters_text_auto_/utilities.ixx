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