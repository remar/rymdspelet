#include "ObjectSpec.h"

std::ostream& operator<<(std::ostream &str, const ObjectSpec &spec) {
  str << spec.x << "," << spec.y;
  return str;
}
