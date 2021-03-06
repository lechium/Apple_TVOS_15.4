//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/TVSExtensionRequestOberver-Protocol.h>
#import <TVServices/TVTopShelfContentExtensionControlling-Protocol.h>

@class NSExtension, NSMutableArray, NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue, TVTopShelfContentExtensionControllingDelegate;

@interface TVTopShelfModernContentExtensionController : NSObject <TVSExtensionRequestOberver, TVTopShelfContentExtensionControlling>
{
    _Bool _invalidated;	// 8 = 0x8
    _Bool _settingUpConnection;	// 9 = 0x9
    int _topShelfItemsDidChangeNotifyToken;	// 12 = 0xc
    id <TVTopShelfContentExtensionControllingDelegate> _delegate;	// 16 = 0x10
    NSString *_containingBundleIdentifier;	// 24 = 0x18
    NSString *_extensionPointIdentifier;	// 32 = 0x20
    NSExtension *_extension;	// 40 = 0x28
    NSUUID *_extensionRequestIdentifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;	// 56 = 0x38
    NSXPCConnection *_connection;	// 64 = 0x40
    NSMutableArray *_pendingRequestBlocks;	// 72 = 0x48
}

+ (_Bool)_connectionHasPrivateEntitlement:(id)arg1;	// IMP=0x000000000002f89b
+ (_Bool)isTopShelfApplicationExtensionRecord:(id)arg1;	// IMP=0x000000000002d13f
- (void).cxx_destruct;	// IMP=0x0000000000030fa8
@property(nonatomic) _Bool settingUpConnection; // @synthesize settingUpConnection=_settingUpConnection;
@property(retain, nonatomic) NSMutableArray *pendingRequestBlocks; // @synthesize pendingRequestBlocks=_pendingRequestBlocks;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int topShelfItemsDidChangeNotifyToken; // @synthesize topShelfItemsDidChangeNotifyToken=_topShelfItemsDidChangeNotifyToken;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(copy, nonatomic) NSUUID *extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *containingBundleIdentifier; // @synthesize containingBundleIdentifier=_containingBundleIdentifier;
@property(nonatomic) __weak id <TVTopShelfContentExtensionControllingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_invalidate;	// IMP=0x0000000000030d8f
- (void)_resetRequestData;	// IMP=0x0000000000030d5d
- (void)_cancelExtensionRequest;	// IMP=0x0000000000030ba8
- (void)_stopObservingTopShelfContentDistributedNotifications;	// IMP=0x0000000000030b23
- (void)_startObservingTopShelfContentDistributedNotifications;	// IMP=0x0000000000030a63
- (void)_startExtensionRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030120
- (void)_setupConnection;	// IMP=0x000000000002fc82
- (void)_performWithExtensionConnectionHelper:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f904
- (void)_performWithExtensionConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f768
- (void)_handleRequestObservance:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f5d4
- (id)_logPrefix;	// IMP=0x000000000002f563
- (void)_handleTopShelfContentDidChangeDistributedNotification:(id)arg1;	// IMP=0x000000000002f33f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002f2ed
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002f1fb
- (id)succinctDescriptionBuilder;	// IMP=0x000000000002f17e
- (id)succinctDescription;	// IMP=0x000000000002f12e
@property(readonly, copy) NSString *description;
- (void)tvs_extension:(id)arg1 requestInterrupted:(id)arg2;	// IMP=0x000000000002ee1f
- (void)tvs_extension:(id)arg1 request:(id)arg2 didCancelWithError:(id)arg3;	// IMP=0x000000000002eb73
- (void)tvs_extension:(id)arg1 request:(id)arg2 didCompleteWithItems:(id)arg3;	// IMP=0x000000000002e8c7
- (void)invalidate;	// IMP=0x000000000002e840
- (void)performCustomActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002e15f
- (void)didShowItemWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000002ddba
- (void)didSelectActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4;	// IMP=0x000000000002d979
- (void)loadTopShelfContentAndAttributes:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d274
- (void)dealloc;	// IMP=0x000000000002d0c3
- (id)initWithExtension:(id)arg1 containingBundleIdentifier:(id)arg2;	// IMP=0x000000000002cf54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

