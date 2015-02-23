#pragma once

#include <array>

template< unsigned I >
struct Eℕ{
      enum {i = (Eℕ<I-1>::i + 1 )};
};

template<>
struct Eℕ<1>{
      enum {i = 1};
};

template<unsigned N>
constexpr auto ℕ = Eℕ<N>::i;


