//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableAttributeDefaultValueProviding-Protocol.h>

@class NSNumber, NSString;

@interface INCodableNumberAttributeMetadata <INCodableAttributeDefaultValueProviding>
{
    long long _type;	// 8 = 0x8
    NSNumber *_defaultValue;	// 16 = 0x10
    NSNumber *_minimumValue;	// 24 = 0x18
    NSNumber *_maximumValue;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002aefda
- (void).cxx_destruct;	// IMP=0x00000000002aef17
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002aed3f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002aec66
- (id)_localizedDialogTokensWithLocalizer:(id)arg1;	// IMP=0x00000000002aeb2e
- (id)defaultValueForIntentDefaultValueProvider;	// IMP=0x00000000002aeb1c
@property(readonly, nonatomic) _Bool supportsNegativeNumbers;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x00000000002ae711
- (void)updateWithDictionary:(id)arg1;	// IMP=0x00000000002ae2f0
- (id)__INCodableDescriptionTypeKey;	// IMP=0x00000000002af352
- (id)__INIntentResponseCodableDescriptionTypeKey;	// IMP=0x00000000002af19a
- (id)__INTypeCodableDescriptionTypeKey;	// IMP=0x00000000002aefe2
- (id)__INCodableDescriptionDefaultValueKey;	// IMP=0x00000000002af4b2
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;	// IMP=0x00000000002af2fa
- (id)__INTypeCodableDescriptionDefaultValueKey;	// IMP=0x00000000002af142
- (id)__INCodableDescriptionMinimumValueKey;	// IMP=0x00000000002af402
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;	// IMP=0x00000000002af24a
- (id)__INTypeCodableDescriptionMinimumValueKey;	// IMP=0x00000000002af092
- (id)__INCodableDescriptionMaximumValueKey;	// IMP=0x00000000002af45a
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;	// IMP=0x00000000002af2a2
- (id)__INTypeCodableDescriptionMaximumValueKey;	// IMP=0x00000000002af0ea
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;	// IMP=0x00000000002af3aa
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;	// IMP=0x00000000002af1f2
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;	// IMP=0x00000000002af03a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
