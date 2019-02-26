cmake_minimum_required( VERSION 2.6 )

PROJECT( Rational CXX )

set(libsrc
	MyMakefileWorkHere.hxx
	Fun.hxx
	Rational.hxx
	Rational.cxx
	Fun.cxx
	)

add_library( lib ${libsrc} )

set( src MyMakefileWorkHere.cxx )

add_executable( Rational ${src} )

target_link_libraries( Rational lib )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall -DLIB_TEST")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -DLIB_TEST")



