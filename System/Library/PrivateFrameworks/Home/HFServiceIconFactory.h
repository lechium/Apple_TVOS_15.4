//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HFServiceIconFactory : NSObject
{
}

+ (id)_replacementIdentifierForIconIdentifier:(id)arg1;	// IMP=0x000000000004ab5d
+ (id)iconModifiersForService:(id)arg1;	// IMP=0x000000000004a68e
+ (id)iconDescriptorForAccessoryCategoryOrServiceType:(id)arg1;	// IMP=0x0000000000049b78
+ (id)iconDescriptorForAccessoryCategory:(id)arg1;	// IMP=0x0000000000049b16
+ (id)iconDescriptorForAccessory:(id)arg1;	// IMP=0x0000000000049a6b
+ (id)overrideIconDescriptorForMultiServiceAccessory:(id)arg1 iconDescriptor:(id)arg2;	// IMP=0x000000000004975f
+ (id)iconDescriptorForSensorAccessoryWithNumberOfServices:(unsigned long long)arg1;	// IMP=0x00000000000496e9
+ (id)allIconDescriptorsForServiceType:(id)arg1 serviceSubtype:(id)arg2;	// IMP=0x0000000000049693
+ (id)allIconDescriptorsForService:(id)arg1;	// IMP=0x00000000000495ed
+ (id)iconDescriptorWithIdentifier:(id)arg1 forServiceType:(id)arg2 serviceSubtype:(id)arg3;	// IMP=0x0000000000049345
+ (id)iconDescriptorWithIdentifier:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000049280
+ (id)_defaultIconDescriptorForServiceType:(id)arg1 serviceSubtype:(id)arg2 fallbackToPlaceholderIcon:(_Bool)arg3;	// IMP=0x0000000000049230
+ (id)defaultIconDescriptorForServiceType:(id)arg1 serviceSubtype:(id)arg2;	// IMP=0x0000000000049218
+ (id)defaultIconDescriptorForService:(id)arg1;	// IMP=0x0000000000049122
+ (id)_iconSetForServiceType:(id)arg1 serviceSubtype:(id)arg2 fallbackToPlaceholderIcon:(_Bool)arg3;	// IMP=0x0000000000047db0
+ (id)_multiSubtypeIconSetForServiceType:(id)arg1 serviceSubtype:(id)arg2;	// IMP=0x0000000000047a59

@end

