//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIListContentTextPropertiesInternal-Protocol.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@interface _UIContentViewLabelConfiguration : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedFont:1;
        unsigned int hasCustomizedTextColor:1;
        unsigned int hasCustomizedTextAlignment:1;
        unsigned int hasCustomizedLineBreakMode:1;
        unsigned int hasCustomizedNumberOfLines:1;
        unsigned int hasCustomizedAdjustsFontSizeToFitWidth:1;
        unsigned int hasCustomizedMinimumScaleFactor:1;
        unsigned int hasCustomizedAllowsDefaultTighteningForTruncation:1;
        unsigned int hasCustomizedAdjustsFontForContentSizeCategory:1;
    } _configurationFlags;	// 8 = 0x8
    _Bool _adjustsFontSizeToFitWidth;	// 12 = 0xc
    _Bool _allowsDefaultTighteningForTruncation;	// 13 = 0xd
    _Bool _adjustsFontForContentSizeCategory;	// 14 = 0xe
    NSString *_text;	// 16 = 0x10
    UIFont *_font;	// 24 = 0x18
    UIColor *_textColor;	// 32 = 0x20
    long long _textAlignment;	// 40 = 0x28
    long long _lineBreakMode;	// 48 = 0x30
    NSAttributedString *_attributedText;	// 56 = 0x38
    long long _numberOfLines;	// 64 = 0x40
    double _minimumScaleFactor;	// 72 = 0x48
    UIColor *_highlightedTextColor;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b0ad7
- (void).cxx_destruct;	// IMP=0x00000000004b24a6
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(nonatomic) _Bool allowsDefaultTighteningForTruncation;
@property(nonatomic) double minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
@property(nonatomic) long long numberOfLines;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (void)applyToLabel:(id)arg1;	// IMP=0x00000000004b1d3b
@property(readonly, nonatomic) long long _effectiveTextAlignment;
@property(readonly, nonatomic) _Bool _hasNonEmptyPlainTextOnly;
- (id)description;	// IMP=0x00000000004b1992
- (unsigned long long)hash;	// IMP=0x00000000004b192a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b1517
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b141b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b0ffa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b0adf
- (id)init;	// IMP=0x00000000004b0a2a

@end
