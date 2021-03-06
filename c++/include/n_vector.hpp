#ifndef ND_VECTOR_H
#define ND_VECTOR_H

#include <vector>

template <class T, size_t N>
class n_vector: public std::vector<n_vector<T,N - 1>> {
  public:
    size_t dimension() const;
    n_vector();
  private:
    size_t _N;
};

template <class T>
class n_vector<T,1>: public std::vector<T> {
    public:
      size_t dimension() const;
      n_vector();
    private:
      size_t _N;
};

#endif
