//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDCharacteristic, HMDHAPAccessory, HMDService, NSString;

@interface HMDCharacteristicRequest : HMFObject <HMFLogging>
{
    _Bool _completed;	// 8 = 0x8
    HMDCharacteristic *_characteristic;	// 16 = 0x10
    id _previousValue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000a72c40
+ (id)requestWithCharacteristic:(id)arg1;	// IMP=0x0000000000a72bf7
- (void).cxx_destruct;	// IMP=0x0000000000a72bc6
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) HMDHAPAccessory *accessory;
@property(readonly, nonatomic) HMDService *service;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a72a1b
- (id)attributeDescriptions;	// IMP=0x0000000000a72586
- (id)initWithCharacteristic:(id)arg1;	// IMP=0x0000000000a724eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

