//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView, _TVRibbonCellMaskingParameters;

@interface _TVRibbonCell : UICollectionViewCell
{
    UIView *_maskedContentView;	// 8 = 0x8
    double _slantDistance;	// 16 = 0x10
    UIView *_bleedingContentView;	// 24 = 0x18
    UIView *_shearedMaskingView;	// 32 = 0x20
    _TVRibbonCellMaskingParameters *_maskingParameters;	// 40 = 0x28
    double _shearAngle;	// 48 = 0x30
    double _focusedEdgeExpansion;	// 56 = 0x38
    double _unfocusedEdgeExpansion;	// 64 = 0x40
    struct CGRect _frameLastMaskedTo;	// 72 = 0x48
}

+ (double)_slantDistanceForAngle:(double)arg1 cellSize:(struct CGSize)arg2;	// IMP=0x0000000000036875
- (void).cxx_destruct;	// IMP=0x0000000000037c7e
@property(nonatomic) double unfocusedEdgeExpansion; // @synthesize unfocusedEdgeExpansion=_unfocusedEdgeExpansion;
@property(nonatomic) double focusedEdgeExpansion; // @synthesize focusedEdgeExpansion=_focusedEdgeExpansion;
@property(nonatomic) double shearAngle; // @synthesize shearAngle=_shearAngle;
@property(retain, nonatomic) _TVRibbonCellMaskingParameters *maskingParameters; // @synthesize maskingParameters=_maskingParameters;
@property(retain, nonatomic) UIView *shearedMaskingView; // @synthesize shearedMaskingView=_shearedMaskingView;
@property(retain, nonatomic) UIView *bleedingContentView; // @synthesize bleedingContentView=_bleedingContentView;
@property(nonatomic) double slantDistance; // @synthesize slantDistance=_slantDistance;
@property(nonatomic) struct CGRect frameLastMaskedTo; // @synthesize frameLastMaskedTo=_frameLastMaskedTo;
@property(readonly, nonatomic) UIView *maskedContentView; // @synthesize maskedContentView=_maskedContentView;
- (void)setEdgeExpansion:(double)arg1;	// IMP=0x0000000000037b15
@property(nonatomic) _Bool antialiasEdges;
- (void)_updateMaskingModeForParameters:(id)arg1;	// IMP=0x0000000000037741
- (struct CGRect)_bleedingContentViewFrame;	// IMP=0x000000000003763c
- (void)_updateShearedViewsWithValues:(id)arg1;	// IMP=0x000000000003749a
- (id)_shearingValuesForParameters:(id)arg1;	// IMP=0x0000000000036ed5
- (void)_updateShearingTransforms;	// IMP=0x0000000000036c51
- (void)layoutSubviews;	// IMP=0x0000000000036aef
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000368de

@end
