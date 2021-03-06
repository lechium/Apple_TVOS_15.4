//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface VUIContentRatingTextBadgeView : UIView
{
    NSAttributedString *_contentRatingAttributedText;	// 8 = 0x8
    UILayoutGuide *_contentGuide;	// 16 = 0x10
}

+ (struct UIEdgeInsets)_paddingEdgeInsets;	// IMP=0x000000000000bd9d
+ (void)_drawBadgeWithAttributedRatingText:(id)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 color:(id)arg4;	// IMP=0x000000000000bc3e
+ (struct CGSize)_badgeSizeForAttributedRatingText:(id)arg1;	// IMP=0x000000000000bab5
+ (id)_attributedRatingTextForText:(id)arg1 color:(id)arg2;	// IMP=0x000000000000b8af
+ (id)_badgeImageWithAttributedRatingText:(id)arg1 andColor:(id)arg2;	// IMP=0x000000000000b457
- (void).cxx_destruct;	// IMP=0x000000000000bdea
@property(retain, nonatomic) UILayoutGuide *contentGuide; // @synthesize contentGuide=_contentGuide;
@property(copy, nonatomic) NSAttributedString *contentRatingAttributedText; // @synthesize contentRatingAttributedText=_contentRatingAttributedText;
- (struct CGSize)_intrinsicContentSize;	// IMP=0x000000000000b840
- (void)_updateContentRatingAttributedText:(id)arg1;	// IMP=0x000000000000b79f
- (void)tintColorDidChange;	// IMP=0x000000000000b721
- (id)lastBaselineAnchor;	// IMP=0x000000000000b70f
- (id)firstBaselineAnchor;	// IMP=0x000000000000b6a2
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000000b5ec
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000b5da
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000b5c8
@property(copy, nonatomic) NSString *contentRatingText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000b2f7
- (id)initWithBaselineOffsetFromBottom:(double)arg1;	// IMP=0x000000000000b065

@end

