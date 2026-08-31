#include "promedio.hpp"

#include <stdexcept>

namespace aed {

double calcularSuma(const std::vector<double>& calificaciones) {
    double suma = 0.0;
    for (double calificacion : calificaciones) {
        suma = suma + calificacion;
    }
    return suma;
}

double calcularPromedio(const std::vector<double>& calificaciones) {
    if (calificaciones.empty()) {
        throw std::invalid_argument("No se puede promediar un vector vacio");
    }

    double suma = calcularSuma(calificaciones);
    double promedio = suma / calificaciones.size();
    return promedio;
}

}  // namespace aed

