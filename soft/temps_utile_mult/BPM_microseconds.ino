
 // ? generate in set-up / put into RAM so min/max values are always ok.

const uint32_t BPM_microseconds_4th[] = { 
7500000,
6666667,
6000000,
5454546,
5000000,
4615385,
4285715,
4000000,
3750000,
3529412,
3333333,
3157895,
3000000,
2857143,
2727273,
2608696,
2500000,
2400000,
2307692,
2222222,
2142857,
2068966,
2000000,
1935484,
1875000,
1818182,
1764706,
1714286,
1666667,
1621622,
1578947,
1538462,
1500000,
1463415,
1428571,
1395349,
1363636,
1333333,
1304348,
1276596,
1250000,
1224490,
1200000,
1176471,
1153846,
1132076,
1111111,
1090909,
1071429,
1052632,
1034483,
1016949,
1000000,
983607,
967742,
952381,
937500,
923077,
909091,
895522,
882353,
869565,
857143,
845070,
833333,
821918,
810811,
800000,
789474,
779221,
769231,
759494,
750000,
740741,
731707,
722892,
714286,
705882,
697674,
689655,
681818,
674157,
666667,
659341,
652174,
645161,
638298,
631579,
625000,
618557,
612245,
606061,
600000,
594059,
588235,
582524,
576923,
571429,
566038,
560748,
555556,
550459,
545455,
540541,
535714,
530973,
526316,
521739,
517241,
512821,
508475,
504202,
500000,
495868,
491803,
487805,
483871,
480000,
476190,
472441,
468750,
465116,
461538,
458015,
454545,
451128,
447761,
444444,
441176,
437956,
434783,
431655,
428571,
425532,
422535,
419580,
416667,
413793,
410959,
408163,
405405,
402685,
400000,
397351,
394737,
392157,
389610,
387097,
384615,
382166,
379747,
377359,
375000,
372671,
370370,
368098,
365854,
363636,
361446,
359281,
357143,
355030,
352941,
350877,
348837,
346821,
344828,
342857,
340909,
338983,
337079,
335196,
333333,
331492,
329670,
327869,
326087,
324324,
322581,
320856,
319149,
317460,
315789,
314136,
312500,
310881,
309278,
307692,
306122,
304569,
303030,
301508,
300000,
298507,
297030,
295567,
294118,
292683,
291262,
289855,
288462,
287081,
285714,
284360,
283019,
281690,
280374,
279070,
277778,
276498,
275229,
273973,
272727,
271493,
270270,
269058,
267857,
266667,
265487,
264317,
263158,
262009,
260870,
259740,
258621,
257511,
256410,
255319,
254237,
253165,
252101,
251046,
250000,
248963,
247934,
246914,
245902,
244898,
243902,
242915,
241935,
240964,
240000,
239044,
238095,
237154,
236220,
235294,
234375,
233463,
232558,
231660,
230769,
229885,
229008,
228137,
227273,
226415,
225564,
224719,
223881,
223048,
222222,
221402,
220588,
219780,
218978,
218182,
217391,
216607,
215827,
215054,
214286,
213523,
212766,
212014,
211268,
210526,
209790,
209059,
208333,
207612,
206897,
206186,
205479,
204778,
204082,
203390,
202703,
202020,
201342,
200669,
200000,
199336,
198676,
198020,
197368,
196721,
196078,
195440,
194805,
194175,
193548,
192926,
192308,
191693,
191083,
190476,
189873,
189274,
188679,
188088,
187500
};

