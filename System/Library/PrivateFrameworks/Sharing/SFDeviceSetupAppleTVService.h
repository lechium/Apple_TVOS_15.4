//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDeviceSetupOperationHandler, SFClient, SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerCNJSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVService : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _advertiseFast;	// 9 = 0x9
    _Bool _invalidateCalled;	// 10 = 0xa
    SFClient *_preventExitForLocaleClient;	// 16 = 0x10
    SFService *_sfService;	// 24 = 0x18
    SFSession *_sfSession;	// 32 = 0x20
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;	// 40 = 0x28
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;	// 48 = 0x30
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;	// 56 = 0x38
    SFDeviceOperationHandlerCNJSetup *_captiveNetworkHandler;	// 64 = 0x40
    _Bool _prefCDPEnabled;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 80 = 0x50
    CDUnknownBlockType _progressHandler;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000b5b4d
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b59af
- (void)_handleBasicConfigRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b5691
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b5521
- (void)_handleSessionEnded:(id)arg1;	// IMP=0x00000000000b53ca
- (void)_handleSessionStarted:(id)arg1;	// IMP=0x00000000000b4efb
- (void)_sfServiceStart;	// IMP=0x00000000000b4bd4
- (void)_reportProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x00000000000b43ac
- (void)_invalidate;	// IMP=0x00000000000b42ec
- (void)invalidate;	// IMP=0x00000000000b428b
- (void)_activate;	// IMP=0x00000000000b418b
- (void)activate;	// IMP=0x00000000000b4128
- (void)_cleanup;	// IMP=0x00000000000b40de
- (void)dealloc;	// IMP=0x00000000000b4083
- (id)init;	// IMP=0x00000000000b402c

@end

