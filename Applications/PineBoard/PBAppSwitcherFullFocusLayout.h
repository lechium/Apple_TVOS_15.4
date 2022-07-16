//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, NSIndexPath;

@interface PBAppSwitcherFullFocusLayout : UICollectionViewLayout
{
    NSIndexPath *_originIndexPath;	// 8 = 0x8
    NSDictionary *_computedAttributes;	// 16 = 0x10
    struct CGSize _focusableCellSize;	// 24 = 0x18
}

+ (Class)layoutAttributesClass;	// IMP=0x0040000000122380
- (void).cxx_destruct;	// IMP=0x0020000000123230
@property(readonly, nonatomic) struct CGSize focusableCellSize; // @synthesize focusableCellSize=_focusableCellSize;
@property(copy, nonatomic) NSDictionary *computedAttributes; // @synthesize computedAttributes=_computedAttributes;
@property(copy, nonatomic) NSIndexPath *originIndexPath; // @synthesize originIndexPath=_originIndexPath;
- (void)prepareLayout;	// IMP=0x00100000001228e0
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000122860
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0010000000122820
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x0010000000122650
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x00100000001225e0
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00100000001225c0
- (struct CGSize)collectionViewContentSize;	// IMP=0x0010000000122460
- (id)init;	// IMP=0x0010000000122280

@end
