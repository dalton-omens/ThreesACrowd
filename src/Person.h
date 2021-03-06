//
// Created by Dalton on 2/27/2019.
//

#ifndef THREESACROWD_PERSON_H
#define THREESACROWD_PERSON_H

#include <glm/vec2.hpp>
#include <vector>

struct Cell;
class Grid;

class Person {
public:
  Person();
  Person(glm::vec2 pos, glm::vec2 velocity, float smelliness);
  Person(float x, float y, float vx, float vy, float smelliness);

  /* Grid index of current position */
  glm::ivec2 getGridIndex() const;

  /* Cell of current position */
  Cell *getCell(Grid &grid);

  glm::vec2 getPos();
  glm::vec2 getVelocity();
  void setPos(glm::vec2 pos);
  void setVelocity(glm::vec2 pos);

private:
  glm::vec2 pos;
  glm::vec2 velocity;

  float smelliness;
};

struct Group {
  Group(glm::vec2 goal, std::vector<Person> people);

  glm::vec2 goal;
  std::vector<Person> people;
};


#endif //THREESACROWD_PERSON_H
