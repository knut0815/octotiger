void complete_hydro_amr_boundary_cpu(const double dx, const bool energy_only, const std::vector<std::vector<real>> &Ushad, const std::vector<std::atomic<int>> &is_coarse, const std::array<double, NDIM> &xmin, std::vector<std::vector<real>> &U);
