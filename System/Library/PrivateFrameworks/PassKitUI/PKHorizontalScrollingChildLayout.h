//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;
@protocol PKHorizontalScrollingChildLayoutDataSource;

@interface PKHorizontalScrollingChildLayout : UICollectionViewLayout
{
    id <PKHorizontalScrollingChildLayoutDataSource> _dataSource;	// 8 = 0x8
    NSMutableDictionary *_attributesPerIndexPath;	// 16 = 0x10
    NSMutableDictionary *_headersPerIndexPath;	// 24 = 0x18
    NSMutableDictionary *_footersPerIndexPath;	// 32 = 0x20
    struct CGSize _currentSize;	// 40 = 0x28
    double _lastDrawnAlpha;	// 56 = 0x38
    _Bool _isLowEndDevice;	// 64 = 0x40
    _Bool _visible;	// 65 = 0x41
    double _alphaTransition;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003b5562
@property(nonatomic) double alphaTransition; // @synthesize alphaTransition=_alphaTransition;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool isLowEndDevice; // @synthesize isLowEndDevice=_isLowEndDevice;
@property(nonatomic) __weak id <PKHorizontalScrollingChildLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000003b532d
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000003b4ab0
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000003b49f3
- (void)_adjustItems:(id)arg1 withLateralMove:(double)arg2;	// IMP=0x00000000003b4840
- (void)prepareLayout;	// IMP=0x00000000003b3d38
- (struct CGSize)collectionViewContentSize;	// IMP=0x00000000003b3d20
- (id)init;	// IMP=0x00000000003b3be3

@end

