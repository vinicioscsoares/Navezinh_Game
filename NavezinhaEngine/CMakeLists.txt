add_library(${NAVEZINHA_ENGINE_TARGET_NAME} STATIC
	
	${CMAKE_CURRENT_SOURCE_DIR}/include/framework/Application.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Application.cpp

	${CMAKE_CURRENT_SOURCE_DIR}/include/framework/World.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/framework/World.cpp
	
	
	${CMAKE_CURRENT_SOURCE_DIR}/include/framework/Core.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Core.cpp



	${CMAKE_CURRENT_SOURCE_DIR}/include/EntryPoint.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/EntryPoint.cpp
)

target_include_directories(${NAVEZINHA_ENGINE_TARGET_NAME} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${NAVEZINHA_ENGINE_TARGET_NAME} PUBLIC sfml-graphics)
target_link_libraries(${NAVEZINHA_ENGINE_TARGET_NAME} PUBLIC sfml-window)
target_link_libraries(${NAVEZINHA_ENGINE_TARGET_NAME} PUBLIC sfml-system)
target_link_libraries(${NAVEZINHA_ENGINE_TARGET_NAME} PUBLIC sfml-audio)

function(CopyLibToTarget LIB_NAME TARGET_NAME)
		add_custom_command(TARGET ${TARGET_NAME}
		POST_BUILD
		COMMAND
		${CMAKE_COMMAND} -E copy_if_different
		$<TARGET_FILE:${LIB_NAME}>
		$<TARGET_FILE_DIR:${TARGET_NAME}>
		)
endfunction()

CopyLibToTarget(sfml-graphics ${NAVEZINHA_ENGINE_TARGET_NAME})
CopyLibToTarget(sfml-system ${NAVEZINHA_ENGINE_TARGET_NAME})
CopyLibToTarget(sfml-window ${NAVEZINHA_ENGINE_TARGET_NAME})
CopyLibToTarget(sfml-audio ${NAVEZINHA_ENGINE_TARGET_NAME})