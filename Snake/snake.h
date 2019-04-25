#pragma once

#include <SFML/Graphics.hpp>

class Snake
{
public:
    struct Segment
    {
        sf::Vector2i position;
        sf::RectangleShape shape;
        sf::Color color;
    };

    enum Direction
    {
        Up,
        Right,
        Down,
        Left,
        None
    };

public:
    Snake() = default;
    virtual ~Snake() = default;

    void Create(const sf::Vector2i& head_position);

    bool CheckSelfCollision() const;
    void Grow();

    Direction GetDirection() const;
    void SetDirection(const Direction new_direction);

    int GetScore() const;
    void IncreaseScore(const int delta_score);
    int GetLives() const;
    void DecreaseLivesByOne();


    sf::Vector2i GetHeadPosition() const;
    const std::vector<Segment>& GetBody() const;

    void Update(const float dt);
    void Render(sf::RenderWindow& window);




private:
    void MoveByOneCell();
    

    //std::vector<sf::Vector2i> body_;
    //std::vector<sf::RectangleShape> body_shapes;
    std::vector<Segment> body_;
    Direction direction_;

    int lives_;
    int score_;

};
