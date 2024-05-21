struct Eratosthenes {
    vector<bool>prime;

    Eratosthenes(ll N) : prime(N + 1, true) {
        prime[0] = prime[1] = false;
        for (ll i = 2; i <= N; i++) {
            if (!prime[i]) continue;
            ll tmp = 2 * i;
            while (tmp <= N) {
                prime[tmp] = false;
                tmp += i;
            }
        }
    }

    ll count(ll limit) { //[1, limit)
        assert(limit <= (ll)prime.size());
        ll sum = 0;
        for (ll i = 0; i < limit; i++) {
            sum += prime[i];
        }
        return sum;
    }
};
