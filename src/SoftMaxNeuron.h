#ifndef SOFTMAXNEURON_H
#define SOFTMAXNEURON_H

#include "Neuron.h"
#include <vector>

class SoftMaxNeuron : public Neuron
{
 protected:
  SoftMaxNeuron();
 public:
  double activate(std::vector<double> inputs);
  void rawActivate(std::vector<double> inputs);
  void getExponentialSum();
  void setExponentialSum(std::vector<double> outputs);
  void getRawOutput();
  void setRawOutput(double output);
 private:
  double m_exponentialsum;
  double m_rawoutput;
};

#endif
