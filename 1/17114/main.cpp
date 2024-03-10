// https://www.acmicpc.net/problem/17114
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;

int	M, N, O, P, Q, R, S, T, U, V, W;

int d_m[22] = {-1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int d_n[22] = {0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int d_o[22] = {0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int d_p[22] = {0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int d_q[22] = {0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int d_r[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int d_s[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
int d_t[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0};
int d_u[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0};
int d_v[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0};
int d_w[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1};

int ans;

queue<tuple<int, int, int, int, int, int, int, int, int, int, int> > que;

void Solve()
{
	//Input
	cin >> M >> N >> O >> P >> Q >> R >> S >> T >> U >> V >> W;
	int arr[W][V][U][T][S][R][Q][P][O][N][M];
	for (int w = 0 ; w < W ; ++w)
		for (int v = 0 ; v < V ; ++v)
			for (int u = 0 ; u < U ; ++u)
				for (int t = 0 ; t < T ; ++t)
					for (int s = 0 ; s < S ; ++s)
						for (int r = 0 ; r < R ; ++r)
							for (int q = 0 ; q < Q ; ++q)
								for (int p = 0 ; p < P ; ++p)
									for (int o = 0 ; o < O ; ++o)
										for (int n = 0 ; n < N ; ++n)
											for (int m = 0 ; m < M ; ++m)
											{
												int input;
												cin >> input;
												arr[w][v][u][t][s][r][q][p][o][n][m] = input;
												if (input == 1)
													que.push(make_tuple(w, v, u, t, s, r, q, p, o, n, m));
											}
	int t_w;
	int t_v;
	int t_u;
	int t_t;
	int t_s;
	int t_r;
	int t_q;
	int t_p;
	int t_o;
	int t_n;
	int t_m;
	//Solve
	while (!que.empty())
	{
		t_w	= get<0>(que.front());
		t_v	= get<1>(que.front());
		t_u	= get<2>(que.front());
		t_t	= get<3>(que.front());
		t_s	= get<4>(que.front());
		t_r	= get<5>(que.front());
		t_q	= get<6>(que.front());
		t_p	= get<7>(que.front());
		t_o	= get<8>(que.front());
		t_n	= get<9>(que.front());
		t_m	= get<10>(que.front());
		que.pop();
		for (int i = 0 ; i < 22 ; ++i)
		{
			int t_dw = t_w + d_w[i];
			int t_dv = t_v + d_v[i];
			int t_du = t_u + d_u[i];
			int t_dt = t_t + d_t[i];
			int t_ds = t_s + d_s[i];
			int t_dr = t_r + d_r[i];
			int t_dq = t_q + d_q[i];
			int t_dp = t_p + d_p[i];
			int t_do = t_o + d_o[i];
			int t_dn = t_n + d_n[i];
			int t_dm = t_m + d_m[i];
			if (	t_dw >= 0 && t_dw < W &&
					t_dv >= 0 && t_dv < V &&
					t_du >= 0 && t_du < U &&
					t_dt >= 0 && t_dt < T &&
					t_ds >= 0 && t_ds < S &&
					t_dr >= 0 && t_dr < R &&
					t_dq >= 0 && t_dq < Q &&
					t_dp >= 0 && t_dp < P &&
					t_do >= 0 && t_do < O &&
					t_dn >= 0 && t_dn < N &&
					t_dm >= 0 && t_dm < M &&
					arr[t_dw][t_dv][t_du][t_dt][t_ds][t_dr][t_dq][t_dp][t_do][t_dn][t_dm] == 0)
			{
				arr[t_dw][t_dv][t_du][t_dt][t_ds][t_dr][t_dq][t_dp][t_do][t_dn][t_dm] = arr[t_w][t_v][t_u][t_t][t_s][t_r][t_q][t_p][t_o][t_n][t_m] + 1;
				que.push({t_dw, t_dv, t_du, t_dt, t_ds, t_dr, t_dq, t_dp, t_do, t_dn, t_dm});
			}
		}
	}
	//Output
	for (int w = 0 ; w < W ; ++w)
		for (int v = 0 ; v < V ; ++v)
			for (int u = 0 ; u < U ; ++u)
				for (int t = 0 ; t < T ; ++t)
					for (int s = 0 ; s < S ; ++s)
						for (int r = 0 ; r < R ; ++r)
							for (int q = 0 ; q < Q ; ++q)
								for (int o = 0 ; o < O ; ++o)
									for (int p = 0 ; p < P ; ++p)
										for (int n = 0 ; n < N ; ++n)
											for (int m = 0 ; m < M ; ++m)
											{
												ans = max(ans, arr[w][v][u][t][s][r][q][p][o][n][m]);
												if (arr[w][v][u][t][s][r][q][p][o][n][m] == 0)
												{
													cout << "-1" << "\n";
													return ;
												}
											}
	cout << ans - 1 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
