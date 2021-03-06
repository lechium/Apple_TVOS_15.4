//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class LPGlyphStyle, LPPadding, LPPointUnit, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface LPTextViewStyle : NSObject <NSCopying>
{
    _Bool _shouldScaleMaximumLinesWithDynamicType;	// 8 = 0x8
    unsigned int _maximumLines;	// 12 = 0xc
    unsigned int _maximumCharacters;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    UIFont *_font;	// 32 = 0x20
    NSString *_compositingFilter;	// 40 = 0x28
    long long _textAlignment;	// 48 = 0x30
    LPPointUnit *_firstLineLeading;	// 56 = 0x38
    LPPointUnit *_lastLineDescent;	// 64 = 0x40
    LPGlyphStyle *_leadingGlyph;	// 72 = 0x48
    LPPadding *_padding;	// 80 = 0x50
    LPPointUnit *_paragraphSpacing;	// 88 = 0x58
    double _fontScalingFactor;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000380d6
@property(nonatomic) double fontScalingFactor; // @synthesize fontScalingFactor=_fontScalingFactor;
@property(nonatomic) _Bool shouldScaleMaximumLinesWithDynamicType; // @synthesize shouldScaleMaximumLinesWithDynamicType=_shouldScaleMaximumLinesWithDynamicType;
@property(retain, nonatomic) LPPointUnit *paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) LPGlyphStyle *leadingGlyph; // @synthesize leadingGlyph=_leadingGlyph;
@property(retain, nonatomic) LPPointUnit *lastLineDescent; // @synthesize lastLineDescent=_lastLineDescent;
@property(retain, nonatomic) LPPointUnit *firstLineLeading; // @synthesize firstLineLeading=_firstLineLeading;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) unsigned int maximumCharacters; // @synthesize maximumCharacters=_maximumCharacters;
@property(nonatomic) unsigned int maximumLines; // @synthesize maximumLines=_maximumLines;
@property(retain, nonatomic) NSString *compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)adjustedForString:(id)arg1;	// IMP=0x0000000000037f50
- (void)_adjustForString:(id)arg1;	// IMP=0x0000000000037e91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037d77
- (id)initWithPlatform:(long long)arg1 fontScalingFactor:(double)arg2;	// IMP=0x0000000000037c10

@end

