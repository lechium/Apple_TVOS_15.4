//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerController-Protocol.h>
#import <CoreHAP/HAP2AccessoryServerControllerPrivate-Protocol.h>
#import <CoreHAP/HAP2AccessoryServerSecureTransportDelegate-Protocol.h>

@class HAP2AccessoryServerAccessoryCache, HAP2PropertyLock, HAP2SerializedOperationQueue, NSDate, NSString;
@protocol HAP2AccessoryServerAccessoryFactory, HAP2AccessoryServerEncoding, HAP2AccessoryServerPrivate, HAP2AccessoryServerSecureTransport;

@interface HAP2AccessoryServerController <HAP2AccessoryServerSecureTransportDelegate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerController>
{
    _Bool _readingAttributeDatabase;	// 8 = 0x8
    _Bool _attemptedReReadAttributeDatabase;	// 9 = 0x9
    id <HAP2AccessoryServerPrivate> _accessoryServer;	// 16 = 0x10
    id <HAP2AccessoryServerEncoding> _encoding;	// 24 = 0x18
    id <HAP2AccessoryServerSecureTransport> _transport;	// 32 = 0x20
    NSDate *_sessionStartTime;	// 40 = 0x28
    unsigned long long _sessionNumber;	// 48 = 0x30
    HAP2AccessoryServerAccessoryCache *_accessoryCache;	// 56 = 0x38
    HAP2PropertyLock *_propertyLock;	// 64 = 0x40
    HAP2SerializedOperationQueue *_operationQueue;	// 72 = 0x48
    id <HAP2AccessoryServerAccessoryFactory> _accessoryFactory;	// 80 = 0x50
}

+ (id)controllerIdentifier;	// IMP=0x000000000016f418
+ (id)new;	// IMP=0x000000000016f370
- (void).cxx_destruct;	// IMP=0x0000000000167864
@property(readonly, nonatomic) id <HAP2AccessoryServerSecureTransport> transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) id <HAP2AccessoryServerEncoding> encoding; // @synthesize encoding=_encoding;
@property(nonatomic) __weak id <HAP2AccessoryServerPrivate> accessoryServer; // @synthesize accessoryServer=_accessoryServer;
@property(readonly, copy) NSString *description;
- (void)secureTransport:(id)arg1 needsRemotePairingIdentityForDeviceID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001672e2
- (void)secureTransport:(id)arg1 needsLocalPairingIdentityWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000167079
- (void)secureTransport:(id)arg1 didReceiveEvent:(id)arg2;	// IMP=0x0000000000166c20
- (void)secureTransport:(id)arg1 didChangeState:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x0000000000166a78
- (void)updateMaxRequestTimeout:(double)arg1;	// IMP=0x0000000000166985
- (void)closeSession;	// IMP=0x0000000000166847
- (_Bool)mergeWithNewController:(id)arg1;	// IMP=0x00000000001667b6
- (void)handleUpdatedMetadataWithOldMetadata:(id)arg1;	// IMP=0x0000000000166488
- (id)unpairedIdentifyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001660be
- (id)listPairingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000165aa3
- (id)addPairing:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000165417
- (id)removePairing:(id)arg1 cleanupLocalData:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000164c8e
- (id)disableNotificationsForCharacteristics:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000016484a
- (id)enableNotificationsForCharacteristics:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000163dad
- (id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000163a86
- (id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000163879
- (id)readAttributeDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000163462
- (void)dealloc;	// IMP=0x00000000001633d2
- (id)initWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3 accessoryFactory:(id)arg4;	// IMP=0x000000000016328a
- (id)initWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3;	// IMP=0x00000000001631e3
- (id)init;	// IMP=0x000000000016313b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
