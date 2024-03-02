//
// Created by td on 3/2/24.
//

#ifndef WORLD_H
#define WORLD_H

#include <stdexcept>
#include <limits>



class World {

public:

    World();
    int getData(const int &max_size = 1);

private:

    int _my_data = 0;

    void randomize_world_data(const int &max_size = 1);


};



#endif //WORLD_H
