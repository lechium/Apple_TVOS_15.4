//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface PXVisualPositionsChangeDetails : NSObject
{
    long long _countBeforeChanges;	// 8 = 0x8
    long long _anchorIndexBeforeChanges;	// 16 = 0x10
    NSIndexSet *_headerIndexesBeforeChanges;	// 24 = 0x18
    long long _countAfterChanges;	// 32 = 0x20
    long long _anchorIndexAfterChanges;	// 40 = 0x28
    NSIndexSet *_headerIndexesAfterChanges;	// 48 = 0x30
    long long _anchorBodyIndexBeforeChanges;	// 56 = 0x38
    long long _anchorBodyIndexAfterChanges;	// 64 = 0x40
}

+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 reloadAllIncludingAnchor:(_Bool)arg7;	// IMP=0x000000000063c932
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorRemoved:(long long)arg5 indexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7;	// IMP=0x000000000063c884
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorRemoved:(long long)arg4 indexAfterChanges:(long long)arg5;	// IMP=0x000000000063c85a
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 headerIndexesBeforeChanges:(id)arg4 countAfterChanges:(long long)arg5 anchorIndexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7;	// IMP=0x000000000063c7aa
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5;	// IMP=0x000000000063c783
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 anchorFan:(long long)arg7 anchorReload:(long long)arg8;	// IMP=0x000000000063c6d3
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5;	// IMP=0x000000000063c6b7
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5 anchorReload:(long long)arg6;	// IMP=0x000000000063c67d
- (void).cxx_destruct;	// IMP=0x000000000063c655
@property(readonly, nonatomic) long long anchorBodyIndexAfterChanges; // @synthesize anchorBodyIndexAfterChanges=_anchorBodyIndexAfterChanges;
@property(readonly, nonatomic) long long anchorBodyIndexBeforeChanges; // @synthesize anchorBodyIndexBeforeChanges=_anchorBodyIndexBeforeChanges;
@property(readonly, nonatomic) NSIndexSet *headerIndexesAfterChanges; // @synthesize headerIndexesAfterChanges=_headerIndexesAfterChanges;
@property(readonly, nonatomic) long long anchorIndexAfterChanges; // @synthesize anchorIndexAfterChanges=_anchorIndexAfterChanges;
@property(readonly, nonatomic) long long countAfterChanges; // @synthesize countAfterChanges=_countAfterChanges;
@property(readonly, nonatomic) NSIndexSet *headerIndexesBeforeChanges; // @synthesize headerIndexesBeforeChanges=_headerIndexesBeforeChanges;
@property(readonly, nonatomic) long long anchorIndexBeforeChanges; // @synthesize anchorIndexBeforeChanges=_anchorIndexBeforeChanges;
@property(readonly, nonatomic) long long countBeforeChanges; // @synthesize countBeforeChanges=_countBeforeChanges;
- (id)arrayChangeDetailsWithItemsChanged:(_Bool)arg1;	// IMP=0x000000000063c450
- (CDStruct_b8f58034)bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)arg1;	// IMP=0x000000000063c3a9
- (CDStruct_b8f58034)bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)arg1;	// IMP=0x000000000063c302
- (CDStruct_b8f58034)visualPositionAfterRevertingChangesFromIndex:(long long)arg1;	// IMP=0x000000000063c13d
- (CDStruct_b8f58034)visualPositionAfterApplyingChangesToIndex:(long long)arg1;	// IMP=0x000000000063bf78
- (id)init;	// IMP=0x000000000063bf4c
- (id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6;	// IMP=0x000000000063be2f

@end

