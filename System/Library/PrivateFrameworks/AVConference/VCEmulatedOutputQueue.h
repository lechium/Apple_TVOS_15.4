//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCEmulatedOutputQueue
{
    unsigned int _numberOfPacketsInOutputQueue;	// 32 = 0x20
}

- (id)copyPacketFromPop;	// IMP=0x0000000000369b74
@property(readonly, nonatomic) unsigned int numberOfPacketsInOutputQueue; // @synthesize numberOfPacketsInOutputQueue=_numberOfPacketsInOutputQueue;
- (void)connectFrom:(id)arg1;	// IMP=0x0000000000369af5
- (void)runUntilTime:(double)arg1;	// IMP=0x0000000000369aa3

@end

