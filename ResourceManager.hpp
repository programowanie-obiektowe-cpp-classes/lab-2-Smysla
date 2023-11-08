#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager() {}
    ResourceManager(const ResourceManager& r) :res{r.res} {}
    ~ResourceManager() {}
    double get() {return res.get();}

    Resource res{};
};
