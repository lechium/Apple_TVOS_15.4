//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/LSInstallationServiceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstaller : NSObject <LSInstallationServiceProtocol>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_databaseQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000130636
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)sendCallbackDeliveryComplete;	// IMP=0x00000000001304cb
- (void)sendCallbackWithDictionary:(id)arg1;	// IMP=0x0000000000130305
- (void)performInstallCall:(id)arg1 withOptions:(id)arg2 installType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000012fe17
- (void)finishInstallationWithInstalledBundleIDs:(id)arg1 lastWasPlaceholder:(_Bool)arg2 installationError:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000012fb98
- (void)_doPerformInstallCall:(id)arg1 withOptions:(id)arg2 installType:(unsigned long long)arg3 notificationJournaller:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000012ef60
- (id)invokeInstallCall:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012ed39
- (_Bool)registerBundle:(id)arg1 withOptions:(id)arg2;	// IMP=0x000000000012ec70
- (_Bool)dispatchRegistrationOfInstallDict:(id)arg1;	// IMP=0x000000000012e990
- (void)performUninstallCall:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000012e531
- (void)_doPerformUninstallCall:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000012d8e8
- (_Bool)unregisterBundle:(id)arg1 placeholderOnly:(_Bool)arg2 notification:(int *)arg3;	// IMP=0x000000000012d79e
- (id)invokeUninstallCall:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012d5ff
- (void)_postProcessingForApp:(id)arg1 type:(id)arg2 notification:(int)arg3;	// IMP=0x000000000012d332
- (void)_preflightAppDeletion:(id)arg1;	// IMP=0x000000000012ca85
- (_Bool)validateEntitlementsForInstallCall:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012c9f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
