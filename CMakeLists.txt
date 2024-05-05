cmake_minimum_required(VERSION 3.29.2)

project(Navezinha
	VERSION 1.0.0
	LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD          14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS       OFF)

#cria uma variável.

set(NAVEZINHA_GAME_TARGET_NAME NavezinhaGame)

add_subdirectory(Navezinha)

