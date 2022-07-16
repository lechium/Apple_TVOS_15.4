//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPContext, CDPStateController, SFSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationCDPSetup : NSObject
{
    int _cdpApprovalServerState;	// 8 = 0x8
    CDPContext *_cdpContext;	// 16 = 0x10
    CDPStateController *_cdpController;	// 24 = 0x18
    int _cdpSetupRequestState;	// 32 = 0x20
    _Bool _invalidateCalled;	// 36 = 0x24
    unsigned long long _startTicks;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 48 = 0x30
    _Bool _skipSetupRequest;	// 56 = 0x38
    _Bool _skipEscrowFetches;	// 57 = 0x39
    CDUnknownBlockType _completionHandler;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 72 = 0x48
    double _metricSeconds;	// 80 = 0x50
    id _presentingViewController;	// 88 = 0x58
    SFSession *_sfSession;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000009e89a
@property(nonatomic) _Bool skipEscrowFetches; // @synthesize skipEscrowFetches=_skipEscrowFetches;
@property(nonatomic) _Bool skipSetupRequest; // @synthesize skipSetupRequest=_skipSetupRequest;
@property(retain, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property(retain, nonatomic) id presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) double metricSeconds; // @synthesize metricSeconds=_metricSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (int)_runCDPSetupRequest;	// IMP=0x000000000009e5a9
- (int)_runCDPApprovalServerStart;	// IMP=0x000000000009e196
- (void)_run;	// IMP=0x000000000009e11e
- (void)_complete:(id)arg1;	// IMP=0x000000000009df93
- (void)invalidate;	// IMP=0x000000000009def7
- (void)_activate;	// IMP=0x000000000009dd58
- (void)activate;	// IMP=0x000000000009dcf7
- (id)init;	// IMP=0x000000000009dca0

@end

