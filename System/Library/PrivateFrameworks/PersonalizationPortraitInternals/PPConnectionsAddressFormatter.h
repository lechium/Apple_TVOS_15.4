//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPConnectionsAddressFormatter : NSObject
{
}

+ (id)addressDictionaryFromAttributeSet:(id)arg1;	// IMP=0x000000000004dd9b
+ (id)formattedAddressWithLocationField:(unsigned char)arg1 address:(id)arg2 duetEvent:(id)arg3 shortStyle:(_Bool)arg4;	// IMP=0x000000000004dcec
+ (id)postalAddressFromAttributeSet:(id)arg1;	// IMP=0x000000000004dab7
+ (id)postalAddressFromDuetEvent:(id)arg1;	// IMP=0x000000000004d663
+ (id)singleLineFormattedAddressWithPostalAddress:(id)arg1 shortStyle:(_Bool)arg2;	// IMP=0x000000000004d551
+ (id)formattedCityAndStateWithCity:(id)arg1 state:(id)arg2;	// IMP=0x000000000004d483
+ (id)formattedStreetNameWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2;	// IMP=0x000000000004d39e
+ (_Bool)isValidAddressDictionary:(id)arg1;	// IMP=0x000000000004d29c
+ (id)addressComponentValueWithLocationField:(unsigned char)arg1 forAddress:(id)arg2 duetEvent:(id)arg3;	// IMP=0x000000000004d017

@end

