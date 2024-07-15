#pragma once

#include "defenses.hpp"
#include "types.hpp"

struct health_params {
    health_t health;
    health_t capacity;
    double heal_mult;
    Defenses defs;
};

class Health {
    public:
    // set capacity to cap and starting health is cap
    // defaults for heal_mult are 1 and for defs are 100% damage
    Health(health_t cap);
    // sets all params to ones from health_params
    // otherwise defaults described above
    Health(health_params params);
    // deal val damage of kind type
    void DealDamage(damage_type type, health_t val);
    // deal damage for every type in damages
    void DealDamage(damage_stats damages);
    // returns hp
    health_t GetHealth() const;
    // raises health
    void Heal(health_t val);
    // returns wether out of health
    bool IsDead();
    
    // private:
    health_t health; // actual current health
    health_t capacity;

    double heal_mult; // healing multiplier    
    Defenses defs;

};