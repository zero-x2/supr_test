//
// Created by td on 3/2/24.
//

#include "World.h"

#include <random>


World::World() {
    _my_data = 5;
}

int World::getData(const int &max_size) {

    if (max_size <= 0) {
        return 1;
    }
    randomize_world_data(max_size);
    return _my_data;
}

void World::randomize_world_data(const int &max_size) {

    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, max_size);
    _my_data = uniform_dist(e1);
}


