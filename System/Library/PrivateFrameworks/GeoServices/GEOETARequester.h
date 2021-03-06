//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, geo_isolater;

@interface GEOETARequester : NSObject
{
    geo_isolater *_isolater;	// 8 = 0x8
    NSHashTable *_pendingSimpleRequests;	// 16 = 0x10
    NSMapTable *_pendingRequests;	// 24 = 0x18
}

+ (id)sharedRequester;	// IMP=0x0000000000c00d5f
- (void).cxx_destruct;	// IMP=0x0000000000c0306a
- (_Bool)_finishRequest:(id)arg1;	// IMP=0x0000000000c02fae
- (_Bool)_finishSimpleRequest:(id)arg1;	// IMP=0x0000000000c02f09
- (void)cancelSimpleETARequest:(id)arg1;	// IMP=0x0000000000c02e6c
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 callbackQueue:(id)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;	// IMP=0x0000000000c02774
- (void)cancelRequest:(id)arg1;	// IMP=0x0000000000c02520
- (void)updateRequest:(id)arg1 callbackQueue:(id)arg2 finished:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c01e32
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 callbackQueue:(id)arg5 willSendRequest:(CDUnknownBlockType)arg6 finished:(CDUnknownBlockType)arg7 networkActivity:(CDUnknownBlockType)arg8 error:(CDUnknownBlockType)arg9;	// IMP=0x0000000000c00fe4
- (void)dealloc;	// IMP=0x0000000000c00e95
- (id)init;	// IMP=0x0000000000c00db4

@end

