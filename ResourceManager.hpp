#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    double get() {return res.get();}

    private:
    Resource res;
};
