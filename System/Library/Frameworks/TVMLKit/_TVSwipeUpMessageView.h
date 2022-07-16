//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, _TVImageView;

@interface _TVSwipeUpMessageView : UIView
{
    int _swipeUpMessageState;	// 8 = 0x8
    _Bool _enabled;	// 12 = 0xc
    NSString *_message;	// 16 = 0x10
    _TVImageView *_chevronView;	// 24 = 0x18
    UILabel *_messageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000028c6f
@property(readonly, nonatomic) UILabel *messageView; // @synthesize messageView=_messageView;
@property(readonly, nonatomic) _TVImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)_processSwipeUpMessageEvent:(int)arg1;	// IMP=0x00000000000287c5
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000028639
- (void)layoutSubviews;	// IMP=0x0000000000028364
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000028271
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000027c24

@end
