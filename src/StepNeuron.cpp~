#include "StepNeuron.h"

StepNeuron::StepNeuron(double threshold)
{
  m_threshold = threshold;
}

double StepNeuron::activate(vector<double> inputs)
{
  double summation = 0;
  double result;
  for(unsigned i = 0; i < inputs.size(); i++) {
    summation += m_weights[i]*inputs[i];
  }
  if(summation > m_threshold) {
    result = 1.0;
  }
  else{
    result = 0.0;
  }
  return result;
}
