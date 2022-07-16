//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupKit/CULabelable-Protocol.h>
#import <SetupKit/CUMessaging-Protocol.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString, SKConnection, SKDevice;
@protocol OS_dispatch_queue, SKStepable;

@interface SKSetupBase : NSObject <CULabelable, CUMessaging>
{
    _Bool _activateCalled;	// 8 = 0x8
    unsigned int _controlFlags;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    NSString *_password;	// 32 = 0x20
    int _passwordType;	// 40 = 0x28
    SKDevice *_peerDevice;	// 48 = 0x30
    NSData *_pskData;	// 56 = 0x38
    NSMutableDictionary *_registeredEvents;	// 64 = 0x40
    NSMutableDictionary *_registeredRequests;	// 72 = 0x48
    int _runState;	// 80 = 0x50
    CDUnknownBlockType _sendDataHandler;	// 88 = 0x58
    int _setupType;	// 96 = 0x60
    SKConnection *_skCnx;	// 104 = 0x68
    NSMutableArray *_stepArray;	// 112 = 0x70
    NSObject<SKStepable> *_stepCurrent;	// 120 = 0x78
    struct LogCategory *_ucat;	// 128 = 0x80
    struct LogCategory *_ucatBase;	// 136 = 0x88
    NSString *_label;	// 144 = 0x90
    CDUnknownBlockType _eventHandler;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000000e959
@property(nonatomic) int setupType; // @synthesize setupType=_setupType;
@property(copy, nonatomic) CDUnknownBlockType sendDataHandler; // @synthesize sendDataHandler=_sendDataHandler;
@property(copy, nonatomic) NSData *pskData; // @synthesize pskData=_pskData;
@property(retain, nonatomic) SKDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int controlFlags; // @synthesize controlFlags=_controlFlags;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (_Bool)_runSteps;	// IMP=0x000000000000e805
- (void)_invalidateSteps;	// IMP=0x000000000000e668
- (void)_completedStep:(id)arg1 error:(id)arg2;	// IMP=0x000000000000e468
- (void)_addStep:(id)arg1;	// IMP=0x000000000000e3c5
- (void)addStep:(id)arg1;	// IMP=0x000000000000e33a
- (void)sendRequestID:(id)arg1 requestMessage:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e219
- (void)deregisterRequestID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e161
- (void)registerRequestID:(id)arg1 options:(id)arg2 requestHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e04a
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000df1c
- (void)sendEventID:(id)arg1 eventMessage:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ddfb
- (void)deregisterEventID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dd43
- (void)registerEventID:(id)arg1 options:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000dc2c
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;	// IMP=0x000000000000db6b
- (void)_connectionEnded:(id)arg1;	// IMP=0x000000000000db65
- (void)_connectionStartWithSKConnection:(id)arg1 clientMode:(_Bool)arg2 completeOnFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000d5f2
- (void)_run;	// IMP=0x000000000000d5ec
- (void)receivedData:(id)arg1;	// IMP=0x000000000000d561
- (void)_reportEventType:(int)arg1;	// IMP=0x000000000000d50a
- (void)reportEventType:(int)arg1;	// IMP=0x000000000000d4bc
- (void)_reportEvent:(id)arg1;	// IMP=0x000000000000d415
- (void)reportEvent:(id)arg1;	// IMP=0x000000000000d38a
- (void)_postEvent:(id)arg1;	// IMP=0x000000000000d1ca
- (void)postEventType:(int)arg1;	// IMP=0x000000000000d17c
- (void)postEvent:(id)arg1;	// IMP=0x000000000000d0f1
- (void)_completeWithError:(id)arg1;	// IMP=0x000000000000cfa9
- (void)_invalidated;	// IMP=0x000000000000cef0
- (void)_invalidate;	// IMP=0x000000000000ce81
- (void)invalidate;	// IMP=0x000000000000ce36
- (void)_activate;	// IMP=0x000000000000ce24
- (void)activate;	// IMP=0x000000000000cdd9
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000000cbe3
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000000cb79
- (id)initWithLogCategory:(struct LogCategory *)arg1;	// IMP=0x000000000000caf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
