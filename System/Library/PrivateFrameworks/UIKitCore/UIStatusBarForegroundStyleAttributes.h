//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying>
{
    double _height;	// 8 = 0x8
    long long _legibilityStyle;	// 16 = 0x10
    long long _idiom;	// 24 = 0x18
    NSMutableDictionary *_cachedFonts;	// 32 = 0x20
    _Bool _isTintColorBlack;	// 40 = 0x28
    _Bool _hasBusyBackground;	// 41 = 0x29
    NSString *_cachedUniqueIdentifier;	// 48 = 0x30
    _Bool _canShowBreadcrumbs;	// 56 = 0x38
    UIColor *_tintColor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000c058b6
@property(readonly, retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool canShowBreadcrumbs; // @synthesize canShowBreadcrumbs=_canShowBreadcrumbs;
- (_Bool)supportsShowingBuildVersion;	// IMP=0x0000000000c05892
- (long long)idiom;	// IMP=0x0000000000c05888
- (_Bool)usesVerticalLayout;	// IMP=0x0000000000c05880
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;	// IMP=0x0000000000c057ed
- (double)sizeForMoonMaskVisible:(_Bool)arg1;	// IMP=0x0000000000c0577c
- (id)textForNetworkType:(int)arg1;	// IMP=0x0000000000c05601
- (double)bluetoothBatteryExtraPadding;	// IMP=0x0000000000c055de
- (double)baselineOffsetForStyle:(long long)arg1;	// IMP=0x0000000000c054fd
- (id)textColorForStyle:(long long)arg1;	// IMP=0x0000000000c054eb
- (id)makeTextFontForStyle:(long long)arg1;	// IMP=0x0000000000c05400
- (_Bool)_shouldUseBoldFontForStyle:(long long)arg1;	// IMP=0x0000000000c053d6
- (id)textFontForStyle:(long long)arg1;	// IMP=0x0000000000c05309
- (id)expandedNameForImageName:(id)arg1;	// IMP=0x0000000000c052f0
- (id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7;	// IMP=0x0000000000c051cf
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9 shouldCache:(_Bool)arg10;	// IMP=0x0000000000c04cd5
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9;	// IMP=0x0000000000c04caa
- (id)imageIdWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 style:(long long)arg5;	// IMP=0x0000000000c04b5b
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5 shouldCache:(_Bool)arg6;	// IMP=0x0000000000c049df
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5;	// IMP=0x0000000000c049bd
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4;	// IMP=0x0000000000c049a5
- (id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3;	// IMP=0x0000000000c048a2
- (id)accessibilityHUDImageNamed:(id)arg1;	// IMP=0x0000000000c04814
- (id)imageNamed:(id)arg1;	// IMP=0x0000000000c04698
- (id)untintedImageNamed:(id)arg1;	// IMP=0x0000000000c04553
- (id)uncachedImageNamed:(id)arg1;	// IMP=0x0000000000c043cf
- (void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3;	// IMP=0x0000000000c04231
- (void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5;	// IMP=0x0000000000c04018
- (void)_cacheImage:(id)arg1 named:(id)arg2;	// IMP=0x0000000000c04003
- (id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2;	// IMP=0x0000000000c03e2f
- (id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3;	// IMP=0x0000000000c03c4f
- (id)_cachedImageNamed:(id)arg1;	// IMP=0x0000000000c03a95
- (double)shadowPadding;	// IMP=0x0000000000c03a8c
- (double)rightEdgePadding;	// IMP=0x0000000000c03a6c
- (double)leftEdgePadding;	// IMP=0x0000000000c03a5e
- (double)middlePadding;	// IMP=0x0000000000c03a50
- (double)standardPadding;	// IMP=0x0000000000c03a42
- (double)scale;	// IMP=0x0000000000c039eb
- (void)drawTextInRect:(struct CGRect)arg1 withColor:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c039da
- (void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(struct CGSize)arg7 textHeight:(double)arg8;	// IMP=0x0000000000c037c9
- (double)textOffsetForStyle:(long long)arg1;	// IMP=0x0000000000c037bb
- (void)_drawText:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6;	// IMP=0x0000000000c036c0
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(double)arg2;	// IMP=0x0000000000c03574
- (id)bluetoothBatteryColorForCapacity:(double)arg1 usingTintColor:(_Bool)arg2;	// IMP=0x0000000000c034ad
- (id)bluetoothBatteryImageNameWithCapacity:(double)arg1;	// IMP=0x0000000000c033ba
- (struct UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;	// IMP=0x0000000000c0337f
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(_Bool)arg4;	// IMP=0x0000000000c03171
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3;	// IMP=0x0000000000c03156
- (id)batteryColorForCapacity:(int)arg1 style:(unsigned long long)arg2 usingTintColor:(_Bool)arg3;	// IMP=0x0000000000c030fc
- (id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(_Bool)arg4;	// IMP=0x0000000000c03009
- (struct UIEdgeInsets)edgeInsetsForBatteryInsides;	// IMP=0x0000000000c02fad
- (double)_roundDimension:(double)arg1;	// IMP=0x0000000000c02f55
- (double)batteryAccessoryMargin;	// IMP=0x0000000000c02f47
- (long long)activityIndicatorStyleWithSyncActivity:(_Bool)arg1;	// IMP=0x0000000000c02f3b
- (long long)legibilityStyle;	// IMP=0x0000000000c02f31
- (double)height;	// IMP=0x0000000000c02f26
- (id)uniqueIdentifier;	// IMP=0x0000000000c02edf
- (id)generateUniqueIdentifier;	// IMP=0x0000000000c02e1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c02d73
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(_Bool)arg4;	// IMP=0x0000000000c02d08
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(_Bool)arg4 idiom:(long long)arg5;	// IMP=0x0000000000c02c24

@end
