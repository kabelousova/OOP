#include <fstream>
#include "DumpWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"

std::list<std::string> DumpWorker::execute(std::list<std::string> &text, const std::list<std::string> &params) {
    if (params.empty())
        throw WrongNumberOfArgsException("Cannot to execute DumpWorker. Should 1 argument, get 0.");

    std::ofstream out(*params.begin());

    for (const auto &word: text) {
        out.write(&word[0], word.size());
        out.write(" ", 1);
    }

    out.close();

    return text;
}

