//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBMMutableStoreCollection, NSMutableArray;

@interface HBMLegacyModelReader : NSObject
{
    _Bool _ignoreExistingOrderIDs;	// 8 = 0x8
    HBMMutableStoreCollection *_collection;	// 16 = 0x10
    NSMutableArray *_unorderedLevels;	// 24 = 0x18
}

+ (id)indexSetForUnarrangedItemsInArray:(id)arg1;	// IMP=0x0000000000007a45
+ (id)dataSourceStoreCollectionForRawRootFolder:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000007861
- (void).cxx_destruct;	// IMP=0x0000000000008e6f
@property(readonly, nonatomic) NSMutableArray *unorderedLevels; // @synthesize unorderedLevels=_unorderedLevels;
@property(readonly, nonatomic) HBMMutableStoreCollection *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) _Bool ignoreExistingOrderIDs; // @synthesize ignoreExistingOrderIDs=_ignoreExistingOrderIDs;
- (void)_updateOrderIDsForUnarrangedItemsInArray:(id)arg1 atIndices:(id)arg2 baseOrderID:(double)arg3;	// IMP=0x0000000000008805
- (void)_fixUnorderedLevels;	// IMP=0x0000000000008519
- (id)_addSourceFolder:(id)arg1 orderIDGenerator:(id)arg2;	// IMP=0x0000000000008280
- (id)_addSourceApplication:(id)arg1 withParentItemID:(id)arg2 orderIDGenerator:(id)arg3;	// IMP=0x0000000000008118
- (void)_addItems:(id)arg1 parentItemID:(id)arg2 orderIDGenerator:(id)arg3;	// IMP=0x0000000000007dd0
- (void)addItems:(id)arg1;	// IMP=0x00000000000079c2
- (id)initWithCapacity:(unsigned long long)arg1 ignoreExistingOrderIDs:(_Bool)arg2;	// IMP=0x000000000000792c

@end

