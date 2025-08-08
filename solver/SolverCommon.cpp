//
// Created by bureaugau on 08/08/25.
//

#include "SolverCommon.h"
#include "Model.h"
#include "SubModel.h"

void SolverCommon::printLargestErrors(const Model& model) {
  model.getFInfos();
}

void SolverCommon::printLargestErrors(const SubModel& subModel) {
  subModel.getFequationByLocalIndex();
}