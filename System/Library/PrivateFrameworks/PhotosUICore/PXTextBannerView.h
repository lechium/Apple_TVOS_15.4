//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface PXTextBannerView : UIView
{
    UIImageView *_backgroundView;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    _Bool _destructiveText;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    long long _textAlignment;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001a553c
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic, getter=isDestructiveText) _Bool destructiveText; // @synthesize destructiveText=_destructiveText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;	// IMP=0x00000000001a5438
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001a53d3
- (void)_updateSubviews;	// IMP=0x00000000001a532e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a5051

@end

