//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSErrorHandlerSession : NSObject
{
    SSXPCConnection *_controlConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    long long _sessionID;	// 32 = 0x20
}

- (void)_setSessionID:(long long)arg1;	// IMP=0x00000000000fee1d
- (void)_setErrorProperties:(id)arg1;	// IMP=0x00000000000fed91
- (void)_setControlConnection:(id)arg1;	// IMP=0x00000000000fed0c
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000000febe0
- (void)retry;	// IMP=0x00000000000feb2f
- (void)redirectToURL:(id)arg1;	// IMP=0x00000000000fea67
- (void)performDefaultHandling;	// IMP=0x00000000000fe9b9
- (void)dealloc;	// IMP=0x00000000000fe961
- (id)init;	// IMP=0x00000000000fe8ca

@end

