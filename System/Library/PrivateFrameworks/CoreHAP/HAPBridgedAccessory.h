//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPAccessoryServerInternalDelegate-Protocol.h>

@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory <HAPAccessoryServerInternalDelegate>
{
    HAPCharacteristic *_reachabilityCharacteristic;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012659d
@property(nonatomic) __weak HAPCharacteristic *reachabilityCharacteristic; // @synthesize reachabilityCharacteristic=_reachabilityCharacteristic;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;	// IMP=0x0000000000126418
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1;	// IMP=0x000000000012632c
- (_Bool)mergeObject:(id)arg1;	// IMP=0x00000000001261a6
- (_Bool)shouldMergeObject:(id)arg1;	// IMP=0x0000000000126111
- (_Bool)mergeWithAccessory:(id)arg1;	// IMP=0x0000000000125fd2
- (_Bool)__parseBridgeService:(id)arg1;	// IMP=0x0000000000125d38
- (_Bool)__parseServices;	// IMP=0x0000000000125990
- (_Bool)__isReachable;	// IMP=0x00000000001258f3
- (void)setReachable:(_Bool)arg1;	// IMP=0x00000000001257ca
- (_Bool)isPrimary;	// IMP=0x00000000001257c2
- (id)shortDescription;	// IMP=0x0000000000125746
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;	// IMP=0x00000000001255c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

