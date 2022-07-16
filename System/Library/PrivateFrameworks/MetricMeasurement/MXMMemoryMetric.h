//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MXMInstrument, NSNumber, NSString;

@interface MXMMemoryMetric
{
}

+ (id)currentProcess;	// IMP=0x000000000000217c
- (id)_constructProbe;	// IMP=0x0000000000002644
- (_Bool)_shouldConstructProbe;	// IMP=0x000000000000263c
@property(readonly, copy, nonatomic) NSNumber *processIdentifier;
@property(readonly, copy, nonatomic) NSString *processName;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;	// IMP=0x00000000000024b3
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;	// IMP=0x0000000000002462
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000002408
- (id)initWithProcessName:(id)arg1;	// IMP=0x00000000000022d8
- (id)initWithProcessIdentifier:(int)arg1;	// IMP=0x00000000000021af

// Remaining properties
@property(readonly, copy, nonatomic) MXMInstrument *instrument; // @dynamic instrument;

@end

