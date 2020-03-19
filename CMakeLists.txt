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
	oddOccurancesInArray.h
	oddOccurancesInArray.cpp
	oddOccurancesInArray.txt
	frogJmp.h
	frogJmp.cpp
	frogJmp.txt
	permMissingElem.h
	permMissingElem.cpp
	permMissingElem.txt
	tapeEquilibrium.h
	tapeEquilibrium.cpp
	tapeEquilibrium.txt
	frogRiverOne.h
	frogRiverOne.cpp
	frogRiverOne.txt
	maxCounters.h
	maxCounters.cpp
	maxCounters.txt
	missingInteger.h
	missingInteger.cpp
	missingInteger.txt
	permCheck.h
	permCheck.cpp
	permCheck.txt

	tester.h
	tester.cpp
	)	

add_executable(${PROJECT_NAME}
	${assessment_sources}
)

#add_executable(assessments main.cpp)
#target_link_libraries(CodingAssessments ${PROJECT_LINK_LIBS} )