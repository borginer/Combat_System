#pragma once

typedef double flat_defense_t;
typedef double percent_defense_t;
typedef double health_t;
typedef double resource_t;

enum damage_type {
    DAMAGE_PHYSICAL = 0,
    DAMAGE_MAGIC,
    DAMAGE_FIRE,
    DAMAGE_LIGHTNING,
    DAMAGE_HOLY,
    DAMAGE_DARK,
    DAMAGE_TYPE_AMT
};

enum resource_type {
    RESOURCE_MANA,
    RESOURCE_HEALTH,
    RESOURCE_ENERGY,
    RESOURCE_TYPE_AMT
};

struct damage_stats {
    health_t values[DAMAGE_TYPE_AMT];
};

struct percent_defense_stats {
    percent_defense_t values[DAMAGE_TYPE_AMT];
};

struct flat_defense_stats {
    flat_defense_t values[DAMAGE_TYPE_AMT];
};

struct resource_stats {
    resource_t values[RESOURCE_TYPE_AMT];
};