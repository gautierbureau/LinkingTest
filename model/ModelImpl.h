//
// Created by bureaugau on 08/08/25.
//

#ifndef MODELIMPL_H
#define MODELIMPL_H

#include "Model.h"

class ModelImpl : public Model {
public:
  ModelImpl();
  ~ModelImpl() override;
  void getFInfos() const override;
};



#endif //MODELIMPL_H
