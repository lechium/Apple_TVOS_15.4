//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNSuspendableSchedulerDecorator, NSString;
@protocol CNObserver;

@interface _CNBufferedObserver : NSObject <CNObserver>
{
    CNSuspendableSchedulerDecorator *_observerScheduler;	// 8 = 0x8
    id <CNObserver> _observer;	// 16 = 0x10
}

+ (id)bufferObserver:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x0000000000055d41
- (void).cxx_destruct;	// IMP=0x00000000000561c7
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly, nonatomic) id <CNObserver> observer; // @synthesize observer=_observer;
- (void)observerDidFailWithError:(id)arg1;	// IMP=0x00000000000560a3
- (void)observerDidComplete;	// IMP=0x0000000000055fe4
- (void)observerDidReceiveResult:(id)arg1;	// IMP=0x0000000000055ed4
- (void)resume;	// IMP=0x0000000000055e97
- (id)initWithObserver:(id)arg1 scheduler:(id)arg2;	// IMP=0x0000000000055def

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

