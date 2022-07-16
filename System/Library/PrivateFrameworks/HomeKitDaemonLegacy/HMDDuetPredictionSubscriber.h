//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessageDispatcher, NSObject;
@protocol HMDDuetPredictionSubscriberDataSource, OS_dispatch_queue;

@interface HMDDuetPredictionSubscriber : HMFObject
{
    int _duetPredictionsChangedNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    id <HMDDuetPredictionSubscriberDataSource> _dataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005cad38
@property int duetPredictionsChangedNotificationToken; // @synthesize duetPredictionsChangedNotificationToken=_duetPredictionsChangedNotificationToken;
@property __weak id <HMDDuetPredictionSubscriberDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)dealloc;	// IMP=0x00000000005cac81
- (void)_unregisterForNotifications;	// IMP=0x00000000005cac3c
- (void)_registerForNotifications;	// IMP=0x00000000005caa89
- (id)initWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000005ca9a4

@end
