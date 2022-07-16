//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, TRTransferServerDelegate;

@interface TRTransferServer : NSObject
{
    CDStruct_a231404c *_aesContext;	// 8 = 0x8
    _Bool _didSendData;	// 16 = 0x10
    struct AirPlayPairingSessionPrivate *_pairingSession;	// 24 = 0x18
    long long _pairingState;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    _Bool _waitingOnSemaphore;	// 57 = 0x39
    id <TRTransferServerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000006717
@property(nonatomic) __weak id <TRTransferServerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;	// IMP=0x000000000000644a
- (int)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;	// IMP=0x0000000000006123
- (id)_onQueue_didReceiveEncryptedData:(id)arg1;	// IMP=0x0000000000005add
- (void)_onQueue_didFinishPairing;	// IMP=0x0000000000005775
- (void)_beginAdvertisingIfPowered;	// IMP=0x000000000000576f
- (void)stop;	// IMP=0x0000000000005710
- (void)start;	// IMP=0x000000000000569f
- (void)dealloc;	// IMP=0x000000000000563a
- (id)init;	// IMP=0x00000000000055c8

@end

