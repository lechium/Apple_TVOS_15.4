//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSFastEnumeration-Protocol.h>

@class NSArray, NSIndexSet, _NSOrderedCollectionDifferenceMoves;

@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration>
{
    NSIndexSet *_insertIndexes;	// 8 = 0x8
    NSArray *_insertObjects;	// 16 = 0x10
    NSIndexSet *_removeIndexes;	// 24 = 0x18
    NSArray *_removeObjects;	// 32 = 0x20
    _NSOrderedCollectionDifferenceMoves *_moves;	// 40 = 0x28
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001910f8
- (id)debugDescription;	// IMP=0x0000000000190b4c
- (id)description;	// IMP=0x0000000000190aa3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001909ca
- (unsigned long long)hash;	// IMP=0x000000000019093c
- (id)inverseDifference;	// IMP=0x0000000000190856
- (id)invertedDifference;	// IMP=0x0000000000190844
- (void)_enumerateChangesInDiffOrderWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001906be
- (id)_changeWithType:(long long)arg1 index:(unsigned long long)arg2 object:(id)arg3;	// IMP=0x0000000000190603
- (id)differenceByTransformingChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000190467
@property(readonly) _Bool hasChanges;
@property(readonly) NSArray *removals;
@property(readonly) NSArray *insertions;
- (void)dealloc;	// IMP=0x0000000000190046
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 additionalChanges:(id)arg5;	// IMP=0x000000000018f292
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4;	// IMP=0x000000000018f26c
- (id)initWithChanges:(id)arg1;	// IMP=0x000000000018f049
- (id)init;	// IMP=0x000000000018f030

@end

