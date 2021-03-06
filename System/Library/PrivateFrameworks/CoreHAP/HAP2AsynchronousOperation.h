//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class HAP2PropertyLock, HMFActivity, NSError;

@interface HAP2AsynchronousOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    _Bool _cancelled;	// 10 = 0xa
    NSError *_error;	// 16 = 0x10
    HMFActivity *_activity;	// 24 = 0x18
    HAP2PropertyLock *_propertyLock;	// 32 = 0x20
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000000f414b
- (void).cxx_destruct;	// IMP=0x00000000000f4b20
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000f4b00
- (void)finish;	// IMP=0x00000000000f4af2
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000000f4ae0
- (void)cancel;	// IMP=0x00000000000f4a88
- (void)main;	// IMP=0x00000000000f49e0
- (void)start;	// IMP=0x00000000000f474c
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)isAsynchronous;	// IMP=0x00000000000f4640
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (id)initWithName:(id)arg1 activity:(id)arg2;	// IMP=0x00000000000f43a9
- (id)initWithName:(id)arg1;	// IMP=0x00000000000f4395
- (id)init;	// IMP=0x00000000000f434c
- (id)initWithName:(id)arg1 optionalActivity:(id)arg2;	// IMP=0x00000000000f4239

@end

