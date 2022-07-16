//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNObservable;
@protocol CNSchedulerProvider;

@interface _CNFlatMapObservable
{
    CNObservable *_observable;	// 16 = 0x10
    CDUnknownBlockType _decoratorGenerator;	// 24 = 0x18
    id <CNSchedulerProvider> _schedulerProvider;	// 32 = 0x20
}

+ (id)observableWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 decoratorGenerator:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4;	// IMP=0x000000000006716d
+ (id)flatMapWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;	// IMP=0x0000000000067135
+ (id)concatMapWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;	// IMP=0x00000000000670fd
- (void).cxx_destruct;	// IMP=0x0000000000068ce5
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType decoratorGenerator; // @synthesize decoratorGenerator=_decoratorGenerator;
@property(readonly, nonatomic) CNObservable *observable; // @synthesize observable=_observable;
- (id)subscribeInnerObservable:(id)arg1 observer:(id)arg2 context:(id)arg3;	// IMP=0x0000000000067fb2
- (id)subscribe:(id)arg1;	// IMP=0x0000000000067339
- (id)initWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 decoratorGenerator:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4;	// IMP=0x0000000000067217

@end
