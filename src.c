char* relation(int x, int y) {
    if(x == y) return "same";
    if(x - y <= 3) return "very close";
    if(x - y <= 5) return "quite close";
    if(x - y <= 100) return "typical distance";
    if(x - y <= 1000) return "far";
    return "very far";
}