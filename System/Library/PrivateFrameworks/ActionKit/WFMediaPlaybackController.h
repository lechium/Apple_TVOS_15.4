//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFMediaPlaybackController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    void *_reconSession;	// 16 = 0x10
}

+ (id)songPropertySet;	// IMP=0x00000000001d73f0
+ (id)bundleIdentifierForMediaPlaybackApplication:(unsigned long long)arg1;	// IMP=0x00000000001d739d
- (void).cxx_destruct;	// IMP=0x00000000001d42e1
@property(nonatomic) void *reconSession; // @synthesize reconSession=_reconSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)goToBeginningOfTrackOnDevicesWithUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d4293
- (void)goToPreviousTrackOnDevicesWithUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d4263
- (void)goToNextTrackOnDevicesWithUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d4233
- (void)skipToPositionOnDevicesWithUIDs:(id)arg1 interval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d4114
- (void)skipBackwardOnDevicesWithUIDs:(id)arg1 interval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d3ff5
- (void)skipForwardOnDevicesWithUIDs:(id)arg1 interval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d3ed6
- (void)pauseOnDevicesWithUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d3ea6
- (void)playOnDevicesWithUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d3e79
- (void)playPauseOnDevicesWithUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d3e49
- (void)sendCommandToDevicesWithUIDs:(unsigned int)arg1 deviceUIDs:(id)arg2 options:(id)arg3 sendTwice:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001d3ca0
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d3bc5
- (void)sendCommand:(unsigned int)arg1 playerPath:(void *)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d3ae6
- (void)sendCommand:(unsigned int)arg1 origin:(void *)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d39a2
- (id)createSendCommandError:(unsigned int)arg1;	// IMP=0x00000000001d38d2
- (void)connectToExternalDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d36c2
- (void)connectToEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d34a7
- (void)getRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d32a1
- (void)getActivePlayerPathWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d3186
- (void)clearQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d30d7
- (void)queueItemsWithIdentifierSets:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d2d7e
- (void)queueiTunesStoreItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d2c7e
- (void)queueMediaItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d2b37
- (void)getPreferredMediaControlOriginWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d2b00
- (void)getPreferredPlaybackOriginWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d2ac9
- (void)getCurrentlyPlayingMediaWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d29ae
- (void)getLocalPlaybackCapabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d299b
- (id)init;	// IMP=0x00000000001d2905
- (void)getPreferredMediaControlDestinationForOutputDeviceUIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000212fef
- (void)getPreferredPlaybackDestinationForPlaybackArchive:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000212ed8

@end

