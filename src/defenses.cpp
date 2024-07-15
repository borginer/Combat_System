#include "defenses.hpp"

Defenses::Defenses() {
    for (flat_defense_t& def : f_defs.values) {
        def = 0;
    }

    for (percent_defense_t& def : p_defs.values) {
        def = 1;
    }
}

Defenses::Defenses(flat_defense_stats flats, percent_defense_stats percents) {
    for (int type = DAMAGE_PHYSICAL; type < DAMAGE_TYPE_AMT; type++) {
        f_defs.values[type] = flats.values[type];
        p_defs.values[type] = percents.values[type];  
    }
}

Defenses::Defenses(Defenses& other) {
    for (int type = DAMAGE_PHYSICAL; type < DAMAGE_TYPE_AMT; type++) {
        f_defs.values[type] = other.f_defs.values[type];
        p_defs.values[type] = other.p_defs.values[type];  
    }
}

flat_defense_t Defenses::GetFlatDefense(damage_type type) const {
    return f_defs.values[type];
}

void Defenses::SetFlatDefense(damage_type type, flat_defense_t val) {
    f_defs.values[type] = val;
}

percent_defense_t Defenses::GetPercentDefense(damage_type type) const {
    return p_defs.values[type];
}


void Defenses::SetPercentDefense(damage_type type, flat_defense_t val) {
    p_defs.values[type] = val;
}