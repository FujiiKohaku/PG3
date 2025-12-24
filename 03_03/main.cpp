#include "Bone.h"
#include "DemonKing.h"
#include "Slime.h"
#include <stdio.h>
int main()
{

    Enemy* enemys[3];

    for (int i = 0; i < 3; i++) {

        if (i < 1) {

            enemys[i] = new Slime();
        } else if (i < 2) {
            enemys[i] = new Bone();
        } else {

            enemys[i] = new DemonKing();
        }
    }

    for (int i = 0; i < 3; i++) {

        enemys[i]->Attack();
    }

    for (int i = 0; i < 3; i++) {

        delete enemys[i];
    }

    return 0;
}