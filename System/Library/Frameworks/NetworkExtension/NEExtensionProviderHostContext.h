//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <NetworkExtension/NEExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionProviderProtocol-Protocol.h>

@class NEProcessIdentity, NEUserNotification, NSString, NSXPCConnection;
@protocol NEExtensionProviderHostDelegate, NEExtensionProviderProtocol;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol>
{
    id <NEExtensionProviderProtocol> _vendorContext;	// 8 = 0x8
    NSString *_description;	// 16 = 0x10
    NEUserNotification *_notification;	// 24 = 0x18
    _Bool _stopped;	// 32 = 0x20
    _Bool _isHostingSystemExtension;	// 33 = 0x21
    id <NEExtensionProviderHostDelegate> _delegate;	// 40 = 0x28
    NEProcessIdentity *_extensionProcessIdentity;	// 48 = 0x30
    NSXPCConnection *_vendorConnection;	// 56 = 0x38
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000004a7af
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000004a743
- (void).cxx_destruct;	// IMP=0x000000000004b61a
@property(readonly, nonatomic) _Bool isHostingSystemExtension; // @synthesize isHostingSystemExtension=_isHostingSystemExtension;
@property(readonly, nonatomic) NSXPCConnection *vendorConnection; // @synthesize vendorConnection=_vendorConnection;
@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(retain) NEProcessIdentity *extensionProcessIdentity; // @synthesize extensionProcessIdentity=_extensionProcessIdentity;
@property __weak id <NEExtensionProviderHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) int requiredEntitlement;
- (_Bool)isSignedWithDeveloperID;	// IMP=0x000000000004b575
- (id)copyValueForEntitlement:(id)arg1;	// IMP=0x000000000004b47a
- (void)validateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b2ba
- (void)stopWithReason:(int)arg1;	// IMP=0x000000000004b203
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b145
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b024
- (void)startedWithError:(id)arg1;	// IMP=0x000000000004af7c
- (void)dispose;	// IMP=0x000000000004aef8
- (void)createWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ae86
- (void)wake;	// IMP=0x000000000004ae02
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ad60
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;	// IMP=0x000000000004ac55
- (_Bool)deriveProcessIdentity;	// IMP=0x000000000004aaea
- (id)vendorContext;	// IMP=0x000000000004a81b
- (void)setDescription:(id)arg1;	// IMP=0x000000000004a72f
@property(readonly, copy) NSString *description;
- (id)initWithVendorEndpoint:(id)arg1 processIdentity:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000004a30e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

