#ifndef NETWORK_H
#define NETWORK_H

#include <vector>
#include "Layer.h"

class Network
{
 protected:
  Network();
 public:
  virtual void create(std::vector<unsigned>) =0;
 private:
  std::vector< std::vector<Layer> > network_layers;
};

#endif
