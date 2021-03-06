//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    BSServiceConnection *_connection;	// 16 = 0x10
}

+ (_Bool)currentProcessServicesDefaultShellEndpoint;	// IMP=0x000000000003c8ce
+ (id)serviceWithDefaultShellEndpoint;	// IMP=0x000000000003c7b7
+ (id)serviceWithEndpoint:(id)arg1;	// IMP=0x000000000003c76a
+ (id)serviceName;	// IMP=0x000000000003c751
+ (id)new;	// IMP=0x000000000003c0f4
- (void).cxx_destruct;	// IMP=0x000000000003d92e
- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003cf31
- (id)_remoteTarget;	// IMP=0x000000000003ceca
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ce1e
- (_Bool)canOpenApplication:(id)arg1 reason:(long long *)arg2;	// IMP=0x000000000003cc56
- (void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003c9ad
- (void)dealloc;	// IMP=0x000000000003c70f
- (id)_initWithEndpoint:(id)arg1;	// IMP=0x000000000003c266
- (id)init;	// IMP=0x000000000003c0fe

@end

