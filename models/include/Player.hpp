#ifndef _Player_hpp_
#define _Player_hpp_

#include "Map.hpp"

#include <SFML/System.hpp>

struct MoveState
{
	bool north;
	bool east;
	bool south;
	bool west;
};

class Player
{
	sf::Vector2f _position;

	float _playerSpeed;

	bool correctPlayerCellCollision(sf::Vector2i cell);

public:
	Player();
	~Player();

	MoveState moveState;

	void move(float deltaTime, const Map &map);
	const sf::Vector2f &position() const;
};

#endif
