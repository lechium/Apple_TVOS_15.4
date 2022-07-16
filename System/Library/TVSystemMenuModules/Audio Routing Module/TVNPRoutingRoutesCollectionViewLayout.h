//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCompositionalLayout.h>

@class NSIndexPath;

@interface TVNPRoutingRoutesCollectionViewLayout : UICollectionViewCompositionalLayout
{
    double _topGradientHeight;	// 8 = 0x8
    double _bottomGradientHeight;	// 16 = 0x10
    NSIndexPath *_volumeSliderIndexPath;	// 24 = 0x18
}

+ (Class)layoutAttributesClass;	// IMP=0x0000000000024cd0
- (void).cxx_destruct;	// IMP=0x00000000000253d0
@property(retain, nonatomic) NSIndexPath *volumeSliderIndexPath; // @synthesize volumeSliderIndexPath=_volumeSliderIndexPath;
@property(nonatomic) double bottomGradientHeight; // @synthesize bottomGradientHeight=_bottomGradientHeight;
@property(nonatomic) double topGradientHeight; // @synthesize topGradientHeight=_topGradientHeight;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000025180
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000024e60
- (void)prepareLayout;	// IMP=0x0000000000024d00

@end

