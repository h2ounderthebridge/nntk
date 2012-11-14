#ifndef TANHNEURON_H
#define TANHNEURON_H

#include "Neuron.h"
#include <vector>

class TanhNeuron : public Neuron
{
 public:
  TanhNeuron(double threshold);
  double activate(std::vector<double> inputs);
 private:
  double m_threshold;
};

#endif
