#include "SigmoidNeuron.h"
#include <vector>
#include <math.h>

using namespace std;

SigmoidNeuron::SigmoidNeuron(double threshold)
{
  m_threshold = threshold;
}

double SigmoidNeuron::activate(vector<double> inputs)
{
  double summation = 0;
  double result;
  vector<double> weights = getWeights();
  for(unsigned i = 0; i < inputs.size(); i++) {
    summation += weights[i]*inputs[i];
  }
  result = 1/(1 +pow((exp(1)),-(summation-m_threshold)));
  return result;
}
