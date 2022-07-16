//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/UIImageConfiguration-Protocol.h>

@class NSString, UITraitCollection;

@interface UIImageConfiguration : NSObject <UIImageConfiguration, NSCopying, NSSecureCoding>
{
    _Bool _ignoresDynamicType;	// 8 = 0x8
    UITraitCollection *_traitCollection;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000078f18c
- (void).cxx_destruct;	// IMP=0x000000000078fbfa
@property(readonly, nonatomic) _Bool _ignoresDynamicType; // @synthesize _ignoresDynamicType;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (id)_configurationIgnoringDynamicType;	// IMP=0x000000000078fb54
- (void)_applyConfigurationValuesTo:(id)arg1;	// IMP=0x000000000078f798
- (_Bool)_shouldApplyConfiguration:(id)arg1;	// IMP=0x000000000078f778
- (id)configurationByApplyingConfiguration:(id)arg1;	// IMP=0x000000000078f50a
- (_Bool)_hasColorConfigurationWithTintColor;	// IMP=0x000000000078f502
- (_Bool)_isUnspecified;	// IMP=0x000000000078f4f4
- (_Bool)isEquivalentToConfiguration:(id)arg1;	// IMP=0x000000000078f3a5
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000078f221
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000078f194
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000078f084
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000078f04d
- (id)configurationWithTraitCollection:(id)arg1;	// IMP=0x000000000078ee67
- (id)_initWithTraitCollection:(id)arg1;	// IMP=0x000000000078edf4
- (id)_init;	// IMP=0x000000000078ede0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
