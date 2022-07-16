//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x0040000000030d4f
- (void).cxx_destruct;	// IMP=0x0020000000031244
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)notifyObservers:(id)arg1 endpointId:(id)arg2;	// IMP=0x0010000000030ff0
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000030f47
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000030e9e
- (id)defaultFallbackModelIfNil:(id)arg1;	// IMP=0x0010000000030e67
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030e2b
- (id)init;	// IMP=0x0010000000030da4

@end

