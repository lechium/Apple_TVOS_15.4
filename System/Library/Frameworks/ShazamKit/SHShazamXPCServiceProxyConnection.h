//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHXPCServiceProxy-Protocol.h>

@class NSString, NSXPCConnection;
@protocol SHXPCServiceProxy;

__attribute__((visibility("hidden")))
@interface SHShazamXPCServiceProxyConnection : NSObject <SHXPCServiceProxy>
{
    id _delegate;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    id <SHXPCServiceProxy> _proxy;	// 24 = 0x18
    CDUnknownBlockType _connectionErrorHandler;	// 32 = 0x20
    CDUnknownBlockType _interruptionHandler;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000013c91
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionErrorHandler; // @synthesize connectionErrorHandler=_connectionErrorHandler;
- (void)sendEventSignal:(id)arg1;	// IMP=0x0000000000013bd4
- (void)mediaItemForShazamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001395e
- (void)_fetchLibraryTracksWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000136e8
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0000000000013428
- (void)_libraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013191
- (oneway void)stop;	// IMP=0x00000000000130e7
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0000000000012d6b
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SHXPCServiceProxy> proxy; // @synthesize proxy=_proxy;
- (void)removeDefaultConnectionHandlers;	// IMP=0x0000000000012960
- (void)attachDefaultConnectionHandlers;	// IMP=0x00000000000124f7
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x00000000000120a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

