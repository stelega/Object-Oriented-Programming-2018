cmake_minimum_required( VERSION 2.6 )

PROJECT( Magiel CXX )

set(libsrc
	Main.h
	Koszula.h
	Spodnie.h
	Ubranie.h
	Ubranie.cpp
	Zelazko.h
	Zelazko.cpp
	)

add_library( lib ${libsrc} )

set( src Main.cpp )

add_executable( Magiel ${src} )

target_link_libraries( Magiel lib )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall -DLIB_TEST")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -DLIB_TEST")


