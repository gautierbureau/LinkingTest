#include <iostream>
#include "ModelImpl.h"
#include "SubModel.h"
#include "SolverCommon.h"
#include <memory>

int main() {
  std::unique_ptr<Model> model = std::make_unique<ModelImpl>();
  std::unique_ptr<SubModel> subModel = std::make_unique<SubModel>();

  SolverCommon::printLargestErrors(*model);
  SolverCommon::printLargestErrors(*subModel);

  return 0;
}
