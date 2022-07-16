//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVPeriodicTimebaseObserver
{
    CDStruct_1b6d18a9 _intervalRequested;	// 68 = 0x44
    CDStruct_1b6d18a9 _lastIntervalUsed;	// 92 = 0x5c
    CDStruct_1b6d18a9 _lastPeriodicFireTime;	// 116 = 0x74
    CDStruct_1b6d18a9 _lastNonperiodicFireTime;	// 140 = 0x8c
    CDStruct_1b6d18a9 _lastStopTime;	// 164 = 0xa4
    unsigned int _sequenceNum;	// 188 = 0xbc
    CDUnknownBlockType _block;	// 192 = 0xc0
}

- (void)_handleTimeDiscontinuity;	// IMP=0x0000000000012d67
- (void)_resetNextFireTime;	// IMP=0x00000000000129de
- (void)_effectiveRateChanged;	// IMP=0x0000000000012850
- (void)_fireBlockForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000012835
- (void)dealloc;	// IMP=0x00000000000127f3
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 interval:(CDStruct_1b6d18a9)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012305

@end

