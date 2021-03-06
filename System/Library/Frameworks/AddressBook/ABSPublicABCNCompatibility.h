//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ABSPublicABCNCompatibility : NSObject
{
}

+ (id)contactStoreForPublicAddressBook:(void *)arg1;	// IMP=0x000000000001b33e
+ (id)createAddressBookForConversion;	// IMP=0x000000000001b311
+ (id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 contactStore:(id)arg4;	// IMP=0x000000000001b186
+ (int)publicMultiValueIdentifierFromLabeledValue:(id)arg1 contactStore:(id)arg2;	// IMP=0x000000000001b171
+ (void *)publicABPersonFromContact:(id)arg1 contactStore:(id)arg2 publicAddressBook:(const void **)arg3;	// IMP=0x000000000001aff7
+ (int)publicABPropertyIDFromContactPropertyKey:(id)arg1;	// IMP=0x000000000001af44
+ (id)contactPropertyKeyFromPublicABPropertyID:(int)arg1;	// IMP=0x000000000001ae8f
+ (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2 mutable:(_Bool)arg3;	// IMP=0x000000000001adb0
+ (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000001ad9b
+ (_Bool)overwritePublicABPerson:(void *)arg1 withContact:(id)arg2;	// IMP=0x000000000001ab60
+ (_Bool)updateNewPublicABPerson:(void *)arg1 withSavedContact:(id)arg2 inAddressBook:(void *)arg3;	// IMP=0x000000000001a9ff

@end

