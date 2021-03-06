//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDCharacteristicEvent <NSSecureCoding>
{
    id _eventValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000008421fb
+ (id)logCategory;	// IMP=0x00000000008421cb
- (void).cxx_destruct;	// IMP=0x0000000000841d66
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
- (id)analyticsTriggerEventData;	// IMP=0x0000000000841c88
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000841c82
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000008419a9
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000008417af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008416ef
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000841531
- (id)createPayload;	// IMP=0x000000000084145d
- (id)dumpState;	// IMP=0x0000000000841223
- (_Bool)_compareEventValue:(id)arg1;	// IMP=0x000000000084104f
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x0000000000840d31
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000840a6d
- (id)emptyModelObject;	// IMP=0x00000000008409b4
- (id)description;	// IMP=0x0000000000840905
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000840876

@end

