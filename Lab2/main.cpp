#include <iostream>
#include "ConfigParser.h"
#include "factory/Creator.h"
#include "factory/SortCreator.h"
#include "factory/DumpCreator.h"
#include "factory/GrepCreator.h"
#include "factory/ReaderCreator.h"
#include "factory/WriterCreator.h"
#include "factory/ReplaceCreator.h"
#include "execeptions/WrongNumberOfArgsException.h"


int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Нет имени конфигурационного файла" << std::endl;
        return 0;
    }

    ConfigParser config(argv[1]);

    std::map<std::string, Creator *> factory_map;

    // Задаем соответствие имени блока и Creator'а, который его создает
    factory_map["readfile"] = new ReaderCreator();
    factory_map["sort"] = new SortCreator();
    factory_map["grep"] = new GrepCreator();
    factory_map["replace"] = new ReplaceCreator();
    factory_map["dump"] = new DumpCreator();
    factory_map["writefile"] = new WriterCreator();

    // Получаем посльдовательность исполнения блоков
    auto flow = config.get_block_flow();
    std::list<std::string> text;

    for (unsigned int block_number: flow) {
        // По номеру блока получаем информацию о нем
        const auto &block_info = config.get_block_info(block_number);

        try {
            // Получаем нужного Creator'а по имени блока и создаем блок
            auto &block = factory_map[block_info.first]->getWorker();

            // Преобразовываем текст
            text = block.execute(text, block_info.second);
        }
        catch (WrongNumberOfArgsException &e) {
            std::cout << e.what() << std::endl;
            break;
        }
    }

    // В конце удаляем всех Creator'ов
    for (const auto &a: factory_map) {
        delete a.second;
    }

    return 0;
}
