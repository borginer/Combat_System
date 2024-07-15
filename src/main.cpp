#include "health.hpp"
#include "defenses.hpp"
#include "iostream"

int main () {
    percent_defense_stats p_defs = { 0.7, 0.4, 0.6, 0.5, 0.9, 0.4 };
    flat_defense_stats f_defs = { 20, 20, 20, 20, 20, 20 };
    Defenses defs(f_defs, p_defs);
    health_params params = { 80, 80, 1.5, defs };
    
    Health health(params);
    for (flat_defense_t def : health.defs.f_defs.values) {
        std::cout << def << std::endl;    
    }

    health.DealDamage(DAMAGE_PHYSICAL, 60);

    std::cout << "health after damage " << health.GetHealth();
}