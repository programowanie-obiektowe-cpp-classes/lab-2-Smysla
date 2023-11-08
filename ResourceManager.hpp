#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager(Resource r): res(r) {}
    double get() {return res.get();}

    private:
    Resource res;
};
