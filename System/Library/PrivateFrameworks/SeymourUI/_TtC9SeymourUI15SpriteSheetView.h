//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIColor;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI15SpriteSheetView : UIView
{
    MISSING_TYPE *offsetAnimationKey;	// 8 = 0x8
    MISSING_TYPE *offsets;	// 24 = 0x18
    MISSING_TYPE *spriteSheet;	// 32 = 0x20
    MISSING_TYPE *frameRate;	// 56 = 0x38
    MISSING_TYPE *animations;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001c3ed0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c3e50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001c3e00
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001c3090
@property(nonatomic, retain) UIColor *tintColor;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end

