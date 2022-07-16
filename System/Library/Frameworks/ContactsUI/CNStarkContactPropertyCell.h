//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNStarkContactPropertyCell
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
}

+ (_Bool)wantsHorizontalLayout;	// IMP=0x00000000000aaef2
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_cnui_applyContactStyle;	// IMP=0x00000000000abab8
- (id)variableConstraints;	// IMP=0x00000000000ab566
- (id)constantConstraints;	// IMP=0x00000000000ab2bd
- (double)bottomBaselineConstant;	// IMP=0x00000000000ab2af
- (void)transportButtonClicked:(id)arg1;	// IMP=0x00000000000ab203
- (id)standardStarView;	// IMP=0x00000000000ab1fb
- (id)standardTransportIcon;	// IMP=0x00000000000ab17e
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000ab13d
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000ab0fc
- (void)performDefaultAction;	// IMP=0x00000000000aafe3
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000aaefa

@end

