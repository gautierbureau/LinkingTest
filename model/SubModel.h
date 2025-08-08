//
// Created by bureaugau on 08/08/25.
//

#ifndef SUBMODEL_H
#define SUBMODEL_H



class SubModel {
  public:
  SubModel();

  virtual ~SubModel() = default;

  virtual void getFequationByLocalIndex() const;
};



#endif //SUBMODEL_H
