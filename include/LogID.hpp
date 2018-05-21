//
// Created by 付 强 on 2018/5/19.
//

#ifndef SCAL_LogID_H
#define SCAL_LogID_H

#include <cstdint>

namespace SCAL {

    struct LogID {
        //Data fields
        int64_t term = 0;
        int64_t index = 0;

        //Customized constructor
        LogID(int64_t term, int64_t index):term(term), index(index) {}

        //Tell compiler that we need these default constructors
        LogID() = default;
        LogID(const LogID& other) = default;
        ~LogID() = default;
        LogID& operator=(const LogID& other) = default;
    };

    //Comparators
    inline bool operator==(const LogID& lhs, const LogID& rhs) {
        return lhs.index == rhs.index && lhs.term == rhs.term;
    }

    inline bool operator!=(const LogID& lhs, const LogID& rhs) {
        return !(lhs == rhs);
    }

    inline bool operator<(const LogID& lhs, const LogID& rhs) {
        if (lhs.term == rhs.term) {
            return lhs.index < rhs.index;
        }
        return lhs.term < rhs.term;
    }

    inline bool operator>(const LogID& lhs, const LogID& rhs) {
        if (lhs.term == rhs.term) {
            return lhs.index > rhs.index;
        }
        return lhs.term > rhs.term;
    }

    inline bool operator<=(const LogID& lhs, const LogID& rhs) {
        return !(lhs > rhs);
    }

    inline bool operator>=(const LogID& lhs, const LogID& rhs) {
        return !(lhs < rhs);
    }

}

#endif //SCAL_LogID_H
