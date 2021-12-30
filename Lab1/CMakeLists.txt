cmake_minimum_required(VERSION 3.21)
project(Lab1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab1 main.cpp blocks/Worker.h blocks/ReaderWorker.h blocks/ReaderWorker.cpp blocks/WriterWorker.h blocks/WriterWorker.cpp blocks/SortWorker.h blocks/SortWorker.cpp blocks/DumpWorker.h blocks/DumpWorker.cpp blocks/ReplaceWorker.h blocks/ReplaceWorker.cpp blocks/GrepWorker.h blocks/GrepWorker.cpp ConfigParser.h ConfigParser.cpp execeptions/WrongNumberOfArgsException.cpp execeptions/WrongNumberOfArgsException.h factory/Creator.h factory/DumpCreator.cpp factory/DumpCreator.h factory/SortCreator.cpp factory/SortCreator.h factory/GrepCreator.cpp factory/GrepCreator.h factory/ReaderCreator.cpp factory/ReaderCreator.h factory/WriterCreator.cpp factory/WriterCreator.h factory/ReplaceCreator.cpp factory/ReplaceCreator.h execeptions/WrongConfigFileException.cpp execeptions/WrongConfigFileException.h)
