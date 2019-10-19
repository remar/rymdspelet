#include "Spaceship.h"
#include "Cats.h"

Spaceship::Spaceship() : GameObject("rymdskepp") {
  fire = Cats::CreateSpriteInstance("stor_eld");
  setBoundingRadius(40);
  direction.set(0, 0);
}

void Spaceship::update(float delta) {
  moveInDirection(delta, 300);

  // Follow camera (camera moves 200 pixels to the right each second)
  direction.set(1, 0);
  moveInDirection(delta, 200);

  Cats::SetSpritePosition(fire, getScreenXPosition() - 60, getScreenYPosition());
}
