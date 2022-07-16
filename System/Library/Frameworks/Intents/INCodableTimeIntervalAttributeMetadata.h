//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableAttributeDefaultValueProviding-Protocol.h>

@class NSNumber, NSString;

@interface INCodableTimeIntervalAttributeMetadata <INCodableAttributeDefaultValueProviding>
{
    long long _defaultUnit;	// 8 = 0x8
    long long _minimumUnit;	// 16 = 0x10
    long long _maximumUnit;	// 24 = 0x18
    NSNumber *_defaultValue;	// 32 = 0x20
    NSNumber *_minimumValue;	// 40 = 0x28
    NSNumber *_maximumValue;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c69a4
- (void).cxx_destruct;	// IMP=0x00000000001c68c4
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) long long maximumUnit; // @synthesize maximumUnit=_maximumUnit;
@property(nonatomic) long long minimumUnit; // @synthesize minimumUnit=_minimumUnit;
@property(nonatomic) long long defaultUnit; // @synthesize defaultUnit=_defaultUnit;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c6657
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c6545
- (id)defaultValueForIntentDefaultValueProvider;	// IMP=0x00000000001c6533
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x00000000001c607b
- (void)updateWithDictionary:(id)arg1;	// IMP=0x00000000001c5a61
- (id)__INCodableDescriptionDefaultValueKey;	// IMP=0x00000000001c7034
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;	// IMP=0x00000000001c6dcc
- (id)__INTypeCodableDescriptionDefaultValueKey;	// IMP=0x00000000001c6b64
- (id)__INCodableDescriptionMinimumValueKey;	// IMP=0x00000000001c6ed4
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;	// IMP=0x00000000001c6c6c
- (id)__INTypeCodableDescriptionMinimumValueKey;	// IMP=0x00000000001c6a04
- (id)__INCodableDescriptionMaximumValueKey;	// IMP=0x00000000001c6f84
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;	// IMP=0x00000000001c6d1c
- (id)__INTypeCodableDescriptionMaximumValueKey;	// IMP=0x00000000001c6ab4
- (id)__INCodableDescriptionDefaultUnitKey;	// IMP=0x00000000001c708c
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;	// IMP=0x00000000001c6e24
- (id)__INTypeCodableDescriptionDefaultUnitKey;	// IMP=0x00000000001c6bbc
- (id)__INCodableDescriptionMinimumUnitKey;	// IMP=0x00000000001c6f2c
- (id)__INIntentResponseCodableDescriptionMinimumUnitKey;	// IMP=0x00000000001c6cc4
- (id)__INTypeCodableDescriptionMinimumUnitKey;	// IMP=0x00000000001c6a5c
- (id)__INCodableDescriptionMaximumUnitKey;	// IMP=0x00000000001c6fdc
- (id)__INIntentResponseCodableDescriptionMaximumUnitKey;	// IMP=0x00000000001c6d74
- (id)__INTypeCodableDescriptionMaximumUnitKey;	// IMP=0x00000000001c6b0c
- (id)__INCodableDescriptionUnitKey;	// IMP=0x00000000001c6e7c
- (id)__INIntentResponseCodableDescriptionUnitKey;	// IMP=0x00000000001c6c14
- (id)__INTypeCodableDescriptionUnitKey;	// IMP=0x00000000001c69ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
