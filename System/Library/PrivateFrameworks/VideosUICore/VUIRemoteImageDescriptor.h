//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSShadow, NSString, UIColor;

@interface VUIRemoteImageDescriptor : NSObject
{
    _Bool _loadsImmediately;	// 8 = 0x8
    _Bool _templated;	// 9 = 0x9
    _Bool _continuousBorder;	// 10 = 0xa
    _Bool _animatesShadowChanges;	// 11 = 0xb
    _Bool _centerGrowth;	// 12 = 0xc
    _Bool _optimizedImageRendering;	// 13 = 0xd
    NSString *_src;	// 16 = 0x10
    double _aspectRatio;	// 24 = 0x18
    NSString *_extension;	// 32 = 0x20
    NSString *_cropCode;	// 40 = 0x28
    UIColor *_backgroundColor;	// 48 = 0x30
    UIColor *_tintColor;	// 56 = 0x38
    UIColor *_highlightColor;	// 64 = 0x40
    UIColor *_placeholderColor;	// 72 = 0x48
    NSString *_placeholderSrc;	// 80 = 0x50
    unsigned long long _decoratorType;	// 88 = 0x58
    long long _scaleMode;	// 96 = 0x60
    UIColor *_borderColor;	// 104 = 0x68
    double _borderWidth;	// 112 = 0x70
    NSShadow *_shadow;	// 120 = 0x78
    double _focusSizeIncrease;	// 128 = 0x80
    NSString *_accessibilityText;	// 136 = 0x88
    struct CGSize _size;	// 144 = 0x90
    struct CGSize _containerSize;	// 160 = 0xa0
    struct _VUICornerRadii _borderRadii;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000001f6c6
@property(nonatomic) _Bool optimizedImageRendering; // @synthesize optimizedImageRendering=_optimizedImageRendering;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic, getter=isCenterGrowth) _Bool centerGrowth; // @synthesize centerGrowth=_centerGrowth;
@property(nonatomic) _Bool animatesShadowChanges; // @synthesize animatesShadowChanges=_animatesShadowChanges;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) struct _VUICornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property(nonatomic) _Bool continuousBorder; // @synthesize continuousBorder=_continuousBorder;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) unsigned long long decoratorType; // @synthesize decoratorType=_decoratorType;
@property(copy, nonatomic) NSString *placeholderSrc; // @synthesize placeholderSrc=_placeholderSrc;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *cropCode; // @synthesize cropCode=_cropCode;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(nonatomic, getter=isTemplated) _Bool templated; // @synthesize templated=_templated;
@property(nonatomic) _Bool loadsImmediately; // @synthesize loadsImmediately=_loadsImmediately;
@property(readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) NSString *src; // @synthesize src=_src;
- (id)initWithSrc:(id)arg1 size:(struct CGSize)arg2 containerSize:(struct CGSize)arg3;	// IMP=0x000000000001f352
- (id)initWithSrc:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000001f337

@end

