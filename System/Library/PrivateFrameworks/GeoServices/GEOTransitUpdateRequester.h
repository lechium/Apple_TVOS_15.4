//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, geo_isolater;

@interface GEOTransitUpdateRequester : NSObject
{
    geo_isolater *_isolater;	// 8 = 0x8
    NSHashTable *_pendingRequests;	// 16 = 0x10
}

+ (id)sharedRequester;	// IMP=0x000000000112ac2c
- (void).cxx_destruct;	// IMP=0x000000000112b43e
- (_Bool)_finishRequest:(id)arg1;	// IMP=0x000000000112b39b
- (void)cancelTransitRouteUpdateRequest:(id)arg1;	// IMP=0x000000000112b2fe
- (void)startTransitRouteUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 networkActivity:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000112ad22
- (id)init;	// IMP=0x000000000112ac81

@end
