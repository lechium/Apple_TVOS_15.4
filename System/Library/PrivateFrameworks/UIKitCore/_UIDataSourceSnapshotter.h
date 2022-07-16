//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UIDataSourceSnapshotTranslating-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshotTranslating>
{
    struct vector<_NSRange, std::allocator<_NSRange>> _sectionRanges;	// 8 = 0x8
}

+ (id)snapshotterForSnapshot:(id)arg1;	// IMP=0x000000000036fb86
+ (id)snapshotterForSectionCountsProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000000036fb29
+ (id)snapshotterForDataSourceBackedView:(id)arg1;	// IMP=0x000000000036facc
- (id).cxx_construct;	// IMP=0x0000000000371084
- (void).cxx_destruct;	// IMP=0x0000000000371068
- (void)_resetToStateOfSnapshotter:(id)arg1;	// IMP=0x0000000000370f89
- (void)_recomputeRangeLocations;	// IMP=0x0000000000370f64
- (_Bool)_insertSection:(long long)arg1 withInitialCount:(long long)arg2;	// IMP=0x0000000000370baf
- (_Bool)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2;	// IMP=0x0000000000370b6d
- (_Bool)_incrementSectionCount:(long long)arg1;	// IMP=0x0000000000370b56
- (_Bool)_deleteAllSections;	// IMP=0x0000000000370b46
- (_Bool)_deleteSection:(long long)arg1;	// IMP=0x0000000000370ace
- (_Bool)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2;	// IMP=0x0000000000370a89
- (_Bool)_decrementSectionCount:(long long)arg1;	// IMP=0x0000000000370a72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000370a19
- (id)snapshot;	// IMP=0x00000000003709ff
- (id)indexPathForAppendingInsertInSection:(long long)arg1;	// IMP=0x000000000037098c
- (_Bool)indexPathIsSectionAppendingInsert:(id)arg1;	// IMP=0x00000000003708da
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000370696
- (long long)sectionForGlobalIndex:(long long)arg1;	// IMP=0x0000000000370658
- (struct _NSRange)rangeForSection:(long long)arg1;	// IMP=0x0000000000370623
- (long long)globalIndexForIndexPath:(id)arg1;	// IMP=0x000000000037055e
- (id)indexPathForGlobalIndex:(long long)arg1;	// IMP=0x00000000003704ec
- (long long)numberOfItemsBeforeSection:(long long)arg1;	// IMP=0x00000000003704c6
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000037049f
- (long long)numberOfSections;	// IMP=0x000000000037048d
- (long long)numberOfItems;	// IMP=0x000000000037046e
@property(readonly, copy) NSString *description;
- (id)initWithSectionCountsProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000000037025a
- (id)initWithDataSourceBackedView:(id)arg1;	// IMP=0x000000000036ffd6
- (id)initWithSectionCounts:(id)arg1;	// IMP=0x000000000036fcc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

