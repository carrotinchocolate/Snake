#include "apple.h"

Apple::Apple(const sf::Vector2i& new_position)
{
    Create(new_position);
}

void Apple::Create(const sf::Vector2i& new_position)
{
    position_ = new_position;
    // shape_ инициализация, а можно делать это каждый раз в рендере
}

sf::Vector2i Apple::GetPosition() const
{
    return position_;
}

void Update(const float dt)
{
    //здесь ничего не нужно
}

void Render(sf::RenderWindow& window)
{
    //отрисовываем shape_ в зависимости от position_
    //отрисовываем красным цветом
}