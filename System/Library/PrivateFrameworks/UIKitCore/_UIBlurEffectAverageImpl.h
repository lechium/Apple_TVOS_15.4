//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIBlurEffectAverageImpl
{
    double _scale;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000cce7f
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000ccffa
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000ccfde
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ccf70
- (unsigned long long)hash;	// IMP=0x00000000000ccf37
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ccf16
- (id)initWithScale:(double)arg1;	// IMP=0x00000000000ccebc

@end

