//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitObject-Protocol.h>

@class HMAccessory, HMAccessoryCategory, NSDate, NSError, NSString, NSUUID, SFDevice;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject>
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    HMAccessoryCategory *_category;	// 24 = 0x18
    HMAccessory *_accessory;	// 32 = 0x20
    SFDevice *_sharingDevice;	// 40 = 0x28
    NSString *_manufacturer;	// 48 = 0x30
    NSDate *_discoveryDate;	// 56 = 0x38
    unsigned long long _status;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
    unsigned long long _certificationStatus;	// 80 = 0x50
}

+ (id)discoveredAccessoryFromSetupDescription:(id)arg1;	// IMP=0x00000000000b9283
- (void).cxx_destruct;	// IMP=0x00000000000b9ca0
@property(nonatomic) unsigned long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) SFDevice *sharingDevice; // @synthesize sharingDevice=_sharingDevice;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_descriptionForStatus:(unsigned long long)arg1;	// IMP=0x00000000000b9bbf
- (id)identify;	// IMP=0x00000000000b9a14
@property(readonly, nonatomic) _Bool requiresSoftwareUpdate;
@property(readonly, nonatomic) _Bool requiresSetupCode;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy) NSString *description;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00000000000b934d
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;	// IMP=0x00000000000b9197
- (id)initWithSharingDevice:(id)arg1;	// IMP=0x00000000000b90fa
- (id)initWithAccessory:(id)arg1;	// IMP=0x00000000000b905d
- (id)init;	// IMP=0x00000000000b8fa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
