//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKInfoCardTheme-Protocol.h>

@class NSDictionary, NSString, UIColor;

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme>
{
    _Bool _themeWasExplicitySet;	// 8 = 0x8
    NSDictionary *_colors;	// 16 = 0x10
    CDUnknownBlockType _tintColorProvider;	// 24 = 0x18
    _Bool _useSmallFont;	// 32 = 0x20
    unsigned long long _themeType;	// 40 = 0x28
}

+ (void)setTintColorProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000212028
+ (unsigned long long)themeType;	// IMP=0x0000000000210c13
+ (void)setTheme:(unsigned long long)arg1;	// IMP=0x0000000000210bc8
+ (id)themeWithThemeType:(unsigned long long)arg1;	// IMP=0x0000000000210b99
+ (id)currentTheme;	// IMP=0x0000000000210b02
- (void).cxx_destruct;	// IMP=0x000000000021243e
@property(nonatomic) _Bool useSmallFont; // @synthesize useSmallFont=_useSmallFont;
@property(readonly, nonatomic) unsigned long long themeType; // @synthesize themeType=_themeType;
@property(readonly, nonatomic) NSString *javaScriptName;
@property(readonly, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) UIColor *cardBackgroundColor;
@property(readonly, nonatomic) UIColor *transitIncidentBackgroundColor;
@property(readonly, nonatomic) UIColor *ratingBarBackgroundColor;
@property(readonly, nonatomic) UIColor *ratingBarEndColor;
@property(readonly, nonatomic) UIColor *ratingBarStartColor;
@property(readonly, nonatomic) UIColor *normalBackgroundColor;
@property(readonly, nonatomic) UIColor *transitChevronBackgroundColor;
@property(readonly, nonatomic) UIColor *transitDelayedTextColor;
@property(readonly, nonatomic) UIColor *transitOntimeTextColor;
@property(readonly, nonatomic) UIColor *buttonHighlightedColor;
@property(readonly, nonatomic) UIColor *buttonNormalColor;
@property(readonly, nonatomic) UIColor *headerPrimaryButtonHighlightedColor;
@property(readonly, nonatomic) UIColor *headerPrimaryButtonNormalColor;
@property(readonly, nonatomic) UIColor *normalActionRowBackgroundPressedColor;
@property(readonly, nonatomic) UIColor *disabledActionRowBackgroundColor;
@property(readonly, nonatomic) UIColor *normalActionRowBackgroundColor;
@property(readonly, nonatomic) UIColor *disabledActionRowTextColor;
@property(readonly, nonatomic) UIColor *selectedRowColor;
@property(readonly, nonatomic) UIColor *rowColor;
@property(readonly, nonatomic) UIColor *separatorLineColor;
@property(readonly, nonatomic) UIColor *highlightedTintColor;
@property(readonly, nonatomic) UIColor *tertiaryTextColor;
@property(readonly, nonatomic) UIColor *lightTextColor;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) _Bool isDarkTheme;
- (void)_setTintColorProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000211ffb
- (void)_setTheme:(unsigned long long)arg1;	// IMP=0x0000000000210cde
- (unsigned long long)_currentSystemTheme;	// IMP=0x0000000000210cd3
- (id)_initWithThemeType:(unsigned long long)arg1;	// IMP=0x0000000000210c65
- (id)init;	// IMP=0x0000000000210c57
- (_Bool)_isInSpotlightContext;	// IMP=0x0000000000210a59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

