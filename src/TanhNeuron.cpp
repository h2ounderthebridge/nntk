#include "TanhNeuron.h"
#include <math.h>
#include <vector>

using namespace std;

TanhNeuron::TanhNeuron(double threshold)
{
  m_threshold = threshold;
}

double TanhNeuron::activate(vector<double> inputs)
{
  double summation = 0;
  double result;
  vector<double> weights = getWeights();
  for(unsigned i = 0; i < inputs.size(); i++) {
    summation += weights[i]*inputs[i];
  }
  double beta = summation-m_threshold;
  result = (pow((exp(1)),beta)-pow((exp(1)),-beta))/(pow((exp(1)),beta)+pow((exp(1)),-beta));
  return result;
}
