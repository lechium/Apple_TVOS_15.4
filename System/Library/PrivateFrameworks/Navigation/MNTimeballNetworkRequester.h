//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNTimeballNetworkRequester : NSObject
{
}

- (void)_makeETARequestsWithOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;	// IMP=0x00000000000f75d8
- (void)_makeDirectionsRequestsWithOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;	// IMP=0x00000000000f5f5c
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;	// IMP=0x00000000000f5b9c

@end

