//
// Created by 付 强 on 2018/5/19.
//

#ifndef SCAL_LOGFILE_H
#define SCAL_LOGFILE_H

#include <string>

namespace SCAL {
    class LogFile {
    public:
        LogFile() = default;
        ~LogFile() = default;
        int Init(std::string path);
        int Append(int offset, std::string buff);
        int Size();
        int Close();
    private:
        std::string path = "";
    };
}

#endif //SCAL_LOGFILE_H
