#ifndef VRPTW_H
#define VRPTW_H

/*

This file is part of VROOM.

Copyright (c) 2015-2018, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include <array>

#include "problems/vrp.h"

class vrptw : public vrp {
private:
  static constexpr std::array<h_param, 24> homogeneous_parameters =
    {h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 0.3),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 0.7),
     h_param(HEURISTIC_T::BASIC, INIT_T::EARLIEST_DEADLINE, 0.2),
     h_param(HEURISTIC_T::BASIC, INIT_T::FURTHEST, 1.1),
     h_param(HEURISTIC_T::BASIC, INIT_T::NONE, 0.9),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 0.1),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 1.8),
     h_param(HEURISTIC_T::BASIC, INIT_T::EARLIEST_DEADLINE, 0.7),
     h_param(HEURISTIC_T::BASIC, INIT_T::NONE, 0.2),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 1.5),
     h_param(HEURISTIC_T::BASIC, INIT_T::EARLIEST_DEADLINE, 0.6),
     h_param(HEURISTIC_T::BASIC, INIT_T::EARLIEST_DEADLINE, 1.1),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 0),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 0.1),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 1),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 1.2),
     h_param(HEURISTIC_T::BASIC, INIT_T::HIGHER_AMOUNT, 0),
     h_param(HEURISTIC_T::BASIC, INIT_T::EARLIEST_DEADLINE, 0.9),
     h_param(HEURISTIC_T::BASIC, INIT_T::FURTHEST, 0.1),
     h_param(HEURISTIC_T::BASIC, INIT_T::FURTHEST, 2),
     h_param(HEURISTIC_T::BASIC, INIT_T::NONE, 0),
     h_param(HEURISTIC_T::BASIC, INIT_T::EARLIEST_DEADLINE, 1.8),
     h_param(HEURISTIC_T::BASIC, INIT_T::FURTHEST, 0.2),
     h_param(HEURISTIC_T::BASIC, INIT_T::FURTHEST, 0.7)};

public:
  vrptw(const input& input);

  virtual solution solve(unsigned exploration_level,
                         unsigned nb_threads) const override;
};

#endif
