//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSectionedLayoutEngineDataSourceSnapshot-Protocol.h>

@class NSArray, NSString;

@interface PXMemoriesFeedDataSource <PXSectionedLayoutEngineDataSourceSnapshot>
{
    NSArray *_entries;	// 8 = 0x8
    struct PXSimpleIndexPath _indexPathForFirstPastMemorySection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000cf94
@property(nonatomic) struct PXSimpleIndexPath indexPathForFirstPastMemorySection; // @synthesize indexPathForFirstPastMemorySection=_indexPathForFirstPastMemorySection;
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) NSString *diagnosticDescription;
- (id)inputForItem:(id)arg1;	// IMP=0x000000000000cc59
- (id)sectionedObjectReferenceForMemoryUUID:(id)arg1;	// IMP=0x000000000000caf6
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x000000000000cabd
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 withHintIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000000c3d5
- (void)_enumerateItemIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c262
- (void)_enumerateSectionIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c0ef
- (void)_enumerateSectionIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000be84
- (struct PXSimpleIndexPath)_firstSectionIndexPath;	// IMP=0x000000000000be17
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000000bc89
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x000000000000bc81
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000000bc08
@property(readonly, nonatomic) long long numberOfSections;
- (id)init;	// IMP=0x000000000000bbd2
- (id)initWithEntries:(id)arg1;	// IMP=0x000000000000bb3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long identifier;
@property(readonly) Class superclass;

@end

