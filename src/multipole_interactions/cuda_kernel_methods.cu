#ifdef OCTOTIGER_CUDA_ENABLED
#include "cuda_kernel_methods.hpp"
namespace octotiger {
namespace fmm {
    namespace multipole_interactions {
        __global__ void cuda_multipole_interactions_kernel(double* center_of_masses,
            double* multipoles, double* potential_expansions, double* angular_corrections,
            octotiger::fmm::multiindex<> stencil, bool* stencil_phases,
            double* factor_half, double* factor_sixth) {
            octotiger::fmm::multiindex<> cell_index_unpadded(threadIdx.x, threadIdx.y, threadIdx.z);
            printf("yay");
        }
    }    // namespace multipole_interactions
}    // namespace fmm
}    // namespace octotiger
#endif