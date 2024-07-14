#pragma once

#include "defenses.hpp"
#include "types.hpp"

class Health {
    public:
    // set health to hp and capacity to cap
    Health(health_t hp, health_t cap) {
        health = hp; this->capacity = cap;
    };
    // deal val damage of kind type
    void DealDamage(damage_type type, health_t val);
    // deal damage for every type in stats
    void DealDamage(damage_stats stats);
    // returns hp
    health_t GetHealth() const;
    // raises health
    void Heal(health_t val);
    // sets health to 0 ie kills
    void Kill();
    
    private:
    health_t health; // actuall current health
    health_t capacity;

    double heal_mult; // healing multiplier    
    Defenses defs;

};