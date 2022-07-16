//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol NACancelable, NAScheduler;

@interface NAValueThrottler : NSObject
{
    double _throttleInterval;	// 8 = 0x8
    id <NAScheduler> _updateScheduler;	// 16 = 0x10
    id _value;	// 24 = 0x18
    NSMutableSet *_observerBlocks;	// 32 = 0x20
    id <NACancelable> _valueUpdateCancelationToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000007069
@property(retain, nonatomic) id <NACancelable> valueUpdateCancelationToken; // @synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken;
@property(readonly, nonatomic) NSMutableSet *observerBlocks; // @synthesize observerBlocks=_observerBlocks;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id <NAScheduler> updateScheduler; // @synthesize updateScheduler=_updateScheduler;
@property(readonly, nonatomic) double throttleInterval; // @synthesize throttleInterval=_throttleInterval;
@property(readonly, nonatomic) _Bool hasPendingValueChange;
- (void)flushValueChanges;	// IMP=0x0000000000006f5b
- (id)observeValueChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006d6e
- (void)_notifyObserversOfValueUpdate;	// IMP=0x0000000000006c08
- (void)_enqueueValueUpdateIfNecessary;	// IMP=0x0000000000006a68
- (void)setValue:(id)arg1;	// IMP=0x000000000000697e
- (void)setValue:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x000000000000690f
- (void)dealloc;	// IMP=0x00000000000068a4
- (id)init;	// IMP=0x000000000000688f
- (id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2;	// IMP=0x00000000000067b7
- (id)initWithThrottleInterval:(double)arg1;	// IMP=0x00000000000067a3

@end
