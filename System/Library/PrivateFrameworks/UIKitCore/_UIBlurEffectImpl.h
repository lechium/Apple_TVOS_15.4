//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;	// IMP=0x00000000000cbd65
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000cc10c
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000cc055
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000cc04f
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000cc046
- (_Bool)canProvideCoreMaterialVibrancyEffect;	// IMP=0x00000000000cc03e
- (_Bool)canProvideVibrancyEffect;	// IMP=0x00000000000cc036
- (_Bool)invertAutomaticStyle;	// IMP=0x00000000000cc02e
- (id)tintColor;	// IMP=0x00000000000cc026
- (long long)style;	// IMP=0x00000000000cc016
- (void)setEffect:(id)arg1;	// IMP=0x00000000000cc010
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cbf93
- (unsigned long long)hash;	// IMP=0x00000000000cbf16
- (_Bool)requiresCopying;	// IMP=0x00000000000cbf0e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cbf08

@end

