//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIButton, UIFont, UILabel;

@interface RUILinkLabel : UIView
{
    UIButton *_linkButton;	// 8 = 0x8
    long long _textAlignment;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    CDUnknownBlockType _action;	// 32 = 0x20
    UILabel *_textLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000053ff3
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void)_linkPressed;	// IMP=0x0000000000053fa7
- (void)layoutSubviews;	// IMP=0x0000000000053f14
@property(nonatomic) long long textAlignment;
@property(readonly, nonatomic) UIButton *linkButton;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long numberOfLines;
@property(copy, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (void)_resize;	// IMP=0x000000000005380b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005356c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005347a

@end
