#ifndef GAME_H
#define GAME_H

#include <string>
#include <sstream>
#include <time.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include "Entity.h"

using namespace std;
using namespace sf;
using namespace glm;

class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();
private:
	RenderWindow window;
	Clock clock;
	Time time;
	bool animate = false;
	vec3 animation = vec3(0.0f);
	float rotation = 0.0f;
	bool isRunning = false;
	bool isFiring = false;
	int goalPos = 2;
	int score = 0;
	int lives = 5;
	void initialize();
	void update();
	void render();
	void unload();
	void drawCube(GLint ID, mat4 mvp, const GLfloat color[]);
};

#endif  // ! GAME_H