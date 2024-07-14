#pragma once

#include "types.hpp"

struct Defenses {
    // set to take 100% damage
    Defenses();
    // set defenses from stats
    Defenses(flat_defense_stats f_stats, percent_defense_stats p_stats);
    // get flat defense of specific type
    flat_defense_t FlatDefense(damage_type type) const;
    // get percent defense of specific type
    percent_defense_t PercentDefense(damage_type type) const;
    // set flat defense of specific type
    void SetFlatDefense(damage_type type, flat_defense_t val);
    // set percent defense of specific type
    void SetPercentDefense(damage_type type, percent_defense_t val);

    percent_defense_stats p_defs;
    flat_defense_stats f_defs;
};