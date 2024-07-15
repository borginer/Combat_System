#include "health.hpp"
#include "iostream"

Health::Health(health_t cap) : 
    health(cap), capacity(cap), heal_mult(1), defs() {
}

Health::Health(health_params params) : defs(params.defs) {
    if (params.health > params.capacity) {
        // no proper errors yet
        std::cout << "error more health than cap";
    }
    this->health = params.health;
    this->capacity = params.capacity;
    this->heal_mult = params.heal_mult;
}

void Health::DealDamage(damage_type type, health_t val) {
    flat_defense_t flat = defs.f_defs.values[type];
    percent_defense_t percent = defs.p_defs.values[type];
    health_t damage = (val - flat) * percent;
    if (damage >= health) {
        health = 0;
    }
    else {
        health -= damage;
    }
}

void Health::DealDamage(damage_stats damages) {
    for (int type = DAMAGE_PHYSICAL; type < DAMAGE_TYPE_AMT; type++) {
        DealDamage((damage_type)type, damages.values[type]);
    }
}

health_t Health::GetHealth() const {
    return health;
}

void Health::Heal(health_t val) {
    health_t health_tmp = health + heal_mult * val;
    if (health_tmp > capacity) {
        health = capacity;
    } 
    else {
        health = health_tmp;
    }
}

bool Health::IsDead() {
    return health == 0;
}