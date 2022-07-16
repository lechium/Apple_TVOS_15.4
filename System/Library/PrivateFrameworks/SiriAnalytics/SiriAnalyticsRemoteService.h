//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriAnalytics/SiriAnalyticsService-Protocol.h>

@class SiriAnalyticsXPCConnection;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsRemoteService : NSObject <SiriAnalyticsService>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SiriAnalyticsXPCConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000bc22
- (id)_packageMessageForXPC:(id)arg1 timestamp:(unsigned long long)arg2 isolatedStreamUUID:(id)arg3;	// IMP=0x000000000000bb59
- (void)barrierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ba2d
- (void)enqueueLargeMessageObjectFromPath:(id)arg1 dataUploadEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b8d4
- (void)resolvePartialMessage:(id)arg1 timestamp:(unsigned long long)arg2 isolatedStreamUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b741
- (void)emitMessage:(id)arg1 timestamp:(unsigned long long)arg2 isolatedStreamUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b5ae
- (id)initWithMachServiceName:(id)arg1;	// IMP=0x000000000000b4e7

@end

