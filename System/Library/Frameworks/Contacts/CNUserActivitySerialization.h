//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNUserActivitySerialization : NSObject
{
}

+ (id)fullNameForContact:(id)arg1;	// IMP=0x00000000001053ce
+ (id)distinctPhoneNumbersForContact:(id)arg1;	// IMP=0x0000000000105207
+ (id)distinctEmailAddressesForContact:(id)arg1;	// IMP=0x0000000000105082
+ (id)allAvailableServerUUIDsForContact:(id)arg1;	// IMP=0x0000000000104f2f
+ (_Bool)isContactACompany:(id)arg1;	// IMP=0x0000000000104f12
+ (id)userActivityTitleWithContacts:(id)arg1;	// IMP=0x0000000000104e7d
+ (id)userActivityPayloadWithContacts:(id)arg1 shouldUnify:(_Bool)arg2;	// IMP=0x0000000000104ad1
+ (id)descriptorForRequiredKeys;	// IMP=0x000000000010496d

@end

