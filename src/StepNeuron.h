#ifndef STEPNEURON_H
#define STEPNEURON_H

#include <vector>
#include "Neuron.h"

class StepNeuron : public Neuron
{
 public:
  StepNeuron(double threshold);
  double activate(std::vector<double> inputs);
 private:
  double m_threshold;
};

#endif
