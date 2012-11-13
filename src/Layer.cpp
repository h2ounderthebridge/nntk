#include "Layer.h"
#include "StepNeuron.h"
#include "LinearNeuron.h"
#include "SigmoidNeuron.h"
#include "TanhNeuron.h"
#include "SoftMaxNeuron.h"
#include <vector>

Layer::Layer(string ntype, unsigned n)
{
  neuron_type = ntype;
  for(unsigned i = 0; i < n; i++) {
    if(neuron_type == "step"){
      m_neurons.push_back(StepNeuron());
    }
    else if(neuron_type == "linear") {
      m_neurons.push_back(LinearNeuron());
    }
    else if(neuron_type == "sigmoid") {
      m_neurons.push_back(SigmoidNeuron());
    }
    else if(neuron_type == "tanh") {
      m_neurons.push_back(TanhNeuron());
    }
    else {
      m_neurons.push_back(SoftMaxNeuron());
    }
  }
}

unsigned Layer::getNeuronCount() { return m_neurons.size(); };

void Layer::activeLayer(vector<double> inputs)
{
  vector<double> results;
  for(unsigned q = 0; q < m_neurons.size(); q++) {
    double result = m_neurons[q].activate(inputs);
    results.push_back(result);
  }
  return results;
}

