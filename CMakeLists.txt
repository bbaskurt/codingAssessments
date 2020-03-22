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
	countDiv.h
	countDiv.cpp
	countDiv.txt
	passingCars.h
	passingCars.cpp
	passingCars.txt
	minAvgTwoSlice.h
	minAvgTwoSlice.cpp
	minAvgTwoSlice.txt
	genomicRangeQuery.h
	genomicRangeQuery.cpp
	genomicRangeQuery.txt
	distinct.h
	distinct.cpp
	distinct.txt
	maxProductOfThree.h
	maxProductOfThree.cpp
	maxProductOfThree.txt
	numberOfDiscIntersections.h
	numberOfDiscIntersections.cpp
	numberOfDiscIntersections.txt
	triangle.h
	triangle.cpp
	triangle.txt
	brackets.h
	brackets.cpp
	brackets.txt
	fish.h
	fish.cpp
	fish.txt
	nesting.h
	nesting.cpp
	nesting.txt
	stoneWall.h
	stoneWall.cpp
	stoneWall.txt


	tester.h
	tester.cpp
	)	

add_executable(${PROJECT_NAME}
	${assessment_sources}
)

#add_executable(assessments main.cpp)
#target_link_libraries(CodingAssessments ${PROJECT_LINK_LIBS} )