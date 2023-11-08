#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager() {}
    ~ResourceManager() {}
    double get() {return res.get();}

    private:
    Resource res{};
};
