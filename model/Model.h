//
// Created by bureaugau on 08/08/25.
//

#ifndef MODEL_H
#define MODEL_H



class Model {
public:
  virtual ~Model() = default;

  virtual void getFInfos() const = 0;
};



#endif //MODEL_H
