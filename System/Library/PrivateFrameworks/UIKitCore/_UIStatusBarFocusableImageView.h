//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFocusableImageView
{
    UIColor *_unfocusedTintColor;	// 40 = 0x28
    UIColor *_focusedImageTintColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000c5ee1b
@property(retain, nonatomic) UIColor *focusedImageTintColor; // @synthesize focusedImageTintColor=_focusedImageTintColor;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000c5ed61
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000c5ecd5
- (_Bool)canBecomeFocused;	// IMP=0x0000000000c5eccd
- (_Bool)isUserInteractionEnabled;	// IMP=0x0000000000c5ecc5

@end
