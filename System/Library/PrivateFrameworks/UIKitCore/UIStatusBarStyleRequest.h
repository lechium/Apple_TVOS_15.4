//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class NSNumber, UIColor;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying>
{
    long long _style;	// 8 = 0x8
    long long _legibilityStyle;	// 16 = 0x10
    UIColor *_foregroundColor;	// 24 = 0x18
    NSNumber *_overrideHeight;	// 32 = 0x20
    double _foregroundAlpha;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000cbf88f
@property(readonly, retain, nonatomic) NSNumber *overrideHeight; // @synthesize overrideHeight=_overrideHeight;
@property(readonly, nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property(readonly, retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) long long legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (_Bool)isLegacy;	// IMP=0x0000000000cbf854
- (_Bool)isTranslucent;	// IMP=0x0000000000cbf806
- (_Bool)isDoubleHeight;	// IMP=0x0000000000cbf7b8
- (unsigned long long)hash;	// IMP=0x0000000000cbf74c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cbf55a
- (id)_copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;	// IMP=0x0000000000cbf495
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cbf462
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cbf457
- (id)init;	// IMP=0x0000000000cbf43e
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5;	// IMP=0x0000000000cbf426
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4;	// IMP=0x0000000000cbf40e
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4;	// IMP=0x0000000000cbf3f6
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3;	// IMP=0x0000000000cbf3d6
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 overrideHeight:(id)arg4;	// IMP=0x0000000000cbf3b9
- (id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 overrideHeight:(id)arg5;	// IMP=0x0000000000cbf2f8

@end

