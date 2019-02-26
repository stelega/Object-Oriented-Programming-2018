cmake_minimum_required( VERSION 2.6 )

PROJECT( wynik CXX )

set(libsrc
	Point2D.h
	Point2D.cpp
	Point2DAverage.h
	Point2DAverage.cpp

	)

add_library( lib ${libsrc} )

set( src main.cpp )

add_executable( wynik ${src} )

target_link_libraries( wynik lib )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall -DLIB_TEST")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -DLIB_TEST")


