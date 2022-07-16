//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _TVDigitView : UIView
{
    _Bool _secure;	// 8 = 0x8
    UIVisualEffectView *_visualEffectView;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000039d9
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void)reset;	// IMP=0x000000000000393f
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000038b5
- (void)layoutSubviews;	// IMP=0x0000000000003840
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000346b

@end

