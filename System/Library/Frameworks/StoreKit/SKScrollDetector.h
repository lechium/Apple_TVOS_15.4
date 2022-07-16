//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol SKScreenTrackingDelegate;

__attribute__((visibility("hidden")))
@interface SKScrollDetector : NSObject
{
    id <SKScreenTrackingDelegate> _screenTrakingDelegate;	// 8 = 0x8
    NSMutableArray *_subscribedScrollers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002606e
@property(retain, nonatomic) NSMutableArray *subscribedScrollers; // @synthesize subscribedScrollers=_subscribedScrollers;
@property(nonatomic) __weak id <SKScreenTrackingDelegate> screenTrakingDelegate; // @synthesize screenTrakingDelegate=_screenTrakingDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000025b56
- (void)stopListeningForScrollingOfView:(id)arg1;	// IMP=0x0000000000025886
- (void)findAndListenForScrollingOfView:(id)arg1;	// IMP=0x0000000000025571
- (void)dealloc;	// IMP=0x000000000002537c
- (id)init;	// IMP=0x0000000000025368
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000252ea

@end

