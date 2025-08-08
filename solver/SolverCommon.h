//
// Created by bureaugau on 08/08/25.
//

#ifndef SOLVERCOMMON_H
#define SOLVERCOMMON_H

class Model;
class SubModel;

class SolverCommon {
public:
  static void printLargestErrors(const Model& model);

  static void printLargestErrors(const SubModel& subModel);
};



#endif //SOLVERCOMMON_H
