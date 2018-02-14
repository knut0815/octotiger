#pragma once

#include <cinttypes>

#include "defs.hpp"

#ifndef NDIM
#define NDIM 3
#endif
#ifndef INX
#define INX 8
#endif

namespace octotiger {

// namespace detail {

//     constexpr uint64_t const_pow(uint64_t base, uint64_t exp) {
//         if (exp >= 1) {
//             return base * const_pow(base, exp - 1);
//         } else {
//             return 1;
//         }
//     }
// }

namespace fmm {

    // constants from defs.hpp in deobfuscated form
    constexpr uint64_t DIMENSION = NDIM;    // 3

    // number of expansions in each cell per direction
    constexpr int64_t INNER_CELLS_PER_DIRECTION = INX;    // 8

    constexpr uint64_t INNER_CELLS =
        INNER_CELLS_PER_DIRECTION * INNER_CELLS_PER_DIRECTION * INNER_CELLS_PER_DIRECTION;

    // TODO: change this to 4 as soon as simplified padding works
    constexpr uint64_t INNER_CELLS_PADDING_DEPTH = INX;    // 8

    constexpr uint64_t PADDED_STRIDE = INNER_CELLS_PER_DIRECTION + 2 * INNER_CELLS_PADDING_DEPTH;

    constexpr uint64_t ENTRIES = PADDED_STRIDE * PADDED_STRIDE * PADDED_STRIDE;

    constexpr uint64_t EXPANSION_COUNT_PADDED = ENTRIES;
    constexpr uint64_t EXPANSION_COUNT_NOT_PADDED = INNER_CELLS;

    // how many stencil elements are processed for one origin cell, before the next
    // cell is processed
    constexpr uint64_t STENCIL_BLOCKING = 16;
    constexpr uint64_t SOA_PADDING = 19;    // to prevent some of the 4k aliasing

}    // namespace fmm
}    // namespace octotiger
