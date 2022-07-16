//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAFXPCSessionConfig, NSUUID, NSXPCConnection;
@protocol AAFXPCSessionDelegate, OS_dispatch_queue;

@interface AAFXPCSession : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    id <AAFXPCSessionDelegate> _delegate;	// 16 = 0x10
    id __proxy;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    AAFXPCSessionConfig *_remoteServiceConfig;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004676
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) AAFXPCSessionConfig *remoteServiceConfig; // @synthesize remoteServiceConfig=_remoteServiceConfig;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) id _proxy; // @synthesize _proxy=__proxy;
@property(nonatomic) __weak id <AAFXPCSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)destroyXPCConnection;	// IMP=0x0000000000003d8c
- (void)invalidate;	// IMP=0x0000000000003d2b
- (void)suspend;	// IMP=0x0000000000003c9f
- (void)resume;	// IMP=0x0000000000003bf5
- (id)syncRemoteServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003bdf
- (id)syncRemoteServiceProxy;	// IMP=0x0000000000003b60
- (id)remoteServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003b4a
- (id)remoteServiceProxy;	// IMP=0x0000000000003acb
- (id)initWithRemoteServiceConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000039db

@end

