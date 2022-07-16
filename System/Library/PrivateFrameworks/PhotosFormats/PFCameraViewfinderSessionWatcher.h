//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PFCameraViewfinderSessionWatcherDelegate;

@interface PFCameraViewfinderSessionWatcher : NSObject
{
    _Bool _isCameraRunning;	// 8 = 0x8
    id <PFCameraViewfinderSessionWatcherDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017302
@property(readonly) __weak id <PFCameraViewfinderSessionWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopWatching;	// IMP=0x00000000000172e6
@property(readonly) _Bool isCameraRunning;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000172a5

@end

