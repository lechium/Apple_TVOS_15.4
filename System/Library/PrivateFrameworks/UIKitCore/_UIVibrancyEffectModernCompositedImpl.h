//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernCompositedImpl
{
    long long _compositingMode;	// 8 = 0x8
    NSString *_filterType;	// 16 = 0x10
    UIColor *_compositingColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d3150
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000d30d4
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000d3004
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d2f85
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d2ea0
- (unsigned long long)hash;	// IMP=0x00000000000d2e8f
- (id)implementationReplacingTintColor:(id)arg1;	// IMP=0x00000000000d2d9a
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;	// IMP=0x00000000000d2c42

@end

