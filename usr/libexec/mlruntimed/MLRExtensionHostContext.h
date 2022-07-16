//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface MLRExtensionHostContext : NSExtensionContext
{
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0020000000013268
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00100000000131fc
+ (void)initialize;	// IMP=0x00100000000131ae
- (id)issueSandBoxExtensionsForFileURLs:(id)arg1 requireWrite:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x0020000000013786
- (void)performOnRemoteObjectSynchronously:(_Bool)arg1 WithBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001334f
- (void)performOnRemoteObjectSynchronouslyWithBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013332
- (void)performOnRemoteObjectWithBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013318
- (int)pid;	// IMP=0x00100000000132d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

