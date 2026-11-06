#include "hamming.h"
#include <stdexcept>

namespace hamming {

// TODO: add your solution here
int compute(const std::string& a,const std::string& b){
    if (a.length() != b.length()){
        throw std::domain_error("las cadenas deben tener la misma longitud");
    }

    int diferencias = 0;

    for (size_t i=0;i<a.length();++i){
        if (a[i] != b[i]){
            diferencias++;
        }
    }
    
    return diferencias;
}
}  // namespace hamming
