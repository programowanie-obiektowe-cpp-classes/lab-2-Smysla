#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager() : res{new Resource} {}
    ResourceManager(const ResourceManager& r) :res(r.res) {}
    
    ~ResourceManager() {delete res;}
    double get() {return (*res).get();}

    Resource* res{};
};
