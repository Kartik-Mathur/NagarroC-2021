// TrailingZerosinNFactorial.cpp

// ALREADY DONE
cin >> n;
// op-> n/5 + n/25 + n/125 + ....
for (int i = 5 ; n / i > 1 ; i *= 5) {
	ans += n / i;
}

cout << ans << endl;
