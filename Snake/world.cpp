#include <SFML/Graphics.hpp>
#include "world.h"

void World::Update(const float dt)
{
    snake_.Update(dt);
    apple_.Update(dt);

    for (Wall& wall : walls_)
    {
        wall.Update(dt);
    }

    HandleCollisions();
}

void World::Render(sf::RenderWindow& window)
{
    snake_.Render(window);
    apple_.Render(window);

    for (Wall& wall : walls_)
    {
        wall.Render(window);
    }
}

void World::HandleCollisions()
{
    // проверить совпадают ли позиции головы змеи и яблока.
    //если совпали то вызвать snake_.Grow() и сместить яблоко на 1 клетку вправо 1 клетку вниз
    // (вызвать apple_.Create(new_position))
}

sf::Vector2i FindRandomFreeCell() const
{
    //оставить пустым, вызывает apple_.GetPosition(), snake_.GetBody(),
    // формирует рандомную клетку, которая не лежит в теле змеи и не лежит в яблоке
    // проверяем, что полученная клетка не принадлежит ни одной из стен
    //если принадлежит, то перегенерируем клетку, пока не найдем подходящую
}