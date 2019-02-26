cmake_minimum_required( VERSION 2.6 )

PROJECT( wynik CXX )

set(libsrc
	Main.h
	Rational.h
	Rational.cpp
	Complex.h
	Complex.cpp
	)

add_library( lib ${libsrc} )

set( src Main.cpp )

add_executable( wynik ${src} )

target_link_libraries( wynik lib )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall -DLIB_TEST")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -DLIB_TEST")


