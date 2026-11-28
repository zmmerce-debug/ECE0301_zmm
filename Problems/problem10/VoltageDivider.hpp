#ifndef VOLTAGE_DIVIDER_HPP
#define VOLTAGE_DIVIDER_HPP

#include "Network.hpp"
#include "VoltageSource.hpp"
#include "Resistor.hpp"

class VoltageDivider : public Network
{
private:

  int num_res;
  void update_node_voltages();

public:
  VoltageDivider(double v, double res[], int num_res);
  int get_num_resistors() const;
  virtual double get_source_voltage() const;
  double get_resistance(int idx) const;
  double get_resistor_voltage(int idx) const;
  double get_loop_current() const;

  void set_source_voltage(double v);
  void set_resistance(int idx, double r);
};

#endif