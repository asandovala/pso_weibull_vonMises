#include <stdio.h>
#include "pso.h"

int main() {
    int i;
    float k, c;
    struct swarm *s;
    s = initializeSwarm(50, PARAM_W, PARAM_C1, PARAM_C2);

    for (i = 0; i < MAX_ITER; i++) {
        updateSwarm(s);
	    updateParameters(s,i);
        //printf("Resultado: k: %.2f , c: %.2f \n", s->global_best[0], s->global_best[1]);
    }

    k = s->global_best[0];
    c = s->global_best[1];
    printf("Mejor Resultado: k: %.2f , c: %.2f \n", k, c);

    return 0;
}
