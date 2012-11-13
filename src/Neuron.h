#ifndef NEURON_H
#define NEURON_H

#include <vector>

/* Abstract class that defines the required functions of
   a neuron in the network */
class Neuron
{
 protected:
  Neuron();
 public:
  virtual double activate(std::vector<double>) =0;
  std::vector<double> getWeights();
  void setWeights(std::vector<double> weights);
 private:
  std::vector<double> m_weights;
};

#endif
