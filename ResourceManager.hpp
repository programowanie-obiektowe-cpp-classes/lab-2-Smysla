#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager() : res{new Resource} {}
    ResourceManager(const ResourceManager& r) :res(new Resource(*(r).res)) {}
    ResourceManager& operator=(const ResourceManager& r)
    {
        res = new Resource(*(r).res);
        return *this;
    }
    ~ResourceManager() {delete res;}
    double get() {return (*res).get();}

    Resource* res{};
};
