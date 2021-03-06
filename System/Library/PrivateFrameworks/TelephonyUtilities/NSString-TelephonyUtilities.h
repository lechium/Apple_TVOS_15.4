//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TelephonyUtilities)
+ (id)tu_stringWithTUConfigurationAnnounceCalls:(unsigned long long)arg1;	// IMP=0x00000000000cfd0c
- (id)tu_stringByAddingBase64Padding;	// IMP=0x000000000008814f
- (id)tu_stringByStrippingBase64Padding;	// IMP=0x00000000000880e0
- (id)formattedDisplayID;	// IMP=0x0000000000087f52
- (id)normalizedDestination;	// IMP=0x0000000000087e87
- (id)normalizedTokenURI;	// IMP=0x0000000000087e2a
- (id)IDSFormattedDestinationID;	// IMP=0x0000000000087c65
- (_Bool)destinationIdIsCallControlCode;	// IMP=0x0000000000087bb7
- (_Bool)destinationIdIsPhoneNumber;	// IMP=0x0000000000087b43
- (_Bool)destinationIdIsTokenURI;	// IMP=0x0000000000087b14
- (_Bool)destinationIdIsEmailAddress;	// IMP=0x0000000000087ae2
- (_Bool)destinationIdIsHardware;	// IMP=0x0000000000087ad8
- (_Bool)destinationIdIsPseudonym;	// IMP=0x0000000000087ace
- (_Bool)destinationIdIsTemporary;	// IMP=0x0000000000087ac4
- (id)RTLString;	// IMP=0x0000000000087a9f
- (id)LTRString;	// IMP=0x0000000000087a7a
@end

