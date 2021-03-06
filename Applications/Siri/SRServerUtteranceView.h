//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SiriUIContentLabel, UIFont;

@interface SRServerUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SiriUIContentLabel *_label;	// 40 = 0x28
    _Bool _chevronHasBeenShown;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 49 = 0x31
}

+ (double)insertionAnimatedZPosition;	// IMP=0x004000000007145b
- (void).cxx_destruct;	// IMP=0x0020000000071902
- (double)_scaledSiriCorrectionViewLeading;	// IMP=0x00100000000718a3
- (void)layoutSubviews;	// IMP=0x001000000007174c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000716f1
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(retain, nonatomic) UIFont *font;
- (void)setAttributedText:(id)arg1;	// IMP=0x0010000000071591
- (void)setText:(id)arg1;	// IMP=0x0010000000071524
- (double)baselineOffsetFromBottom;	// IMP=0x00100000000714c4
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0010000000071469
- (_Bool)chevronHasBeenShown;	// IMP=0x001000000007144b
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x001000000007142a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000712ab

@end

