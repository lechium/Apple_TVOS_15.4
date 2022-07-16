//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSDictionary, NSString;
@protocol CXCallDirectoryNSExtensionManagerDelegate, OS_dispatch_queue;

@interface CXCallDirectoryNSExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <CXCallDirectoryNSExtensionManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    id _extensionMatchingContext;	// 32 = 0x20
    NSDictionary *_extensions;	// 40 = 0x28
}

+ (id)baseExtensionMatchingAttributes;	// IMP=0x0000000000002324
- (void).cxx_destruct;	// IMP=0x0000000000003473
@property(copy, nonatomic) NSDictionary *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) id extensionMatchingContext; // @synthesize extensionMatchingContext=_extensionMatchingContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallDirectoryNSExtensionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x0000000000002f6e
- (void)_extensionForIdentifier:(id)arg1 containingAppBundleURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002cf7
- (void)extensionWithIdentifier:(id)arg1 inContainingAppWithProcessIdentifier:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002a58
- (void)extensionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000029e2
- (void)_beginMatchingExtensionsIfNecessary;	// IMP=0x000000000000239d
- (void)beginMatchingExtensions;	// IMP=0x000000000000229d
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000210d
- (void)dealloc;	// IMP=0x000000000000202c
- (id)init;	// IMP=0x0000000000001f90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
