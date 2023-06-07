#ifndef SEQ_H
#define SEQ_H
/*
header 2byte
	BBBBBBBB
	BBBBBL__
		BPM*minNote 13bit
		loop 1bit
track
	0 1byte
	commands 1byte
		1LOONNNN
			note=NNNN+(O+(baseMode?1:4))*12;
			length=tick[L];
			play();

		01LTTTTT
			tick[L]=TTTTT;

		001_BVME
			baseMode=B;
			halfVolume=V;
			octPulseMode=M;
			envelope=E;

		00011111~00000010 reserved

		00000001
			break;
0 0 2byte
*/
// const uint8_t famima[]={// 33bytes
// 	20,0,
// 	0,32,64,150,146,137,146,148,98,217,148,150,148,137,67,146,
// 	0,65,140,134,98,209,96,196,137,137,67,134,1,
// 	0,0
// };
const uint8_t yobikomi[]={// 324bytes
	65,132,
	0,35,64,153,156,99,217,155,156,153,156,150,156,97,217,220,153,156,99,217,155,156,153,156,150,156,97,217,220,146,156,146,156,146,156,148,156,100,214,156,146,156,214,156,153,156,103,217,146,156,146,156,146,156,148,156,214,146,156,146,156,146,156,148,156,214,148,156,148,156,148,156,146,156,97,212,220,214,220,217,220,215,220,214,220,212,220,
	0,42,65,172,64,169,98,236,169,236,169,169,97,236,169,98,236,169,236,169,236,169,169,97,236,169,98,236,171,236,171,236,171,171,97,236,171,98,236,171,236,171,236,171,171,97,236,171,98,236,171,236,171,236,171,171,97,236,171,98,236,171,236,171,236,171,171,97,236,171,98,236,169,236,169,236,169,169,97,236,169,98,236,169,236,169,236,169,169,65,172,169,
	0,42,65,172,64,166,98,236,166,236,166,166,97,236,166,98,236,166,236,166,236,166,166,97,236,166,98,236,166,236,166,236,166,166,97,236,166,98,236,166,236,166,236,166,166,97,236,166,98,236,167,236,167,236,167,167,97,236,167,98,236,167,236,167,236,167,167,97,236,167,98,236,164,236,164,236,164,164,97,236,164,98,236,164,236,164,236,164,164,65,172,164,
	0,43,67,162,153,162,153,162,153,98,226,96,217,97,226,225,155,150,155,150,155,150,98,219,96,214,97,219,217,151,146,151,162,151,146,215,210,215,219,153,148,153,148,153,148,225,219,153,1,
	0,0
};
#endif


