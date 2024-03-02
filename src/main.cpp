#include <iostream>
#include <memory>
#include "World.h"


int main() {
    const std::unique_ptr<World> my_world(new World());

    int max_size;
    std::cout  << "Enter Max Range\n\r";
    std::cin >> max_size;
    std::cout << "Random sample bestween 1 and " << max_size << " is " << my_world->getData(max_size) << std::endl;

    return 0;
}


