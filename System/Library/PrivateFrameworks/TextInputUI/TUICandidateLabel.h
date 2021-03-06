//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIFont;

@interface TUICandidateLabel : UIView
{
    _Bool _adjustsFontSizeToFitWidth;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    UIFont *_font;	// 24 = 0x18
    double _minimumScaleFactor;	// 32 = 0x20
    UIColor *_textColor;	// 40 = 0x28
    long long _layoutOrientation;	// 48 = 0x30
}

+ (double)lineWidthForText:(id)arg1 font:(id)arg2 layoutOrientation:(long long)arg3;	// IMP=0x0000000000007071
- (void).cxx_destruct;	// IMP=0x000000000000702f
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000066d0
- (struct __CTLine *)createLineFromAttributedText:(id)arg1;	// IMP=0x00000000000065b1
- (unsigned long long)accessibilityTraits;	// IMP=0x00000000000065a1
- (id)accessibilityLabel;	// IMP=0x000000000000658f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000634e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000062f1
- (void)commonInit;	// IMP=0x00000000000062bc

@end

