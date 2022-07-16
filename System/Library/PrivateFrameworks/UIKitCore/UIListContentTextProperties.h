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

@interface UIListContentTextProperties : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedFont:1;
        unsigned int hasCustomizedColor:1;
        unsigned int hasCustomizedColorTransformer:1;
        unsigned int hasCustomizedAlignment:1;
        unsigned int hasCustomizedLineBreakMode:1;
        unsigned int hasCustomizedNumberOfLines:1;
        unsigned int hasCustomizedAdjustsFontSizeToFitWidth:1;
        unsigned int hasCustomizedMinimumScaleFactor:1;
        unsigned int hasCustomizedAllowsDefaultTighteningForTruncation:1;
        unsigned int hasCustomizedAdjustsFontForContentSizeCategory:1;
        unsigned int hasCustomizedTransform:1;
    } _textFlags;	// 8 = 0x8
    _Bool _adjustsFontSizeToFitWidth;	// 12 = 0xc
    _Bool _allowsDefaultTighteningForTruncation;	// 13 = 0xd
    _Bool _adjustsFontForContentSizeCategory;	// 14 = 0xe
    NSString *_text;	// 16 = 0x10
    UIFont *_font;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    CDUnknownBlockType _colorTransformer;	// 40 = 0x28
    long long _alignment;	// 48 = 0x30
    long long _lineBreakMode;	// 56 = 0x38
    NSAttributedString *_attributedText;	// 64 = 0x40
    long long _numberOfLines;	// 72 = 0x48
    double _minimumScaleFactor;	// 80 = 0x50
    long long _transform;	// 88 = 0x58
    long long _colorTransformerIdentifier;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000daf5bc
- (void).cxx_destruct;	// IMP=0x0000000000db12e2
- (id)resolvedColor;	// IMP=0x0000000000db11e9
@property(nonatomic) long long transform;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(nonatomic) _Bool allowsDefaultTighteningForTruncation;
@property(nonatomic) double minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long alignment;
@property(copy, nonatomic) CDUnknownBlockType colorTransformer;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) UIFont *font;
@property(readonly, nonatomic) long long _effectiveTextAlignment;
@property(readonly, nonatomic) _Bool _hasNonEmptyPlainTextOnly;
- (id)description;	// IMP=0x0000000000db0706
- (unsigned long long)hash;	// IMP=0x0000000000db06c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000db01b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000db00a5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000dafbcd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000daf5c4
- (id)init;	// IMP=0x0000000000daf507

@end

