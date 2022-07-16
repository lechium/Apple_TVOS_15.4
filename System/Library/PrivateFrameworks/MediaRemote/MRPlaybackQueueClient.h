//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueueClient : NSObject
{
    NSMutableDictionary *_controllers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d06b7
- (void)_handleOriginRemovedNotification:(id)arg1;	// IMP=0x00000000001d0410
- (void)_handleApplicationRemovedNotification:(id)arg1;	// IMP=0x00000000001d008d
- (void)_handlePlayerPathRemovedNotification:(id)arg1;	// IMP=0x00000000001cffb1
- (id)subscriptionControllerForPlayerPath:(id)arg1;	// IMP=0x00000000001cfdcf
- (void)dealloc;	// IMP=0x00000000001cfd5a
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000001cfb6d

@end

