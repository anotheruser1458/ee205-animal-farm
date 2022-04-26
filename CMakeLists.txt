cmake_minimum_required(VERSION 3.21)
project(ee205_lab_08d_animal_farm_3)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(ee205_lab_08d_animal_farm_3 main.cpp Node.cpp Node.h main.h test.cpp Animal.cpp Animal.h Weight.cpp Weight.h Mammal.cpp Mammal.h Cat.cpp Cat.h List.cpp List.h SinglyLinkedList.cpp SinglyLinkedList.h)
target_link_libraries(ee205_lab_08d_animal_farm_3 -static)
target_link_libraries(ee205_lab_08d_animal_farm_3 ${Boost_LIBRARIES})