cmake_minimum_required (VERSION 3.8)

#cmake_minimum_required (VERSION 3.22.0)
set(PROJECT_NAME RaceSimCPCMake)
project (${PROJECT_NAME})
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) 
set(LIBS_CPP AirRace.cpp 
Boots.cpp 
Broomstick.cpp 
Camel.cpp 
Eagle.cpp 
FastC.cpp 
HorseMan.cpp 
MagicCarpet.cpp 
MixRace.cpp 
Race.cpp 
)
set(LIBS_HEADERS AirRace.h
Boots.h 
Broomstick.h 
Camel.h 
Eagle.h 
FastC.h 
HorseMan.h
MagicCarpet.h
MixRace.h 
Race.h
)

add_library(MixRace SHARED ${LIBS_CPP} ${LIBS_HEADERS})

add_executable (${PROJECT_NAME} RaceSimCPCMake.cpp)
target_link_libraries(${PROJECT_NAME} MixRace)
