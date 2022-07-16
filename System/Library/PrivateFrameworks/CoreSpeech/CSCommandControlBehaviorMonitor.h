//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSCommandControlBehaviorMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000101b65
- (void).cxx_destruct;	// IMP=0x00000000001027a6
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)notifyDidStopStream:(id)arg1;	// IMP=0x000000000010252e
- (void)notifyWillStopStream:(id)arg1;	// IMP=0x00000000001022ec
- (void)notifyDidStartStreamWithContext:(id)arg1 successfully:(_Bool)arg2 option:(id)arg3;	// IMP=0x000000000010206c
- (void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2;	// IMP=0x0000000000101df9
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000101d1d
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000101c41
- (id)init;	// IMP=0x0000000000101bba

@end

