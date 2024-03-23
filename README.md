##function relation description 
input two int x, y 
output string as bellow 

if x == y return "same"
if 0 < |x - y| <= 3 return "very close"
if 3 < |x - y| <= 5 return "quite close"
if 5 < |x - y| <= 100 return "typical distance"
if 100 < |x - y| <= 1000 return "far"
if 1000 < |x - y| return "very far"

