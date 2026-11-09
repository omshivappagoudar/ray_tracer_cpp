#ifndef COLOR_H
#define COLOR_H

#include "general.h"
#include "vec3.h"

using color = vec3;

void write_color(std::ostream &out, color pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Translate [0,1] value to [0,255] value
    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    // Write out the color components.
    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif