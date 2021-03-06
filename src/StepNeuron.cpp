#include "StepNeuron.h"
#include <vector>

using namespace std;

StepNeuron::StepNeuron(double threshold)
{
  m_threshold = threshold;
}

double StepNeuron::activate(vector<double> inputs)
{
  double summation = 0;
  double result;
  vector<double> weights = getWeights();
  for(unsigned i = 0; i < inputs.size(); i++) {
    summation += weights[i]*inputs[i];
  }
  if(summation > m_threshold) {
    result = 1.0;
  }
  else{
    result = 0.0;
  }
  return result;
}
