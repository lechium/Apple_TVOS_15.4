//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSMapTable, NSUUID, UICollectionView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSectionFocusGuideController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    NSMapTable *_focusGuideFromSectionMap;	// 16 = 0x10
    NSMapTable *_focusGuideToSectionMap;	// 24 = 0x18
    NSUUID *_lastUpdateIdentifier;	// 32 = 0x20
    NSIndexPath *_focusedIndexPath;	// 40 = 0x28
    long long _pivotSection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000753db1
@property(nonatomic) long long pivotSection; // @synthesize pivotSection=_pivotSection;
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(retain, nonatomic) NSUUID *lastUpdateIdentifier; // @synthesize lastUpdateIdentifier=_lastUpdateIdentifier;
@property(retain, nonatomic) NSMapTable *focusGuideToSectionMap; // @synthesize focusGuideToSectionMap=_focusGuideToSectionMap;
@property(retain, nonatomic) NSMapTable *focusGuideFromSectionMap; // @synthesize focusGuideFromSectionMap=_focusGuideFromSectionMap;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)_focusGuides;	// IMP=0x0000000000753c85
- (struct CGRect)_sectionEndFrameForSection:(long long)arg1 layout:(id)arg2;	// IMP=0x00000000007538da
- (struct CGRect)_sectionFrameForSection:(long long)arg1 layout:(id)arg2;	// IMP=0x00000000007537c8
- (void)_layoutSectionFocusGuide:(id)arg1 forSection:(long long)arg2 withFrame:(struct CGRect)arg3;	// IMP=0x0000000000753545
- (void)_layoutSectionFocusGuide:(id)arg1 forSection:(long long)arg2 inLayout:(id)arg3;	// IMP=0x00000000007534c1
- (void)_removeSectionFocusGuidesForSection:(long long)arg1;	// IMP=0x000000000075324c
- (void)_updateSectionEndFocusGuideForSection:(long long)arg1 inPackage:(id)arg2 layout:(id)arg3;	// IMP=0x0000000000753050
- (id)_createOrUpdateSectionFocusGuidePackageForSection:(long long)arg1;	// IMP=0x0000000000752ba9
- (id)_sectionFocusGuidePackageForSection:(long long)arg1;	// IMP=0x0000000000752b0f
- (id)_sectionsToLoad;	// IMP=0x0000000000752912
- (void)_updatePivotSection;	// IMP=0x0000000000752677
- (void)cleanupSectionFocusGuides;	// IMP=0x000000000075246f
- (void)updateFocusedIndexPath:(id)arg1;	// IMP=0x00000000007523f8
- (void)reloadSectionFocusGuides;	// IMP=0x00000000007521ca
- (void)performLayout;	// IMP=0x0000000000751dee
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0000000000751d1b

@end
