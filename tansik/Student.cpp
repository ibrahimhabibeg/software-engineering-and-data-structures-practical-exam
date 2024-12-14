#include <string>
#include <utility>
#include "Program.cpp"

using namespace std;

class Student {
private:
    string name;
    double arabicGrade{};
    double englishGrade{};
    double mathGrade{};
    double scienceGrade{};

    bool (*comparator)(Program *, Program *){};

    Program *program{};

public:
    Student() = default;

    Student(string name, double arabicGrade, double englishGrade, double mathGrade, double scienceGrade,
            bool (*comparator)(Program *, Program *)) {
        this->name = std::move(name);
        this->arabicGrade = arabicGrade;
        this->englishGrade = englishGrade;
        this->mathGrade = mathGrade;
        this->scienceGrade = scienceGrade;
        this->comparator = comparator;
    }

    string getName() {
        return name;
    }

    [[nodiscard]] double getArabicGrade() const {
        return arabicGrade;
    }

    [[nodiscard]] double getEnglishGrade() const {
        return englishGrade;
    }

    [[nodiscard]] double getMathGrade() const {
        return mathGrade;
    }

    [[nodiscard]] double getScienceGrade() const {
        return scienceGrade;
    }

    bool (*getComparator())(Program *, Program *) {
        return comparator;
    }

    Program* getProgram() {
        return program;
    }

    void setName(string name) {
        this->name = std::move(name);
    }

    void setArabicGrade(double arabicGrade) {
        this->arabicGrade = arabicGrade;
    }

    void setEnglishGrade(double englishGrade) {
        this->englishGrade = englishGrade;
    }

    void setMathGrade(double mathGrade) {
        this->mathGrade = mathGrade;
    }

    void setScienceGrade(double scienceGrade) {
        this->scienceGrade = scienceGrade;
    }

    void setComparator(bool (*comparator)(Program *, Program *)) {
        this->comparator = comparator;
    }

    void setProgram(Program *program) {
        this->program = program;
    }
};
