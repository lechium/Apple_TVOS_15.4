//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, TRTransferBrowserDelegate;

@interface TRTransferBrowser : NSObject
{
    CDStruct_a231404c *_aesContext;	// 8 = 0x8
    struct AirPlayPairingSessionPrivate *_pairingSession;	// 16 = 0x10
    long long _pairingState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;	// 40 = 0x28
    _Bool _started;	// 48 = 0x30
    _Bool _waitingOnSemaphore;	// 49 = 0x31
    id <TRTransferBrowserDelegate> _delegate;	// 56 = 0x38
    long long _state;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000003448
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <TRTransferBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (int)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;	// IMP=0x00000000000030df
- (int)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;	// IMP=0x0000000000002d5a
- (id)_didReceiveEncryptedData:(id)arg1;	// IMP=0x0000000000002878
- (void)_didFinishPairing;	// IMP=0x00000000000025e4
- (void)_beginScanningIfPowered;	// IMP=0x00000000000025de
- (void)stop;	// IMP=0x000000000000257f
- (void)defer;	// IMP=0x0000000000002579
- (void)start;	// IMP=0x0000000000002508
- (void)dealloc;	// IMP=0x00000000000024b2
- (id)init;	// IMP=0x0000000000002440

@end
