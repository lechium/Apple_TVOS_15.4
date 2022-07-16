//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@interface TVLabel : UILabel
{
    long long _previousNumberOfLines;	// 8 = 0x8
    struct CGSize _cachedSizeThatFits;	// 16 = 0x10
    struct CGSize _previousTargetSize;	// 32 = 0x20
    struct CGRect _cachedTextRectForBounds;	// 48 = 0x30
    struct CGRect _previousBounds;	// 80 = 0x50
}

@property(nonatomic) struct CGSize previousTargetSize; // @synthesize previousTargetSize=_previousTargetSize;
@property(nonatomic) struct CGSize cachedSizeThatFits; // @synthesize cachedSizeThatFits=_cachedSizeThatFits;
@property(nonatomic) long long previousNumberOfLines; // @synthesize previousNumberOfLines=_previousNumberOfLines;
@property(nonatomic) struct CGRect previousBounds; // @synthesize previousBounds=_previousBounds;
@property(nonatomic) struct CGRect cachedTextRectForBounds; // @synthesize cachedTextRectForBounds=_cachedTextRectForBounds;
- (void)_clearCachedValues;	// IMP=0x0000000000081356
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000081288
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;	// IMP=0x000000000008110b
- (void)setBaselineAdjustment:(long long)arg1;	// IMP=0x00000000000810ca
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;	// IMP=0x0000000000081089
- (void)setNumberOfLines:(long long)arg1;	// IMP=0x0000000000081048
- (void)setLineBreakMode:(long long)arg1;	// IMP=0x0000000000081007
- (void)setFont:(id)arg1;	// IMP=0x0000000000080fc6
- (void)setText:(id)arg1;	// IMP=0x0000000000080f85
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000080ed4

@end
