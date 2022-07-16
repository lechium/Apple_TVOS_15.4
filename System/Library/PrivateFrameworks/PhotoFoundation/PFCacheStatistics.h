//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFCacheStatistics : NSObject
{
    unsigned long long _hits;	// 8 = 0x8
    unsigned long long _misses;	// 16 = 0x10
    unsigned long long _evictions;	// 24 = 0x18
}

@property(readonly) unsigned long long evictions; // @synthesize evictions=_evictions;
@property(readonly) unsigned long long misses; // @synthesize misses=_misses;
@property(readonly) unsigned long long hits; // @synthesize hits=_hits;
- (id)description;	// IMP=0x00000000000291b9
- (void)accumulate:(id)arg1;	// IMP=0x000000000002919b
- (void)recordEvictions:(unsigned long long)arg1;	// IMP=0x0000000000029191
- (void)recordMiss;	// IMP=0x0000000000029187
- (void)recordHit;	// IMP=0x000000000002917d

@end

