template <ll mod>
struct modint {
	ll x;
	modint() : x(0) {}

	modint(ll y) : x(y >= 0 ? y % mod : (mod - (-y) % mod) % mod) {}

	modint &operator+=(const modint &p) {
		if ((x += p.x) >= mod) {
			x -= mod;
		}
		return *this;
	}
	modint &operator-=(const modint &p) {
		if ((x += mod - p.x) >= mod) {
			x -= mod;
		}
		return *this;
	}
	modint &operator*=(const modint &p) {
		x = (ll)(1ll * x * p.x % mod);
		return *this;
	}
	modint &operator/=(const modint &p) {
		*this *= p.inverse();
		return *this;
	}

	modint operator-() const { return modint(-x); }
	modint operator+(const modint &p) const { return modint(*this) += p; }
	modint operator-(const modint &p) const { return modint(*this) -= p; }
	modint operator*(const modint &p) const { return modint(*this) *= p; }
	modint operator/(const modint &p) const { return modint(*this) /= p; }
	bool operator==(const modint &p) const { return x == p.x; }
	bool operator!=(const modint &p) const { return x != p.x; }
	friend ostream &operator<<(ostream &os, const modint &p) { return os << p.x; }
	friend istream &operator>>(istream &is, modint &a) {
		ll t; is >> t;
		a = modint<mod>(t);
		return (is);
	}

	modint inverse() const {
		int a = x, b = mod, u = 1, v = 0, t;
		while (b > 0) {
			t = a / b;
			swap(a -= t * b, b);
			swap(u -= t * v, v);
		}
		return modint(u);
	}
	modint pow(ll n) const {
		modint ret(1), mul(x);
		while (n > 0) {
			if (n & 1) ret *= mul;
			mul *= mul;
			n >>= 1;
		}
		return ret;
	}

	static ll get_mod() { return mod; }
};