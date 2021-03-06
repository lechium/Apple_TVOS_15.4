//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CertUIKeyValueView : UIView
{
    double _preferredValueLabelOriginX;	// 8 = 0x8
    UILabel *_keyLabel;	// 16 = 0x10
    UILabel *_valueLabel;	// 24 = 0x18
    UIImageView *_verifiedImageView;	// 32 = 0x20
    UILabel *_verifiedLabel;	// 40 = 0x28
}

+ (double)defaultPreferredValueLabelOriginX;	// IMP=0x0000000000003cbe
- (void).cxx_destruct;	// IMP=0x0000000000005513
@property(retain, nonatomic) UILabel *verifiedLabel; // @synthesize verifiedLabel=_verifiedLabel;
@property(retain, nonatomic) UIImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
@property(nonatomic) double preferredValueLabelOriginX; // @synthesize preferredValueLabelOriginX=_preferredValueLabelOriginX;
- (id)verifiedColor;	// IMP=0x0000000000005439
- (id)verifiedFont;	// IMP=0x0000000000005392
- (id)detailFont;	// IMP=0x0000000000005327
- (id)titleFont;	// IMP=0x000000000000528d
- (void)setCheckmarkLabelText:(id)arg1 checkmarkLabelColor:(id)arg2 showCheckmark:(_Bool)arg3;	// IMP=0x00000000000050b0
- (void)setHighlightTextColor:(id)arg1;	// IMP=0x0000000000005006
- (void)setKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000004f34
- (void)setItemDetail:(id)arg1;	// IMP=0x0000000000004d7a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000004962
- (void)_createVerifiedComponentsIfNeeded;	// IMP=0x000000000000477e
- (void)layoutSubviews;	// IMP=0x0000000000003fa4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000003d8f

@end

