#include "PathNode.h"

#include "Util.h"
#include "TextureManager.h"

PathNode::PathNode()
{
	setWidth(10);
	setHeight(10);
	getTransform()->position = glm::vec2(0.0f, 0.0f);
	getRigidBody()->isColliding = false;
	setType(PATHNODE);
	
	setCurrentHeading(0.0f);
	setCurrentDirection(glm::vec2(1.0f, 0.0f));
	
	setLOSDistance(1000.0f);
	setLOSColour(glm::vec4(1, 0, 0, 1));
}

PathNode::~PathNode()
= default;

void PathNode::draw()
{
	// draw debug
	Util::DrawRect(getTransform()->position - glm::vec2(Config::TILE_SIZE * 0.5f, Config::TILE_SIZE * 0.5f), 
		Config::TILE_SIZE, Config::TILE_SIZE);
	
	// Draw Node
	Util::DrawRect(getTransform()->position - glm::vec2(5, 5), getWidth(), getHeight(),getLOSColour());
}

void PathNode::update()
{
}

void PathNode::clean()
{
}
