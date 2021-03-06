//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSXPCConnection, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCInternalTesting : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSXPCConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000138590
@property(readonly, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_registeredIdentityTimestamps;	// IMP=0x00100000001383a0
- (void)assertTransportThreadRealTimeMode:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001382d0
- (void)deviceChangedForDeviceID:(id)arg1 isNearby:(_Bool)arg2 isConnected:(_Bool)arg3 isCloudConnected:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000137d90
- (void)removeConnectionWithConnectionName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000137b60
- (void)fetchPrivateDeviceDataDescription:(CDUnknownBlockType)arg1;	// IMP=0x0010000000137a70
- (void)fetchPrivateClientDataDescriptionForService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001371c0
- (void)fetchStoredUserDescriptions:(CDUnknownBlockType)arg1;	// IMP=0x0010000000136530
- (void)nukeTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001363d0
- (void)nukeCloudKitTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000136270
- (void)fetchCloudKitTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001360e0
- (void)fetchVerifierAccountKeyPublicDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000135f50
- (void)fetchVerifierAccountKeyTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000135dc0
- (void)fetchVerifierCloudKitTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000135c30
- (void)fetchVerifierTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000135aa0
- (void)kickVerificationForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000135890
- (void)performOutstandingKeyTransparencyVerificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000135730
- (void)fetchTransparentEndpointsForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 verifyAgainstTrustCircle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001351d0
- (void)fetchEndpointCacheStateForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001346b0
- (id)transparentEndpointViewer;	// IMP=0x0010000000134640
- (void)toggleDisableDeviceUserToDisabled:(_Bool)arg1;	// IMP=0x0010000000134560
- (void)sendFakePushFromFile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001344f0
- (_Bool)hasEntitlementForPushReplay;	// IMP=0x0010000000134370
- (void)forceAccountRenewalOnService:(id)arg1;	// IMP=0x00100000001340d0
- (void)autoBugCaptureWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000133f90
- (void)popupPromptWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 defaultUrl:(id)arg4 alternateButton:(id)arg5 alternatrUrl:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000133de0
- (void)tapToRadarWithTitle:(id)arg1 message:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000133c80
- (void)checkServerStorageForService:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000133bc0
- (void)setECVersion:(unsigned int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000133b20
- (void)currentECVersionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000133a60
- (void)setForceKeyRoll:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001339c0
- (void)triggerKeyRollWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000133130
- (void)registeredIdentityTimestampsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001330b0
- (void)oneToOneECCQuicktestEncryptionWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000132420
- (id)initWithQueue:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000132330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

