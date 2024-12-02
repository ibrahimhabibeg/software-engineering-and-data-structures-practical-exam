bool (*mathGradePriority)(Student *, Student *) = [](Student *a, Student *b) {
    return a->getMathGrade() > b->getMathGrade();
};

bool (*scienceGradePriority)(Student *, Student *) = [](Student *a, Student *b) {
    return a->getScienceGrade() > b->getScienceGrade();
};

bool (*arabicGradePriority)(Student *, Student *) = [](Student *a, Student *b) {
    return a->getArabicGrade() > b->getArabicGrade();
};

bool (*englishGradePriority)(Student *, Student *) = [](Student *a, Student *b) {
    return a->getEnglishGrade() > b->getEnglishGrade();
};

bool (*mathAndScienceWeightedPriority)(Student *, Student *) = [](Student *a, Student *b) {
    double aWeight = 0.5 * a->getMathGrade() + 0.5 * a->getScienceGrade();
    double bWeight = 0.5 * b->getMathGrade() + 0.5 * b->getScienceGrade();
    return aWeight > bWeight;
};

map<bool (*)(Student *, Student *), string> programCompartorNames = {
    {mathGradePriority, "Math Grade Priority"},
    {scienceGradePriority, "Science Grade Priority"},
    {arabicGradePriority, "Arabic Grade Priority"},
    {englishGradePriority, "English Grade Priority"},
    {mathAndScienceWeightedPriority, "Math and Science Equal Weighted Priority"}
};