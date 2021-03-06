//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;

@interface HMObjectMergeCollection : NSObject
{
    NSMutableArray *_currentExistingObjects;	// 8 = 0x8
    NSMutableArray *_currentAddedObjects;	// 16 = 0x10
    NSMutableArray *_currentRemovedObjects;	// 24 = 0x18
    NSMutableArray *_currentModifiedObjects;	// 32 = 0x20
    NSMapTable *_commonObjectsMaps;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005aad7
@property(retain, nonatomic) NSMapTable *commonObjectsMaps; // @synthesize commonObjectsMaps=_commonObjectsMaps;
@property(retain, nonatomic) NSMutableArray *currentModifiedObjects; // @synthesize currentModifiedObjects=_currentModifiedObjects;
@property(retain, nonatomic) NSMutableArray *currentRemovedObjects; // @synthesize currentRemovedObjects=_currentRemovedObjects;
@property(retain, nonatomic) NSMutableArray *currentAddedObjects; // @synthesize currentAddedObjects=_currentAddedObjects;
@property(retain, nonatomic) NSMutableArray *currentExistingObjects; // @synthesize currentExistingObjects=_currentExistingObjects;
- (id)finalMergeCollection;	// IMP=0x000000000005a878
- (void)mergeCommonObjectsNoMergeCount;	// IMP=0x000000000005a73c
- (void)_mergeCommonObjects;	// IMP=0x000000000005a5b4
- (void)_enumerateObjectRemoveWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a3d4
- (void)_enumerateObjectAdditionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a1f4
- (void)_replaceAddedObjectsWithObjectsFromArray:(id)arg1;	// IMP=0x0000000000059fa8
@property(readonly, nonatomic) NSArray *modifiedObjects;
@property(readonly, nonatomic) NSArray *removedObjects;
@property(readonly, nonatomic) NSArray *addedObjects;
@property(readonly, nonatomic) unsigned long long modifiedCount;
@property(readonly, nonatomic, getter=isModified) _Bool modified;
@property(readonly, nonatomic) NSArray *existingObjects;
- (id)initWithExistingObjects:(id)arg1 newObjects:(id)arg2;	// IMP=0x0000000000059b11
- (id)init;	// IMP=0x0000000000059b03

@end

