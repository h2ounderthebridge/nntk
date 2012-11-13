#include "Neuron.h"
#include <vector>

Neuron::Neuron(){};

vector<double> Neuron::getWeights() { return m_weights; };

void Neuron::setWeights(vector<double> weights) { m_weights = weights; };
