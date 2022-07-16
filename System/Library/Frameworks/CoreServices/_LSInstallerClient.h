//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/LSInstallationServiceCallbackProtocol-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;
@protocol LSMIInstallUninstallCall, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol>
{
    unsigned long long _operationType;	// 8 = 0x8
    NSString *_operationTypeString;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    CDUnknownBlockType _progressBlock;	// 32 = 0x20
    id <LSMIInstallUninstallCall> _miCall;	// 40 = 0x28
    NSDictionary *_options;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_callbackDeliveryGroup;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    _Bool _allCallbacksDeleviered;	// 68 = 0x44
}

+ (id)revertInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000130f44
+ (id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000130e67
+ (id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000130da7
- (void).cxx_destruct;	// IMP=0x0000000000131b56
@property(nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) id <LSMIInstallUninstallCall> miCall; // @synthesize miCall=_miCall;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *operationTypeString; // @dynamic operationTypeString;
- (void)_invalidate;	// IMP=0x000000000013121e
- (void)_waitForAllCallbackMessagesToExecute;	// IMP=0x00000000001311c8
- (void)_beginOperation;	// IMP=0x0000000000131179
@property(readonly) _Bool allCallbacksDeleviered; // @synthesize allCallbacksDeleviered=_allCallbacksDeleviered;
- (void)callbackDeliveryComplete;	// IMP=0x00000000001310e5
- (void)updateCallbackWithData:(id)arg1;	// IMP=0x0000000000131004
- (id)initWithMICall:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001309b0
@property(readonly) NSString *bundleID; // @dynamic bundleID;
@property(readonly, getter=isUninstaller) _Bool uninstaller; // @dynamic uninstaller;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

