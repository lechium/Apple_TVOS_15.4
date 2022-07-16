//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface HBMStoreChangeSet : NSObject
{
    NSDictionary *_updatedItems;	// 8 = 0x8
    NSSet *_removedItemIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005782
@property(readonly, copy, nonatomic) NSSet *removedItemIDs; // @synthesize removedItemIDs=_removedItemIDs;
@property(readonly, copy, nonatomic) NSDictionary *updatedItems; // @synthesize updatedItems=_updatedItems;
- (id)changeSetByAddingChangeSet:(id)arg1;	// IMP=0x000000000000561b
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)init;	// IMP=0x00000000000055c6
- (id)initWithUpdatedItems:(id)arg1 removedItemIDs:(id)arg2;	// IMP=0x00000000000054c3

@end
