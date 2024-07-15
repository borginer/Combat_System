#pragma once

#include "types.hpp"

class Resource {
    public:
    // set resources from stats;
    Resource(resource_stats stats, resource_stats capacities);
    // use resource, returns true and updates if can use
    bool Use(resource_type type, resource_t val);
    // add resource 
    void Add(resource_type type, resource_t val);

    private:
    resource_t capacities[RESOURCE_TYPE_AMT];
    resource_t type[RESOURCE_TYPE_AMT];
};