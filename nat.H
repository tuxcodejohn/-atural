
template< unsigned I >
struct ℕ{
      enum {i = (ℕ<I-1>::i + 1 )};
};

template<>
struct ℕ<1>{
      enum {i = 1};
};

