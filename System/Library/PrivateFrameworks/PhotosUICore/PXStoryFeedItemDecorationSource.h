//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGSelectionDecorationSource-Protocol.h>

@class NSString, PXGLayout, PXSectionedDataSource, PXSelectionSnapshot, PXStoryFeedSectionContentLayout;

@interface PXStoryFeedItemDecorationSource : NSObject <PXGSelectionDecorationSource>
{
    PXGLayout *_decoratedLayout;	// 8 = 0x8
    PXSectionedDataSource *_dataSource;	// 16 = 0x10
    long long _section;	// 24 = 0x18
    PXSelectionSnapshot *_selectionSnapshot;	// 32 = 0x20
    PXStoryFeedSectionContentLayout *_decoratedSectionContentLayout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003e683d
@property(readonly, nonatomic) PXStoryFeedSectionContentLayout *decoratedSectionContentLayout; // @synthesize decoratedSectionContentLayout=_decoratedSectionContentLayout;
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
@property(readonly, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak PXGLayout *decoratedLayout; // @synthesize decoratedLayout=_decoratedLayout;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000003e67ef
- (id)selectedSpriteIndexesInLayout:(id)arg1;	// IMP=0x00000000003e64f4
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1;	// IMP=0x00000000003e64ec
- (long long)selectionDecorationStyleInLayout:(id)arg1;	// IMP=0x00000000003e64e1
- (void)setDataSource:(id)arg1 section:(long long)arg2;	// IMP=0x00000000003e63d6
- (id)_spriteIndexesForItems:(id)arg1 inLayout:(id)arg2;	// IMP=0x00000000003e62b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

