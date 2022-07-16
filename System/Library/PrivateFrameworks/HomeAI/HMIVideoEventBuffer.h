//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableArray;

@interface HMIVideoEventBuffer : HMFObject
{
    NSMutableArray *_data;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    long long _maxCapacity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a1d5
- (id)description;	// IMP=0x000000000000a119
@property(readonly) unsigned long long count;
- (id)neighborsOfObject:(id)arg1;	// IMP=0x0000000000009e49
- (id)extractObjectsInTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000009cdd
- (id)objectsInTimeRange:(CDStruct_e83c9415)arg1 includeEnd:(_Bool)arg2;	// IMP=0x0000000000009b05
- (void)addObject:(id)arg1;	// IMP=0x0000000000009925
- (void)removeAllObjects;	// IMP=0x00000000000098d0
- (id)initWithMaxCapacity:(long long)arg1;	// IMP=0x0000000000009843

@end
