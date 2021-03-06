//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface PBSystemGestureTable : NSObject
{
    NSMutableDictionary *_entriesByDescriptor;	// 8 = 0x8
    NSMapTable *_descriptorsByGestureRecognizer;	// 16 = 0x10
    NSMapTable *_handlesBySystemGestureDescriptors;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000127da0
@property(readonly, nonatomic) NSMapTable *handlesBySystemGestureDescriptors; // @synthesize handlesBySystemGestureDescriptors=_handlesBySystemGestureDescriptors;
@property(readonly, nonatomic) NSMapTable *descriptorsByGestureRecognizer; // @synthesize descriptorsByGestureRecognizer=_descriptorsByGestureRecognizer;
@property(readonly, nonatomic) NSMutableDictionary *entriesByDescriptor; // @synthesize entriesByDescriptor=_entriesByDescriptor;
- (id)_resultsByEnumeratingEntriesForSystemGestureDescriptor:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000127ac0
- (void)_enumerateEntriesForSystemGestureDescriptor:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001277f0
- (void)_removeEntryForGestureRecognizerDescriptor:(id)arg1;	// IMP=0x0010000000127790
- (id)_entryForGestureRecognizerDescriptor:(id)arg1;	// IMP=0x00100000001276c0
- (id)stateDump;	// IMP=0x0010000000127500
- (id)handleForGestureRecognizer:(id)arg1 withSelectionPolicy:(id)arg2;	// IMP=0x00100000001271e0
- (id)removeHandle:(id)arg1 forSystemGestureDescriptor:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0010000000126e30
- (id)deactivateSystemGestureForDescriptor:(id)arg1;	// IMP=0x0010000000126cb0
- (id)activateSystemGestureForDescriptor:(id)arg1;	// IMP=0x0010000000126b30
- (id)descriptorsForGestureRecognizers:(id)arg1 withSelectionPolicy:(id)arg2;	// IMP=0x0010000000126760
- (void)setGestureRecognizer:(id)arg1 forGestureRecognizerDescriptor:(id)arg2;	// IMP=0x0010000000126650
- (id)existingGestureRecognizerMatchingDescriptor:(id)arg1;	// IMP=0x00100000001265b0
- (void)setInactiveHandle:(id)arg1 forSystemGestureDescriptor:(id)arg2;	// IMP=0x00100000001263f0
- (id)existingHandleForSystemGestureDescriptor:(id)arg1;	// IMP=0x0010000000126380
- (id)gestureRecognizers;	// IMP=0x0010000000126120
- (void)enumerateGestureRecognizersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000125f00
- (id)init;	// IMP=0x0010000000125de0

@end

