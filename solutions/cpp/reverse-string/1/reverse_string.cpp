#include "reverse_string.h"
#include <algorithm>
namespace reverse_string {

// TODO: add your solution here
std::string reverse_string(const std::string& text){
    //copia local
    std::string resultado = text;
    //se invierte
    std::reverse(resultado.begin(), resultado.end());
    
    return resultado;
    
}
}  // namespace reverse_string
