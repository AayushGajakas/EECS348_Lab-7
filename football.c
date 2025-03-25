int print_combinations_and_count(int points) {
    int count = 0;
    for (int td_8 = 0; td_8 <= points / 8; td_8++) {
        for (int td_7 = 0; td_7 <= points / 7; td_7++) {
            for (int td_6 = 0; td_6 <= points / 6; td_6++) {
                for (int fg = 0; fg <= points / 3; fg++) {
                    for (int safety = 0; safety <= points / 2; safety++) {
                        int total = td_8 * 8 + td_7 * 7 + td_6 * 6 + fg * 3 + safety * 2;
                        if (total == points) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                   td_8, td_7, td_6, fg, safety);
                            count++;
                        }
                    }
                }
            }
        }
    }
    return count;
}
