%module family
%{
#include "source/Parent.hpp"
#include "source/Child.hpp"
%}

// Import standard types
%include "std_vector.i"
%include "stdint.i"

%include "source/Parent.hpp"
%include "source/Child.hpp"

namespace std {
    %template(vector_child) vector<Child>;
};
