//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMDSLScheduler-Protocol.h>

@class BMComputeXPCPublisherClient, BMComputeXPCSubscriptionBookmarkStorage, NSString;
@protocol OS_dispatch_queue;

@interface BMBiomeScheduler : NSObject <BMDSLScheduler>
{
    BMComputeXPCSubscriptionBookmarkStorage *_bookmarkStorage;	// 8 = 0x8
    _Bool _waking;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    BMComputeXPCPublisherClient *_client;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b4a6d
@property(readonly, nonatomic) _Bool waking; // @synthesize waking=_waking;
@property(readonly, nonatomic) BMComputeXPCPublisherClient *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_setBookmarkStorage:(id)arg1;	// IMP=0x00000000000b4a35
- (void)subscribeWithDSLGraph:(id)arg1 forSubscriber:(id)arg2;	// IMP=0x00000000000b4742
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 client:(id)arg3 waking:(_Bool)arg4 storageProvider:(CDUnknownBlockType)arg5;	// IMP=0x00000000000b4730
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 client:(id)arg3 storageProvider:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b471e
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 waking:(_Bool)arg3;	// IMP=0x00000000000b467d
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 client:(id)arg3 waking:(_Bool)arg4;	// IMP=0x00000000000b45aa
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2 client:(id)arg3;	// IMP=0x00000000000b44f4
- (id)initWithIdentifier:(id)arg1 targetQueue:(id)arg2;	// IMP=0x00000000000b445d
- (id)init;	// IMP=0x00000000000b4457

@end
