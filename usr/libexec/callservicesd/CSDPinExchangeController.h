//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol CSDPinExchangeDelegate;

@interface CSDPinExchangeController : NSObject
{
    NSMutableDictionary *_pendingCodesToDevicesForApproval;	// 8 = 0x8
    id <CSDPinExchangeDelegate> _pinExchangeDelegate;	// 16 = 0x10
    NSString *_outgoingPinRequestIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b1dd2
@property(copy) NSString *outgoingPinRequestIdentifier; // @synthesize outgoingPinRequestIdentifier=_outgoingPinRequestIdentifier;
@property(retain) id <CSDPinExchangeDelegate> pinExchangeDelegate; // @synthesize pinExchangeDelegate=_pinExchangeDelegate;
@property(retain) NSMutableDictionary *pendingCodesToDevicesForApproval; // @synthesize pendingCodesToDevicesForApproval=_pendingCodesToDevicesForApproval;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000b1b78
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000b0f31
- (void)handlePINCodeEnteredSuccessfully:(_Bool)arg1 canceled:(_Bool)arg2 fromDevice:(id)arg3 isPrimaryDevice:(_Bool)arg4;	// IMP=0x00100000000b0e44
- (void)displaySlotsFullNotification;	// IMP=0x00100000000b0d71
- (void)displayMismatchedAccountsNotification;	// IMP=0x00100000000b0c80
- (void)displayPinErrorNotification;	// IMP=0x00100000000b0bad
- (void)removeErrorNotifications;	// IMP=0x00100000000b0b62
- (void)displayErrorNotificationWithMessage:(id)arg1;	// IMP=0x00100000000b0994
- (unsigned long long)randomSixDigitCode;	// IMP=0x00100000000b097d
- (_Bool)sendIDSAction:(id)arg1 toDevices:(id)arg2;	// IMP=0x00100000000b0174
- (_Bool)sendIDSAction:(id)arg1 toDevice:(id)arg2;	// IMP=0x00100000000b00a8
- (void)sendApprovalResponseToDevice:(id)arg1 enteredCorrectly:(_Bool)arg2 wasCancelled:(_Bool)arg3;	// IMP=0x00100000000b006e
- (_Bool)sendApprovalDisplayPinToDevice:(id)arg1;	// IMP=0x00100000000afdec
- (void)sendPinCodeAndPromptForResponseToDevice:(id)arg1 forSenderIdentityUUID:(id)arg2;	// IMP=0x00100000000af7d4
- (id)allIDSTelephonyDevices;	// IMP=0x00100000000af623
- (id)idsDeviceFromUniqueID:(id)arg1;	// IMP=0x00100000000af429
- (void)cancelPinRequests;	// IMP=0x00100000000af298
- (void)requestPinFromDevice:(id)arg1;	// IMP=0x00100000000af0c1
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000aefad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
