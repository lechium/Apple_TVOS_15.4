//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPNetworkObserver : NSObject
{
    int _musicCellularNetworkingAllowedNotifyToken;	// 8 = 0x8
    int _videosPreferencesChangedToken;	// 12 = 0xc
    long long _networkUsageCount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    _Bool _videosAllowsCellularStreaming;	// 32 = 0x20
}

+ (id)sharedNetworkObserver;	// IMP=0x0000000000225f3e
- (void).cxx_destruct;	// IMP=0x0000000000225ab8
@property(readonly, nonatomic) _Bool isUsingNetwork;
@property(readonly, nonatomic, getter=isStoreCellularNetworkingAllowed) _Bool storeCellularNetworkingAllowed;
@property(nonatomic, getter=isMusicCellularDownloadingAllowed) _Bool musicCellularDownloadingAllowed;
@property(nonatomic, getter=isVideoCellularStreamingAllowed) _Bool videoCellularStreamingAllowed;
@property(nonatomic, getter=isMusicCellularStreamingAllowed) _Bool musicCellularStreamingAllowed;
- (void)endUsingNetwork;	// IMP=0x0000000000225641
- (void)beginUsingNetwork;	// IMP=0x00000000002255f6
- (void)dealloc;	// IMP=0x00000000002255b5
- (id)_init;	// IMP=0x000000000022537c
- (id)init;	// IMP=0x000000000022533d

@end

