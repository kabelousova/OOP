
#include <fstream>
#include "WriterWorker.h"
#include "../execeptions/WrongNumberOfArgsException.h"

std::list<std::string> WriterWorker::execute(std::list<std::string> &text, const std::list<std::string> &params) {
    if (params.empty())
        throw WrongNumberOfArgsException("Cannot to execute WriterWorker. Should 1 argument, get 0.");

    std::string file_name = *params.begin();
    std::ofstream out(file_name);

    for (const auto &word: text) {
        out.write(&word[0], word.size());
        out.write("\n", 1);
    }

    out.close();

    return {};
}
