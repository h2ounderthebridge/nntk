#include "SoftMaxNeuron.h"
#include <vector>

using namespace std;

SoftMaxNeuron::SoftMaxNeuron(){};

void SoftMaxNeuron::rawActivate(vector<double> inputs)
{
  double summation = 0;
  for(unsigned i = 0; i < inputs.size(); i++) {
    summation += m_weights[i]*inputs[i];
  }
  m_rawoutput = summation;
}

/* Getters */
void SoftMaxNeuron::getExponentialSum(){ return m_exponentialsum; };
void SoftMaxNeuron::getRawOutput(){ return m_rawoutput; };

/* Setters */
void SoftMaxNeuron::setExponentialSum(vector<double> outputs)
{
  double summation = 0;
  for(unsigned i = 0; i < outputs.size(); i++) {
    summation += power((exp(1)),outputs[i]);
  }
  m_exponentialsum = summation;
}

void SoftMaxNeuron::setRawOutput(double output){ m_rawoutput = output; };

double SoftMaxNeuron::activate(std::vector<double> inputs)\
{
  return power((exp(1)),m_rawoutput)/m_exponentialsum;
}
  
