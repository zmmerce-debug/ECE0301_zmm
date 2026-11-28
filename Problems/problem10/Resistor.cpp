#include "Resistor.hpp"

void Resistor::set_value(double r)
{
  // TODO
}

double Resistor::get_current() const
{
  
  return get_value();

  if (r == 0){
    throw std::logic_error("Resistance is zero");
  }
  return get_voltage()/r;
}