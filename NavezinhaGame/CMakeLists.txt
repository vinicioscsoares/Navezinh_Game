add_executable(${NAVEZINHA_GAME_TARGET_NAME} 
	${CMAKE_CURRENT_SOURCE_DIR}/include/gameFramework/GameApplication.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/gameFramework/GameApplication.cpp

)

target_include_directories(${NAVEZINHA_GAME_TARGET_NAME} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${NAVEZINHA_GAME_TARGET_NAME} PUBLIC ${NAVEZINHA_ENGINE_TARGET_NAME})


function(CopyLibDirToTarget LIB_NAME TARGET_NAME)
		add_custom_command(TARGET ${TARGET_NAME}
		POST_BUILD
		COMMAND
		${CMAKE_COMMAND} -E copy_directory
		$<TARGET_FILE_DIR:${LIB_NAME}>
		$<TARGET_FILE_DIR:${TARGET_NAME}>
		)
endfunction()

CopyLibDirToTarget(${NAVEZINHA_ENGINE_TARGET_NAME} ${NAVEZINHA_GAME_TARGET_NAME})
