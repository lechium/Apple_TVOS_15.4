//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallProviderManager, CSDClientManager, NSString;
@protocol OS_dispatch_queue;

@interface CSDCallProviderManagerXPCServer : NSObject
{
    CSDClientManager *_clientManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDCallProviderManager *_providerManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000058532
@property(readonly, nonatomic) CSDCallProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x001000000005834e
- (void)unregisterClient:(id)arg1;	// IMP=0x001000000005824c
- (void)registerClient:(id)arg1;	// IMP=0x001000000005814a
- (oneway void)launchAppForDialRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058018
- (oneway void)donateUserIntentForProviderWithIdentifier:(id)arg1;	// IMP=0x0010000000057f07
- (oneway void)providersByIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0010000000057d4f
- (id)pairedHostDeviceProvidersByIdentifierForClient:(id)arg1;	// IMP=0x0010000000057c95
- (id)localProvidersByIdentifierForClient:(id)arg1;	// IMP=0x0010000000057bdb
- (id)providersByIdentifierForClient:(id)arg1;	// IMP=0x0010000000057b21
- (void)invalidate;	// IMP=0x0010000000057a6f
- (id)initWithProviderManager:(id)arg1;	// IMP=0x00100000000574ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

