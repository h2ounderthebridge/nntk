#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include "Neuron.h"
#include "Layer.h"
#include "StepNeuron.h"
#include "LinearNeuron.h"
#include "SigmoidNeuron.h"
#include "TanhNeuron.h"
#include "SoftMaxNeuron.h"

using namespace std;

int main()
{
  vector<double> weights;
  vector<double> inputs;
  weights.push_back(0.6231);
  weights.push_back(-0.2219);
  weights.push_back(0.8945);
  inputs.push_back(1);
  inputs.push_back(0);
  inputs.push_back(1);
  SigmoidNeuron n(0.5);
  n.setWeights(weights);
  double result;
  result = n.activate(inputs);
  cout << result << endl;
  system("PAUSE");
  return 0;
}
