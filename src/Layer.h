#ifndef LAYER_H
#define LAYER_H

#include <vector>
#include "Neuron.h"

class Layer
{
 protected:
  Layer(std::string ntype, unsigned n);
 public:
  std::vector<double> activateLayer(std::vector<double> inputs);
  unsigned getNeuronCount();
 private:
  std::vector<Neuron> m_neurons;
  std::string neuron_type;
};

#endif
