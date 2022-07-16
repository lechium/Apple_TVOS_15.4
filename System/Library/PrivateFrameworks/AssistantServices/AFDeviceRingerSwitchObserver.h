//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>

@class AFNotifyObserver, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFNotifyObserver *_notifyObserver;	// 16 = 0x10
    NSHashTable *_listeners;	// 24 = 0x18
    _Bool _isActive;	// 32 = 0x20
}

+ (id)sharedObserver;	// IMP=0x00000000000fc8ef
- (void).cxx_destruct;	// IMP=0x00000000000fcd71
- (void)_updateStateWithNotifyState:(unsigned long long)arg1;	// IMP=0x00000000000fcc20
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00000000000fcc03
- (void)removeListener:(id)arg1;	// IMP=0x00000000000fcb48
- (void)addListener:(id)arg1;	// IMP=0x00000000000fca8d
@property(readonly, nonatomic) long long state;
- (id)init;	// IMP=0x00000000000fc944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
