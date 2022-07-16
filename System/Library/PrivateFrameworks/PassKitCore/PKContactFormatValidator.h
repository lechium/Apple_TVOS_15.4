//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKContactFormatConfiguration;

@interface PKContactFormatValidator : NSObject
{
    PKContactFormatConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000020a350
- (id)_formattedFieldEntry:(id)arg1 forFieldConfiguration:(id)arg2;	// IMP=0x000000000020a124
- (_Bool)_isFieldEntry:(id)arg1 validForPickerContactFieldConfiguration:(id)arg2;	// IMP=0x0000000000209fac
- (_Bool)_isFieldEntry:(id)arg1 validForTextContactFieldConfiguration:(id)arg2;	// IMP=0x0000000000209da7
- (_Bool)_isFieldEntry:(id)arg1 validForContactFieldConfiguration:(id)arg2;	// IMP=0x0000000000209cdb
- (id)contactFieldConfigurationForPhoneticFamilyNameForCountryCode:(id)arg1;	// IMP=0x0000000000209c5d
- (id)contactFieldConfigurationForPhoneticGivenNameForCountryCode:(id)arg1;	// IMP=0x0000000000209bdf
- (id)contactFieldConfigurationForFamilyNameForCountryCode:(id)arg1;	// IMP=0x0000000000209b61
- (id)contactFieldConfigurationForGivenNameForCountryCode:(id)arg1;	// IMP=0x0000000000209ae3
- (id)contactFieldConfigurationForPostalField:(id)arg1 forCountryCode:(id)arg2;	// IMP=0x0000000000209969
- (_Bool)emailAddressIsValid:(id)arg1;	// IMP=0x0000000000209961
- (_Bool)phoneNumberIsValid:(id)arg1 forCountryCode:(id)arg2;	// IMP=0x000000000020986b
- (id)formatPostalAddress:(id)arg1;	// IMP=0x0000000000209500
- (_Bool)isPostalAddressFieldEntry:(id)arg1 validForPostalFieldKey:(id)arg2 forCountryCode:(id)arg3;	// IMP=0x000000000020946a
- (unsigned long long)checkPostalAddressFormat:(id)arg1;	// IMP=0x00000000002090dc
- (_Bool)isPhoneticFamilyName:(id)arg1 validFormatForCountryCode:(id)arg2;	// IMP=0x000000000020905c
- (_Bool)isPhoneticGivenName:(id)arg1 validFormatForCountryCode:(id)arg2;	// IMP=0x0000000000208fdc
- (_Bool)isFamilyName:(id)arg1 validFormatForCountryCode:(id)arg2;	// IMP=0x0000000000208f5c
- (_Bool)isGivenName:(id)arg1 validFormatForCountryCode:(id)arg2;	// IMP=0x0000000000208edc
- (unsigned long long)checkNameFormat:(id)arg1 forCountryCode:(id)arg2;	// IMP=0x0000000000208c57
- (_Bool)hasFormatValidationConfigurationForCountryCode:(id)arg1;	// IMP=0x0000000000208c20
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000208b8e

@end

