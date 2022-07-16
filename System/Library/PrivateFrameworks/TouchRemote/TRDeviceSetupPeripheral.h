//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, TRDeviceSetupPeripheralDelegate;

@interface TRDeviceSetupPeripheral : NSObject
{
    _Bool _performingSetup;	// 8 = 0x8
    _Bool _preparingForSetup;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <TRDeviceSetupPeripheralDelegate> _delegate;	// 24 = 0x18
    CDUnknownBlockType _pendingSendDataHandler;	// 32 = 0x20
    NSString *_authenticatediTunesStoreID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002708c
@property(copy, nonatomic) NSString *authenticatediTunesStoreID; // @synthesize authenticatediTunesStoreID=_authenticatediTunesStoreID;
@property(copy) CDUnknownBlockType pendingSendDataHandler; // @synthesize pendingSendDataHandler=_pendingSendDataHandler;
@property(nonatomic) __weak id <TRDeviceSetupPeripheralDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_legacyAuthenticateWithUserAgent:(id)arg1 deviceGUID:(id)arg2 accountID:(id)arg3 password:(id)arg4 attemptCount:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000266ea
- (_Bool)_sendAction:(id)arg1 sendDataHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000000265d4
- (void)_setupDidFailWithError:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002633f
- (void)_cancelSetupWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000262ad
- (void)_finishSetupWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000260de
- (void)_setUpWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025de6
- (void)_cancelAuthenticationWithReceivedAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025c6f
- (void)_startAuthenticationWithReceivedAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000256cd
- (void)_authenticateWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025556
- (void)_legacyAuthenticateWithAction:(id)arg1 attemptCount:(unsigned long long)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024e25
- (void)_didTapWithSendDataHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024c5e
- (void)_didReceiveData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000248ea
- (void)_didDisconnect;	// IMP=0x00000000000247ee
- (void)cancelSetupForTimeout;	// IMP=0x0000000000024743
- (void)cancelSetupForStateChange;	// IMP=0x0000000000024698
- (void)cancelPreparingForSetup;	// IMP=0x000000000002462a
- (_Bool)performSetupAndReturnError:(id *)arg1;	// IMP=0x00000000000240cf
- (id)init;	// IMP=0x0000000000024077

@end

