//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessCodeManagerContext, NSString;

@interface HMDAccessoryAccessCodeReaderWriter : HMFObject <HMFLogging>
{
    HMDAccessCodeManagerContext *_context;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000005c29f
+ (id)createWriteRequestForRemoveRequests:(id)arg1 characteristic:(id)arg2;	// IMP=0x000000000005c03a
+ (id)createWriteRequestForUpdateRequests:(id)arg1 characteristic:(id)arg2;	// IMP=0x000000000005bdd5
+ (id)createWriteRequestForAddRequests:(id)arg1 characteristic:(id)arg2;	// IMP=0x000000000005bb70
+ (id)createWriteRequestsForModificationRequests:(id)arg1 hapAccessories:(id)arg2;	// IMP=0x000000000005b1f9
+ (long long)hmPrivateErrorCodeForHAPAccessCodeError:(long long)arg1;	// IMP=0x000000000005b0d6
+ (id)modificationResponseForControlResponse:(id)arg1 operationType:(long long)arg2 accessoryUUID:(id)arg3;	// IMP=0x000000000005ad46
+ (id)genericModificationResponseForFailedRequest:(id)arg1;	// IMP=0x000000000005aa70
+ (id)createModificationResponsesForWriteResponses:(id)arg1 ofRequestPairs:(id)arg2;	// IMP=0x000000000005a477
+ (id)_accessCodeControlFromWriteResponses:(id)arg1 forWriteRequest:(id)arg2;	// IMP=0x000000000005a0d5
+ (id)createConstraintsFromReadResponses:(id)arg1 readRequests:(id)arg2;	// IMP=0x000000000005a003
+ (id)identifiersFromListWriteResponses:(id)arg1 ofWriteRequests:(id)arg2;	// IMP=0x0000000000059c0f
+ (id)accessCodeFetchResponsesForReadWriteResponses:(id)arg1 ofWriteRequests:(id)arg2;	// IMP=0x000000000005956a
+ (id)_createReadWriteRequestsForAccessCodeIdentifiersByCharacteristic:(id)arg1;	// IMP=0x00000000000590d8
+ (id)_createListWriteRequestsForCharacteristics:(id)arg1;	// IMP=0x0000000000059077
- (void).cxx_destruct;	// IMP=0x0000000000057e20
@property(readonly) HMDAccessCodeManagerContext *context; // @synthesize context=_context;
- (id)logIdentifier;	// IMP=0x0000000000057d90
- (id)_createModificationResponsesForWriteResponses:(id)arg1 ofRequestPairs:(id)arg2;	// IMP=0x0000000000057d77
- (id)_createWriteRequestsForModificationRequests:(id)arg1;	// IMP=0x0000000000057cc7
- (id)_createReadWriteRequestsForAccessCodeIdentifiers:(id)arg1;	// IMP=0x0000000000057805
- (id)_characteristicsOfType:(id)arg1 fromAccessoriesWithUUIDs:(id)arg2;	// IMP=0x000000000005745a
- (id)_createListWriteRequestsForAccessoriesWithUUIDS:(id)arg1;	// IMP=0x00000000000573f0
- (id)_createConstraintsReadRequestsForAccessoriesWithUUIDs:(id)arg1;	// IMP=0x0000000000057386
- (id)_readAccessCodesFromAccessoriesWithUUIDs:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x0000000000056fb9
- (id)_readConstraintsFromAccessoriesWithUUIDs:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x0000000000056cd0
- (id)performAccessCodeModificationRequests:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x00000000000568cc
- (id)_performReadRequests:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x00000000000567af
- (id)_performWriteRequests:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x0000000000056692
- (void)_readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056427
- (void)readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056415
- (id)readConstraintsFromAccessoriesWithUUIDs:(id)arg1;	// IMP=0x00000000000563fe
- (id)_readAccessCodeWithIdentifier:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x00000000000560a1
- (id)removeAllAccessCodesWithValue:(id)arg1;	// IMP=0x0000000000055f48
- (id)readAccessCodeWithIdentifier:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x0000000000055f36
- (id)readAccessCodesFromAccessoriesWithUUIDs:(id)arg1;	// IMP=0x0000000000055e84
- (void)configure;	// IMP=0x0000000000055dbd
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000055d4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
