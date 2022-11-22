/*
 * Copyright (c) 2015-2018, Davide Galassi. All rights reserved.
 *
 * This file is part of the BeeOS software.
 *
 * BeeOS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with BeeOS; if not, see <http://www.gnu/licenses/>.
 */

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t prev;

    prev = clock();
    while (1) {
        if ((clock() - prev)/CLOCKS_PER_SEC >= 3) {
            printf("\n");
            printf("Going to sleep...(cpu time: ~%u)\n",
                    clock()/ CLOCKS_PER_SEC);
            prev = clock();
            sleep(3);
        }
        printf(".");
    }
    return 0;
}
