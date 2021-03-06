/*
 * Copyright (C) 2018 taylor.fish <contact@taylor.fish>
 *
 * This file is part of Freeze.
 *
 * Freeze is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Freeze is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Freeze.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FREEZE__PLUGIN__SAMPLES_H
#define FREEZE__PLUGIN__SAMPLES_H

#include <stddef.h>

typedef struct StereoPort {
    float *left;
    float *right;
} StereoPort;

typedef struct StereoSlice {
    const float *left;
    const float *right;
    size_t length;
} StereoSlice;

#endif
