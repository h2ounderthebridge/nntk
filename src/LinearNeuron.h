#ifndef LINEARNEURON_H
#define LINEARNEURON_H

#include "Neuron.h"
#include <vector>

class LinearNeuron : public Neuron
{
 public:
  LinearNeuron(double bias);
  double activate(std::vector<double> inputs);
 private:
  double m_bias;
};

#endif
