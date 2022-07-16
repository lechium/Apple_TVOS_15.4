//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (IntentsFoundation)
+ (id)if_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x000000000000c236
+ (id)_inf_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x000000000000c224
- (id)_if_firstObjectMatchingPredicate:(id)arg1;	// IMP=0x000000000000b739
- (void)if_enumerateAsynchronouslyInSequenceOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b57b
- (void)if_enumerateAsynchronouslyInSequence:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b4c5
- (void)if_enumerateAsynchronouslyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b020
- (void)if_enumerateAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b006
- (id)if_objectsNotOfClass:(Class)arg1;	// IMP=0x000000000000afa8
- (id)if_objectsOfClass:(Class)arg1;	// IMP=0x000000000000af4a
- (id)if_firstObjectWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000000aed8
- (id)if_firstObjectWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000ae66
- (id)if_firstObjectWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000adf4
- (id)if_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ac9e
- (id)if_objectsWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000000ac2c
- (id)if_objectsWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000abba
- (id)if_objectsWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000ab48
- (id)if_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a984
- (id)_inf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a972
- (id)if_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x000000000000a90c
- (id)if_arrayByRemovingObject:(id)arg1;	// IMP=0x000000000000a8a6
- (id)if_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;	// IMP=0x000000000000a7b2
- (void)if_flatMapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a7a3
- (void)if_flatMapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a78c
- (id)if_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a571
- (id)_inf_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a55f
- (id)if_compactMapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a552
- (id)if_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a545
- (void)if_mapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a539
- (void)if_mapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a525
- (id)if_mapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a494
- (id)if_map:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a403
@end
