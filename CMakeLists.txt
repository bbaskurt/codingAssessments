cmake_minimum_required(VERSION 2.8.9)

set (CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}" CACHE PATH "Install path prefix" FORCE)

project (CodingAssessments)

set(assessment_sources
	main.cpp
	binaryGap.h
	binaryGap.cpp
	binaryGap.txt
	rotateArray.h
	rotateArray.cpp
	rotateArray.txt
	)	

add_executable(${PROJECT_NAME}
	${assessment_sources}
)

#add_executable(assessments main.cpp)
#target_link_libraries(CodingAssessments ${PROJECT_LINK_LIBS} )