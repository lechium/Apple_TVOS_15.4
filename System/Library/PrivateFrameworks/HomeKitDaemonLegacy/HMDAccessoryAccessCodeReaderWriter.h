//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDAccessCodeManagerContext, NSString;

@interface HMDAccessoryAccessCodeReaderWriter : HMFObject <HMFLogging>
{
    HMDAccessCodeManagerContext *_context;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000057d83
+ (id)createWriteRequestForRemoveRequests:(id)arg1 characteristic:(id)arg2;	// IMP=0x0000000000057b1e
+ (id)createWriteRequestForUpdateRequests:(id)arg1 characteristic:(id)arg2;	// IMP=0x00000000000578b9
+ (id)createWriteRequestForAddRequests:(id)arg1 characteristic:(id)arg2;	// IMP=0x0000000000057654
+ (id)createWriteRequestsForModificationRequests:(id)arg1 hapAccessories:(id)arg2;	// IMP=0x0000000000056cdd
+ (long long)hmPrivateErrorCodeForHAPAccessCodeError:(long long)arg1;	// IMP=0x0000000000056bba
+ (id)modificationResponseForControlResponse:(id)arg1 operationType:(long long)arg2 accessoryUUID:(id)arg3;	// IMP=0x000000000005682a
+ (id)genericModificationResponseForFailedRequest:(id)arg1;	// IMP=0x0000000000056554
+ (id)createModificationResponsesForWriteResponses:(id)arg1 ofRequestPairs:(id)arg2;	// IMP=0x0000000000055f5b
+ (id)_accessCodeControlFromWriteResponses:(id)arg1 forWriteRequest:(id)arg2;	// IMP=0x0000000000055bb9
+ (id)createConstraintsFromReadResponses:(id)arg1 readRequests:(id)arg2;	// IMP=0x0000000000055ae7
+ (id)identifiersFromListWriteResponses:(id)arg1 ofWriteRequests:(id)arg2;	// IMP=0x00000000000556f3
+ (id)accessCodeFetchResponsesForReadWriteResponses:(id)arg1 ofWriteRequests:(id)arg2;	// IMP=0x000000000005504e
+ (id)_createReadWriteRequestsForAccessCodeIdentifiersByCharacteristic:(id)arg1;	// IMP=0x0000000000054bbc
+ (id)_createListWriteRequestsForCharacteristics:(id)arg1;	// IMP=0x0000000000054b5b
- (void).cxx_destruct;	// IMP=0x0000000000053904
@property(readonly) HMDAccessCodeManagerContext *context; // @synthesize context=_context;
- (id)logIdentifier;	// IMP=0x0000000000053874
- (id)_createModificationResponsesForWriteResponses:(id)arg1 ofRequestPairs:(id)arg2;	// IMP=0x000000000005385b
- (id)_createWriteRequestsForModificationRequests:(id)arg1;	// IMP=0x00000000000537ab
- (id)_createReadWriteRequestsForAccessCodeIdentifiers:(id)arg1;	// IMP=0x00000000000532e9
- (id)_characteristicsOfType:(id)arg1 fromAccessoriesWithUUIDs:(id)arg2;	// IMP=0x0000000000052f3e
- (id)_createListWriteRequestsForAccessoriesWithUUIDS:(id)arg1;	// IMP=0x0000000000052ed4
- (id)_createConstraintsReadRequestsForAccessoriesWithUUIDs:(id)arg1;	// IMP=0x0000000000052e6a
- (id)_readAccessCodesFromAccessoriesWithUUIDs:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x0000000000052a9d
- (id)_readConstraintsFromAccessoriesWithUUIDs:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x00000000000527b4
- (id)performAccessCodeModificationRequests:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x00000000000523b0
- (id)_performReadRequests:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x0000000000052293
- (id)_performWriteRequests:(id)arg1 withRetries:(_Bool)arg2;	// IMP=0x0000000000052176
- (void)_readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000051f0b
- (void)readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000051ef9
- (id)readConstraintsFromAccessoriesWithUUIDs:(id)arg1;	// IMP=0x0000000000051ee2
- (id)_readAccessCodeWithIdentifier:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x0000000000051b85
- (id)removeAllAccessCodesWithValue:(id)arg1;	// IMP=0x0000000000051a2c
- (id)readAccessCodeWithIdentifier:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x0000000000051a1a
- (id)readAccessCodesFromAccessoriesWithUUIDs:(id)arg1;	// IMP=0x0000000000051968
- (void)configure;	// IMP=0x00000000000518a1
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000051833

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

