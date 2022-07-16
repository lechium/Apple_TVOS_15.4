//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVUIKit/TVLockupViewComponent-Protocol.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface TVLockupHeaderFooterView : UIView <TVLockupViewComponent>
{
    _Bool _showsOnlyWhenAncestorFocused;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    NSLayoutConstraint *_titleLabelTop;	// 32 = 0x20
    NSLayoutConstraint *_titleLabelBottom;	// 40 = 0x28
    NSLayoutConstraint *_subtitleLabelTop;	// 48 = 0x30
    NSLayoutConstraint *_subtitleLabelBottom;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSString *_subtitle;	// 72 = 0x48
}

+ (id)subtitleLabelWithText:(id)arg1;	// IMP=0x0000000000005740
+ (id)titleLabelWithText:(id)arg1;	// IMP=0x000000000000569e
- (void).cxx_destruct;	// IMP=0x000000000000637b
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelBottom; // @synthesize subtitleLabelBottom=_subtitleLabelBottom;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelTop; // @synthesize subtitleLabelTop=_subtitleLabelTop;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelBottom; // @synthesize titleLabelBottom=_titleLabelBottom;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTop; // @synthesize titleLabelTop=_titleLabelTop;
@property(nonatomic) _Bool showsOnlyWhenAncestorFocused; // @synthesize showsOnlyWhenAncestorFocused=_showsOnlyWhenAncestorFocused;
- (struct CGSize)_intrinsicContentSize;	// IMP=0x00000000000061e7
- (void)_updateVisibilityForFocus:(_Bool)arg1;	// IMP=0x0000000000006199
- (void)_addLabel:(id)arg1 position:(long long)arg2;	// IMP=0x0000000000005865
- (void)updateAppearanceForLockupViewState:(unsigned long long)arg1;	// IMP=0x0000000000005791
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000052fb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000052e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005226
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000050d2
- (id)init;	// IMP=0x00000000000050a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

