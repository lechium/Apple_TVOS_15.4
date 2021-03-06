//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MSVDistributedNotificationObserverDelegate-Protocol.h>

@class ML3MusicLibrary, NSMutableArray, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_notificationObservers;	// 16 = 0x10
    NSMutableOrderedSet *_queuedLocalNotifications;	// 24 = 0x18
    NSMutableOrderedSet *_queuedDistributedNotificationNames;	// 32 = 0x20
    ML3MusicLibrary *_library;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001156b0
@property(readonly, nonatomic) __weak ML3MusicLibrary *library; // @synthesize library=_library;
- (void)_postEnqueuedDistributedNotifications;	// IMP=0x000000000011563b
- (void)_postEnqueuedLocalNotifications;	// IMP=0x00000000001155dc
- (id)_observerForDistributedName:(id)arg1;	// IMP=0x0000000000115417
- (id)_observerForLocalName:(id)arg1;	// IMP=0x0000000000115252
- (_Bool)observerShouldForwardDistributedNotification:(id)arg1;	// IMP=0x000000000011509b
- (void)enqueueDistributedNotificationNamed:(id)arg1;	// IMP=0x000000000011500e
- (void)enqueueLocalNotificationNamed:(id)arg1;	// IMP=0x0000000000114f90
- (void)enqueueLocalNotification:(id)arg1;	// IMP=0x0000000000114f03
- (void)removeObserverWithLocalName:(id)arg1;	// IMP=0x0000000000114d0e
- (void)removeObserverWithDistributedName:(id)arg1;	// IMP=0x0000000000114b19
- (void)addObserverForDistributedName:(id)arg1 localName:(id)arg2;	// IMP=0x0000000000114a86
- (id)initWithLibrary:(id)arg1 distributedAndLocalNames:(id)arg2;	// IMP=0x0000000000114850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

