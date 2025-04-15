 set<int> st(store.begin(), store.end());
        int miss=-1e6;
        for (int i = 1; i <= 2 * n; i++) {
            if (st.find(i) == st.end()) {
                miss = i;
                break;
            }
        }