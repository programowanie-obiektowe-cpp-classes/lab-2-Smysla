#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager() : res{new Resource} {}
    ResourceManager(const ResourceManager& r) :res(new Resource) {res=r.res;}
    ResourceManager& operator=(const ResourceManager& r)
    {
        res = new Resource;
        if (this != &r)
            res=r.res;
        return *this;
    }
    ~ResourceManager() {}
    double get() {return (*res).get();}

    Resource* res{};
};