const uint32_t BPM_microseconds_8th[] = {
3750000,
3333333,
3000000,
2727273,
2500000,
2307692,
2142857,
2000000,
1875000,
1764706,
1666667,
1578947,
1500000,
1428571,
1363636,
1304348,
1250000,
1200000,
1153846,
1111111,
1071429,
1034483,
1000000,
967742,
937500,
909091,
882353,
857143,
833333,
810811,
789474,
769231,
750000,
731707,
714286,
697674,
681818,
666667,
652174,
638298,
625000,
612245,
600000,
588235,
576923,
566038,
555556,
545455,
535714,
526316,
517241,
508475,
500000,
491803,
483871,
476190,
468750,
461538,
454545,
447761,
441176,
434783,
428571,
422535,
416667,
410959,
405405,
400000,
394737,
389610,
384615,
379747,
375000,
370370,
365854,
361446,
357143,
352941,
348837,
344828,
340909,
337079,
333333,
329670,
326087,
322581,
319149,
315789,
312500,
309278,
306122,
303030,
300000,
297030,
294118,
291262,
288462,
285714,
283019,
280374,
277778,
275229,
272727,
270270,
267857,
265487,
263158,
260870,
258621,
256410,
254237,
252101,
250000,
247934,
245902,
243902,
241935,
240000,
238095,
236220,
234375,
232558,
230769,
229008,
227273,
225564,
223881,
222222,
220588,
218978,
217391,
215827,
214286,
212766,
211268,
209790,
208333,
206897,
205479,
204082,
202703,
201342,
200000,
198676,
197368,
196078,
194805,
193548,
192308,
191083,
189873,
188679,
187500,
186335,
185185,
184049,
182927,
181818,
180723,
179641,
178571,
177515,
176471,
175439,
174419,
173410,
172414,
171429,
170455,
169492,
168539,
167598,
166667,
165746,
164835,
163934,
163043,
162162,
161290,
160428,
159574,
158730,
157895,
157068,
156250,
155440,
154639,
153846,
153061,
152284,
151515,
150754,
150000,
149254,
148515,
147783,
147059,
146341,
145631,
144928,
144231,
143541,
142857,
142180,
141509,
140845,
140187,
139535,
138889,
138249,
137615,
136986,
136364,
135747,
135135,
134529,
133929,
133333,
132743,
132159,
131579,
131004,
130435,
129870,
129310,
128755,
128205,
127660,
127119,
126582,
126050,
125523,
125000,
124481,
123967,
123457,
122951,
122449,
121951,
121457,
120968,
120482,
120000,
119522,
119048,
118577,
118110,
117647,
117188,
116732,
116279,
115830,
115385,
114943,
114504,
114068,
113636,
113208,
112782,
112360,
111940,
111524,
111111,
110701,
110294,
109890,
109489,
109091,
108696,
108303,
107914,
107527,
107143,
106762,
106383,
106007,
105634,
105263,
104895,
104530,
104167,
103806,
103448,
103093,
102740,
102389,
102041,
101695,
101351,
101010,
100671,
100334,
100000,
99668,
99338,
99010,
98684,
98361,
98039,
97720,
97403,
97087,
96774,
96463,
96154,
95847,
95541,
95238,
94937,
94637,
94340,
94044,
93750
};
 
const uint32_t BPM_microseconds_16th[] = {  
1875000,
1666667,
1500000,
1363636,
1250000,
1153846,
1071429,
1000000,
937500,
882353,
833333,
789474,
750000,
714286,
681818,
652174,
625000,
600000,
576923,
555556,
535714,
517241,
500000,
483871,
468750,
454545,
441176,
428571,
416667,
405405,
394737,
384615,
375000,
365854,
357143,
348837,
340909,
333333,
326087,
319149,
312500,
306122,
300000,
294118,
288462,
283019,
277778,
272727,
267857,
263158,
258621,
254237,
250000,
245902,
241935,
238095,
234375,
230769,
227273,
223881,
220588,
217391,
214286,
211268,
208333,
205479,
202703,
200000,
197368,
194805,
192308,
189873,
187500,
185185,
182927,
180723,
178571,
176471,
174419,
172414,
170455,
168539,
166667,
164835,
163043,
161290,
159574,
157895,
156250,
154639,
153061,
151515,
150000,
148515,
147059,
145631,
144231,
142857,
141509,
140187,
138889,
137615,
136364,
135135,
133929,
132743,
131579,
130435,
129310,
128205,
127119,
126050,
125000,
123967,
122951,
121951,
120968,
120000,
119048,
118110,
117188,
116279,
115385,
114504,
113636,
112782,
111940,
111111,
110294,
109489,
108696,
107914,
107143,
106383,
105634,
104895,
104167,
103448,
102740,
102041,
101351,
100671,
100000,
99338,
98684,
98039,
97403,
96774,
96154,
95541,
94937,
94340,
93750,
93168,
92593,
92025,
91463,
90909,
90361,
89820,
89286,
88757,
88235,
87719,
87209,
86705,
86207,
85714,
85227,
84746,
84270,
83799,
83333,
82873,
82418,
81967,
81522,
81081,
80645,
80214,
79787,
79365,
78947,
78534,
78125,
77720,
77320,
76923,
76531,
76142,
75758,
75377,
75000,
74627,
74257,
73892,
73529,
73171,
72816,
72464,
72115,
71770,
71429,
71090,
70755,
70423,
70093,
69767,
69444,
69124,
68807,
68493,
68182,
67873,
67568,
67265,
66964,
66667,
66372,
66079,
65789,
65502,
65217,
64935,
64655,
64378,
64103,
63830,
63559,
63291,
63025,
62762,
62500,
62241,
61983,
61728,
61475,
61224,
60976,
60729,
60484,
60241,
60000,
59761,
59524,
59289,
59055,
58824,
58594,
58366,
58140,
57915,
57692,
57471,
57252,
57034,
56818,
56604,
56391,
56180,
55970,
55762,
55556,
55351,
55147,
54945,
54745,
54545,
54348,
54152,
53957,
53763,
53571,
53381,
53191,
53004,
52817,
52632,
52448,
52265,
52083,
51903,
51724,
51546,
51370,
51195,
51020,
50847,
50676,
50505,
50336,
50167,
50000,
49834,
49669,
49505,
49342,
49180,
49020,
48860,
48701,
48544,
48387,
48232,
48077,
47923,
47771,
47619,
47468,
47319,
47170,
47022,
46875
};