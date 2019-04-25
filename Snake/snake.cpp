#include "snake.h"
#include <cassert>

Snake::Snake()
{
    //Create(head_position);
}

//virtual ~Snake() = default


void Snake::Create(const sf::Vector2i& head_position)
{
    Segment head = {
        head_position,
        sf::RectangleShape(),
        sf::Color::Yellow
    };

    body_.push_back(std::move(head));
}

bool Snake::CheckSelfCollision() const
{
// цикл по body_, проверка на равенство координат с head_
    //не с первого элемента, у них очевидно позиция головы равна...
}

sf::Vector2i Snake::GetHeadPosition() const
{
    assert(!body_.empty());
    return body_[0].position;
}

const std::vector<Segment>& Snake::GetBody() const
{
    return body_;
}

void Snake::Update(const float dt)
{
    MoveByOneCell();
}

void Snake::Render(sf::RenderWindow& window)
{
    //цикл по body_
    //отрисовка всех сегментов из body_
}


void Snake::MoveByOneCell()
{
    //реверс итераторы, не просто бегин и енд, а v.rbegin и v.rend, и тогда мы с конца в начало
    // проход по body_ в обратном направлении, передвинуть все сегменты кроме головы на место предыдущего
    //голову передвинуть согласно direction_ (вне цикла, отдельный if после цикла)
}

void Snake::Grow()
{
    assert(!body_.empty());
    // первый случай: длина змеи равна 1 (т. е. есть только голова): добавление нового сегмента
    // производится на основании переменной direction_ (куда двигалась змея)
    // второй случай: длина змеи >= 2. тогда увеличить длину на основании двух последних сегментов  
    //
}

int Snake::GetScore() const
{

}

void Snake::IncreaseScore(const int delta_score)
{

}

int Snake::GetLives() const
{

}

void Snake::DecreaseLivesByOne()
{

}