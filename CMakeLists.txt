cmake_minimum_required(VERSION 3.29.2)

project(Navezinha
	VERSION 1.0.0
	LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD          14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS       OFF)

include(FetchContent)
set(SFML_LIB_NAME SMFL)

FetchContent_Declare(
	${SFML_LIB_NAME}
	GIT_REPOSITORY https://github.com/SFML/SFML
	GIT_TAG 2.6.1
	GIT_SHALLOW FALSE
)

FetchContent_MakeAvailable(${SFML_LIB_NAME})


#cria uma vari�vel.

set(NAVEZINHA_ENGINE_TARGET_NAME NavezinhaEngine)
set(NAVEZINHA_GAME_TARGET_NAME NavezinhaGame)

add_subdirectory(NavezinhaEngine)
add_subdirectory(NavezinhaGame)