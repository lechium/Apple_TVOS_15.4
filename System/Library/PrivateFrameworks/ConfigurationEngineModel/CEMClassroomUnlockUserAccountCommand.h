//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMClassroomUnlockUserAccountCommand <CEMRegisteredTypeProtocol>
{
    NSString *_payloadUserName;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withUserName:(id)arg2;	// IMP=0x000000000002c5f8
+ (id)buildWithIdentifier:(id)arg1 withUserName:(id)arg2;	// IMP=0x000000000002c4f0
+ (id)allowedPayloadKeys;	// IMP=0x000000000002c43d
+ (id)registeredIdentifier;	// IMP=0x000000000002c430
+ (id)registeredClassName;	// IMP=0x000000000002c423
- (void).cxx_destruct;	// IMP=0x000000000002c98a
@property(copy, nonatomic) NSString *payloadUserName; // @synthesize payloadUserName=_payloadUserName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c903
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000002c878
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c700
- (int)executionLevel;	// IMP=0x000000000002c4e8
- (_Bool)mustBeSupervised;	// IMP=0x000000000002c4e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
