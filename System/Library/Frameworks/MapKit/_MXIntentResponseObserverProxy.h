//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/INIntentResponseObserver-Protocol.h>

@class NSString;
@protocol _MXIntentResponseObserver;

__attribute__((visibility("hidden")))
@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver>
{
    id <_MXIntentResponseObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010bb46
@property(nonatomic) __weak id <_MXIntentResponseObserver> observer; // @synthesize observer=_observer;
- (void)stopObserving;	// IMP=0x000000000010bb0b
- (void)didReceiveError:(id)arg1;	// IMP=0x000000000010ba95
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;	// IMP=0x000000000010ba0c
- (void)intentResponseDidUpdate:(id)arg1;	// IMP=0x000000000010b995
- (id)initWithObserver:(id)arg1;	// IMP=0x000000000010b931

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
