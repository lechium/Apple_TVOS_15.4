//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBarPositioningInternal-Protocol.h>

@class NSMutableDictionary, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground <_UIBarPositioningInternal>
{
    UIColor *_barTintColor;	// 128 = 0x80
    NSMutableDictionary *_customBackgroundImages;	// 136 = 0x88
    long long _barPosition;	// 144 = 0x90
    unsigned long long _searchBarStyle;	// 152 = 0x98
    long long _barStyle;	// 160 = 0xa0
    long long _barTranslucence;	// 168 = 0xa8
    _Bool _usesEmbeddedAppearance;	// 176 = 0xb0
    _Bool _usesContiguousBarBackground;	// 177 = 0xb1
}

- (void).cxx_destruct;	// IMP=0x00000000001ad1cf
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000001ad17d
- (void)didMoveToWindow;	// IMP=0x00000000001ad13c
- (void)_updateBackgroundImageIfPossible;	// IMP=0x00000000001ad09b
@property(nonatomic) _Bool usesContiguousBarBackground;
- (_Bool)_hasCustomBackgroundImage;	// IMP=0x00000000001ad044
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001acf9c
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000001acef4
- (id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;	// IMP=0x00000000001ace90
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x00000000001acc6b
@property(readonly, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) UIImage *backgroundImagePrompt;
- (void)_updateBackgroundImage;	// IMP=0x00000000001ac8c7
- (id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2;	// IMP=0x00000000001ac159
@property(nonatomic) unsigned long long searchBarStyle;
@property(nonatomic) long long barStyle;
@property(nonatomic) _Bool usesEmbeddedAppearance;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001abeb0
- (long long)_barPosition;	// IMP=0x00000000001abe9f
- (void)_setBarPosition:(long long)arg1;	// IMP=0x00000000001abe7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
