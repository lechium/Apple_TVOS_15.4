//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, UIColor, UIFont, UITraitCollection;

@interface _UIStatusBarStyleAttributes : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _scaledFixedWidthBar;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
    UITraitCollection *_traitCollection;	// 32 = 0x20
    long long _effectiveLayoutDirection;	// 40 = 0x28
    double _iconScale;	// 48 = 0x30
    long long _symbolScale;	// 56 = 0x38
    long long _iconSize;	// 64 = 0x40
    UIFont *_font;	// 72 = 0x48
    UIFont *_emphasizedFont;	// 80 = 0x50
    UIFont *_smallFont;	// 88 = 0x58
    UIColor *_textColor;	// 96 = 0x60
    UIColor *_imageTintColor;	// 104 = 0x68
    UIColor *_imageDimmedTintColor;	// 112 = 0x70
    NSArray *_imageNamePrefixes;	// 120 = 0x78
}

+ (id)overriddenStyleAttributes;	// IMP=0x0000000000ca4dbe
+ (id)styleAttributesForStatusBar:(id)arg1 style:(long long)arg2;	// IMP=0x0000000000ca4a52
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000ca4493
- (void).cxx_destruct;	// IMP=0x0000000000ca5cfe
@property(nonatomic, getter=isScaledFixedWidthBar) _Bool scaledFixedWidthBar; // @synthesize scaledFixedWidthBar=_scaledFixedWidthBar;
@property(copy, nonatomic) NSArray *imageNamePrefixes; // @synthesize imageNamePrefixes=_imageNamePrefixes;
@property(copy, nonatomic) UIColor *imageDimmedTintColor; // @synthesize imageDimmedTintColor=_imageDimmedTintColor;
@property(copy, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *smallFont; // @synthesize smallFont=_smallFont;
@property(copy, nonatomic) UIFont *emphasizedFont; // @synthesize emphasizedFont=_emphasizedFont;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long symbolScale; // @synthesize symbolScale=_symbolScale;
@property(nonatomic) double iconScale; // @synthesize iconScale=_iconScale;
@property(readonly, nonatomic) long long effectiveLayoutDirection; // @synthesize effectiveLayoutDirection=_effectiveLayoutDirection;
@property(copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)fontForStyle:(long long)arg1;	// IMP=0x0000000000ca5b99
- (id)styleAttributesWithOverrides:(id)arg1;	// IMP=0x0000000000ca5825
- (id)description;	// IMP=0x0000000000ca5520
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ca4dd0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ca48cf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ca45a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ca449b

@end

