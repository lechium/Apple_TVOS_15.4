//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKDistributedTimestampStateVectorRemovalsMap : NSObject
{
    struct RangeDataVector<unsigned long, unsigned long, id, 0U, std::less<id>> rangeMap;	// 8 = 0x8
    struct vector<unsigned int, std::allocator<unsigned int>> workingIndexArray;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000000d13e8
- (void).cxx_destruct;	// IMP=0x00000000000d137c
- (void)sort;	// IMP=0x00000000000d1274
- (unsigned long long)addObjectsAtIndex:(unsigned long long)arg1 toSet:(id)arg2;	// IMP=0x00000000000d117d
- (void)addIndexesInRange:(struct _NSRange)arg1 withObject:(id)arg2;	// IMP=0x00000000000d0f69

@end
