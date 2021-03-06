//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBTextStyle : NSObject <NSCopying>
{
    _Bool _ignoreTextMarginOnKey;	// 8 = 0x8
    _Bool _usesSymbolImage;	// 9 = 0x9
    NSString *_fontName;	// 16 = 0x10
    double _fontSize;	// 24 = 0x18
    double _imageScale;	// 32 = 0x20
    double _minFontSize;	// 40 = 0x28
    double _kerning;	// 48 = 0x30
    double _textOpacity;	// 56 = 0x38
    NSString *_textColor;	// 64 = 0x40
    NSString *_etchColor;	// 72 = 0x48
    long long _alignment;	// 80 = 0x50
    double _pathWeight;	// 88 = 0x58
    double _fontWeight;	// 96 = 0x60
    unsigned long long _anchorCorner;	// 104 = 0x68
    long long _selector;	// 112 = 0x70
    struct CGPoint _textOffset;	// 120 = 0x78
    struct CGPoint _etchOffset;	// 136 = 0x88
}

+ (id)styleWithTextColor:(id)arg1;	// IMP=0x000000000089256b
+ (id)styleWithFontName:(id)arg1 withFontSize:(double)arg2;	// IMP=0x00000000008924b3
@property(nonatomic) _Bool usesSymbolImage; // @synthesize usesSymbolImage=_usesSymbolImage;
@property(nonatomic) _Bool ignoreTextMarginOnKey; // @synthesize ignoreTextMarginOnKey=_ignoreTextMarginOnKey;
@property(nonatomic) long long selector; // @synthesize selector=_selector;
@property(nonatomic) unsigned long long anchorCorner; // @synthesize anchorCorner=_anchorCorner;
@property(nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double pathWeight; // @synthesize pathWeight=_pathWeight;
@property(nonatomic) struct CGPoint etchOffset; // @synthesize etchOffset=_etchOffset;
@property(nonatomic) struct CGPoint textOffset; // @synthesize textOffset=_textOffset;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSString *etchColor; // @synthesize etchColor=_etchColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double textOpacity; // @synthesize textOpacity=_textOpacity;
@property(nonatomic) double kerning; // @synthesize kerning=_kerning;
@property(nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000892fd9
- (void)overlayWithStyle:(id)arg1;	// IMP=0x0000000000892c13
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000892a36
- (id)description;	// IMP=0x00000000008926ab
- (void)dealloc;	// IMP=0x000000000089265a
- (id)init;	// IMP=0x000000000089260c

@end

