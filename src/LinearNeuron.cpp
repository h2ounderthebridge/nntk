#include "LinearNeuron.h"
#include <vector>

using namespace std;

LinearNeuron::LinearNeuron(double bias)
{
  m_bias = bias;
}

double LinearNeuron::activate(vector<double> inputs)
{
  double summation = 0;
  double result;
  vector<double> weights = getWeights();
  for(unsigned i = 0; i < inputs.size(); i++) {
    summation += weights[i]*inputs[i];
  }
  result = summation + m_bias;
  return result;
}
