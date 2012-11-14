#ifndef SIGMOIDNEURON_H
#define SIGMOIDNEURON_H

#include "Neuron.h"
#include <vector>

class SigmoidNeuron : public Neuron
{
 public:
  SigmoidNeuron(double threshold);
  double activate(std::vector<double> inputs);
 private:
  double m_threshold;
};

#endif
