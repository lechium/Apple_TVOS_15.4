//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBarButtonItemDataFallback-Protocol.h>

@class NSDictionary, NSString, UIImage, UIImageSymbolConfiguration;
@protocol _UIBarButtonItemDataFallback;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemData <_UIBarButtonItemDataFallback>
{
    NSDictionary *_titleTextAttributes[4];	// 8 = 0x8
    UIImage *_backgroundImage[4];	// 40 = 0x28
    struct UIOffset _titlePositionAdjustment[4];	// 72 = 0x48
    struct UIOffset _backgroundImagePositionAdjustment[4];	// 136 = 0x88
    UIImageSymbolConfiguration *_imageSymbolConfiguration;	// 200 = 0xc8
    UIImageSymbolConfiguration *_compactImageSymbolConfiguration;	// 208 = 0xd0
    UIImage *_backIndicatorImage;	// 216 = 0xd8
    UIImage *_backIndicatorTransitionMaskImage;	// 224 = 0xe0
    UIImageSymbolConfiguration *_backIndicatorSymbolConfiguration;	// 232 = 0xe8
    UIImageSymbolConfiguration *_compactBackIndicatorSymbolConfiguration;	// 240 = 0xf0
    id <_UIBarButtonItemDataFallback> _fallback;	// 248 = 0xf8
    struct {
        unsigned int hasUserFont:1;
        unsigned int hasUserColor:1;
        unsigned int hasUserTitlePosition:1;
        unsigned int hasUserBackgroundImage:1;
        unsigned int hasUserBackgroundImagePosition:1;
    } _stateFlags[4];	// 256 = 0x100
    struct {
        unsigned int isBackButtonData:1;
    } _dataFlags;	// 288 = 0x120
    long long _style;	// 296 = 0x128
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000c38d7e
+ (id)standardBackButtonData;	// IMP=0x0000000000c378fc
+ (id)standardItemDataForStyle:(long long)arg1;	// IMP=0x0000000000c377d3
- (void).cxx_destruct;	// IMP=0x0000000000c3b5c4
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000c3b56d
- (id)backgroundImageForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000c3b51d
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000c3b4d4
- (id)colorForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000c3b484
- (id)backIndicatorTextStyleForSymbolConfiguration;	// IMP=0x0000000000c3b467
- (id)textStyleForSymbolConfiguration;	// IMP=0x0000000000c3b44a
- (id)fontForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000c3b3fa
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorTransitionMaskSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorTransitionMaskSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorSymbolConfiguration;
@property(readonly, nonatomic) UIImage *compactBackIndicatorTransitionMaskImage;
@property(readonly, nonatomic) UIImage *compactBackIndicatorImage;
@property(readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property(readonly, nonatomic) UIImage *backIndicatorImage;
- (void)resetBackIndicatorImages;	// IMP=0x0000000000c3ae5a
- (void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;	// IMP=0x0000000000c3adbf
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactImageSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
- (void)setBackgroundImagePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000000c3ab05
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000c3aa82
- (void)setBackgroundImage:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000c3aa06
- (id)backgroundImageForState:(long long)arg1;	// IMP=0x0000000000c3a9a8
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000000c3a942
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000c3a8bf
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000c3a7c1
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x0000000000c3a672
- (id)_fallbackColorForState:(long long)arg1;	// IMP=0x0000000000c3a577
- (id)_fallbackFontForState:(long long)arg1;	// IMP=0x0000000000c3a4e8
- (id)replicate;	// IMP=0x0000000000c3a2b8
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x0000000000c39e9d
- (long long)hashInto:(long long)arg1;	// IMP=0x0000000000c39dc9
- (void)describeInto:(id)arg1;	// IMP=0x0000000000c39a5c
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000c391f9
- (void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000c38916
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000c384ae
- (void)_decodeBackgroundImagesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000c38103
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000c37c2e
- (id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)arg1;	// IMP=0x0000000000c37b2e
@property(readonly, nonatomic) id <_UIBarButtonItemDataFallback> fallback;
- (id)dataWithNewFallback:(id)arg1;	// IMP=0x0000000000c37a83
@property(readonly, nonatomic) _Bool isBackButtonData;
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000c37970

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
