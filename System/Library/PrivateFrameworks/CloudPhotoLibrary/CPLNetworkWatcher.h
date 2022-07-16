//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLNetworkState, NSString;
@protocol CPLNetworkWatcherDelegate, OS_dispatch_queue, OS_nw_path_monitor;

@interface CPLNetworkWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_nw_path_monitor> *_monitor;	// 16 = 0x10
    NSString *_endPoint;	// 24 = 0x18
    CPLNetworkState *_networkState;	// 32 = 0x20
    id <CPLNetworkWatcherDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003d721
@property(nonatomic) __weak id <CPLNetworkWatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CPLNetworkState *networkState; // @synthesize networkState=_networkState;
@property(readonly, nonatomic) NSString *endPoint; // @synthesize endPoint=_endPoint;
- (void)stop;	// IMP=0x000000000003d621
- (void)dealloc;	// IMP=0x000000000003d4f3
- (void)start;	// IMP=0x000000000003d42e
- (void)_updateNetworkState:(id)arg1;	// IMP=0x000000000003d317
- (_Bool)_isRestrictedPath:(id)arg1 policies:(id)arg2;	// IMP=0x000000000003d30f
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000003d273

@end

