#pragma once

typedef double flat_defense_t;
typedef double percent_defense_t;
typedef double damage_t;
typedef double health_t;
typedef double resource_t;

enum damage_type {
    DAMAGE_TYPE_PHYSICAL = 0,
    DAMAGE_TYPE_MAGIC,
    DAMAGE_TYPE_FIRE,
    DAMAGE_TYPE_LIGHTNING,
    DAMAGE_TYPE_HOLY,
    DAMAGE_TYPE_DARK,
    DAMAGE_TYPE_AMOUNT
};

enum resource_type {
    RESOURCE_TYPE_MANA,
    RESOURCE_TYPE_HEALTH,
    RESOURCE_TYPE_ENERGY,
    RESOURCE_TYPE_AMOUNT
};

struct damage_stats {
    damage_t type[DAMAGE_TYPE_AMOUNT];
};

struct percent_defense_stats {
    percent_defense_t type[DAMAGE_TYPE_AMOUNT];
};

struct flat_defense_stats {
    flat_defense_t type[DAMAGE_TYPE_AMOUNT];
};

struct resource_stats {
    resource_t type[RESOURCE_TYPE_AMOUNT];
};