//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface AMSMutableSet : NSMutableSet
{
    NSMutableSet *_backingSet;	// 8 = 0x8
    CDUnknownBlockType _hashBlock;	// 16 = 0x10
}

+ (id)setWithHashBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001aeb01
- (void).cxx_destruct;	// IMP=0x00000000001af47f
@property(copy, nonatomic) CDUnknownBlockType hashBlock; // @synthesize hashBlock=_hashBlock;
- (id)_allObjectsFromBackingSet;	// IMP=0x00000000001af295
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000001af154
- (id)objectEnumerator;	// IMP=0x00000000001af104
- (id)member:(id)arg1;	// IMP=0x00000000001aee69
- (id)anyObject;	// IMP=0x00000000001aee0e
- (id)allObjects;	// IMP=0x00000000001aedfc
- (unsigned long long)count;	// IMP=0x00000000001aeddf
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x00000000001aecb5
- (void)addObject:(id)arg1;	// IMP=0x00000000001aebe6
- (id)initWithHashBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001aeb4e

@end

