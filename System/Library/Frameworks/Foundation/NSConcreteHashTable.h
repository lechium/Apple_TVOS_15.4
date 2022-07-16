//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSConcreteHashTable <NSSecureCoding>
{
    struct NSSlice slice;	// 8 = 0x8
    unsigned long long count;	// 120 = 0x78
    unsigned long long capacity;	// 128 = 0x80
    unsigned long long options;	// 136 = 0x88
    unsigned long long mutations;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000073f79
- (id)objectEnumerator;	// IMP=0x0000000000075533
- (id)description;	// IMP=0x0000000000075458
- (void)dealloc;	// IMP=0x00000000000753b4
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;	// IMP=0x0000000000075328
- (id)allObjects;	// IMP=0x000000000007520c
- (void)removeAllItems;	// IMP=0x0000000000075170
- (void)removeItem:(const void *)arg1;	// IMP=0x0000000000075094
- (void)insertKnownAbsentItem:(const void *)arg1;	// IMP=0x0000000000074f8d
- (void)addObject:(id)arg1;	// IMP=0x0000000000074ed8
- (void)insertItem:(const void *)arg1;	// IMP=0x0000000000074e23
- (void *)getItem:(const void *)arg1;	// IMP=0x0000000000074dcc
- (void)rehash;	// IMP=0x0000000000074d50
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2;	// IMP=0x0000000000074cf6
- (void)hashGrow;	// IMP=0x0000000000074bee
- (unsigned long long)rehashAround:(unsigned long long)arg1;	// IMP=0x0000000000074865
- (void)raiseCountUnderflowException;	// IMP=0x0000000000074814
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000074709
- (unsigned long long)hash;	// IMP=0x00000000000746e7
- (unsigned long long)count;	// IMP=0x00000000000746d6
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000074633
- (id)pointerFunctions;	// IMP=0x00000000000745b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007427c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073f81
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000073dfc
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000073cc0
- (id)copy;	// IMP=0x0000000000073aff
- (id)init;	// IMP=0x0000000000073ae6

@end

