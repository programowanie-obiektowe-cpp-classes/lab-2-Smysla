#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager(): res() {}
    ~ResourceManager() {}
    double get() {return res.get();}

    private:
    Resource res{};
};
