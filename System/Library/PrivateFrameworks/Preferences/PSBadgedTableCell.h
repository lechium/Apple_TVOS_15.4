//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel;

@interface PSBadgedTableCell
{
    UIImageView *_badgeImageView;	// 120 = 0x78
    UILabel *_badgeNumberLabel;	// 128 = 0x80
    long long _badgeInt;	// 136 = 0x88
}

+ (id)badgeNumberLabelTextColor;	// IMP=0x000000000008e09b
+ (id)unreadBubbleImage;	// IMP=0x000000000008df09
+ (double)badgePadding;	// IMP=0x000000000008df00
+ (id)reuseIdentifierForClassAndType:(long long)arg1;	// IMP=0x000000000008c649
- (void).cxx_destruct;	// IMP=0x000000000008e0b4
- (_Bool)_shouldUseRoundStyle;	// IMP=0x000000000008ded4
- (void)badgeWithInteger:(long long)arg1;	// IMP=0x000000000008db00
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000008d8fc
- (void)layoutSubviews;	// IMP=0x000000000008c9d9
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008c998
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008c957
- (void)resetLocale;	// IMP=0x000000000008c89d
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000008c7ef
- (void)dealloc;	// IMP=0x000000000008c76d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000008c656

@end
