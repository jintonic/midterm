{
	const int n = 13;
	int scores[n] = {-39, -97, -111, -91, -58, -120, -96, -86, -74, -79, -68, -66, -90};

	TH1I h1("h1","midterm score distribution;score;entries",5,-150,0);
	for (int i=0; i<n; i++) {
		h1.Fill(scores[i]);
	}
	h1.Draw();

	gPad->Print("midterm.pdf");
}
