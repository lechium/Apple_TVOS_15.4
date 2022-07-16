//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNPostalAddress.h>

@class NSMutableDictionary;

@interface CNPostalAddress (iOSABCompatibility)
+ (id)localizedCountryNameForCountryCode:(id)arg1;	// IMP=0x0000000000009d82
+ (id)localizedAddressFormatDictionaryForCountryCode:(id)arg1;	// IMP=0x0000000000009c17
+ (id)defaultCountryCode;	// IMP=0x0000000000009bfe
+ (id)addressFormatsDictionary;	// IMP=0x0000000000009bf4
+ (id)postalAddressWithDictionary:(id)arg1;	// IMP=0x000000000000996f
- (id)keyboardSettingsForAddressPart:(id)arg1;	// IMP=0x000000000000a0ba
@property(readonly, nonatomic) NSMutableDictionary *addressDictionary;
@end
