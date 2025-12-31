// A registrar system demo
// File: main.cpp   Version: 1.0      License: AGPLv3
// Created: Wei Gong open-src@qq.com      2025-12-12
//
// Description:
//     Testing the registrar system

// Change Log:
//     [v1.1] Wei Gong open-src@qq.com   2025-12-12 17:57:41
//         * simulating student course registration, viewing course enrollment lists
//     [v1.2] Wei Gong open-src@qq.com   2025-12-12 18:07:17
//         * simulating view student schedule
import registrar;
import std;

int main()
{
    // alias for static function Registrar::singleton
    auto sys = &Registrar::singleton;

    sys().initialize();

    // Simulate some students erolls in some courses
    sys().studentEnrollsInCourse("S001", "CS101");
    sys().studentEnrollsInCourse("S001", "CS201");
    sys().studentEnrollsInCourse("S001", "MATH101");

    sys().studentEnrollsInCourse("S002", "CS101");
    sys().studentEnrollsInCourse("S002", "MATH101");

    sys().studentEnrollsInCourse("S003", "CS201");
    sys().studentEnrollsInCourse("S003", "MATH101");


    sys().studentEnrollsInCourse("S004", "CS101");
    sys().studentEnrollsInCourse("S004", "CS201");

    sys().studentEnrollsInCourse("S005", "CS201");

    std::println();

    sys().courseRoster("CS101");
    sys().courseRoster("CS201");
    sys().courseRoster("MATH101");

    sys().studentSchedule("S001");

    sys().studentSchedule("S003");

    return 0;
}
