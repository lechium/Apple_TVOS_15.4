//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableIndexSet;
@protocol CNScheduler;

@interface _CNCombineLatestObservable
{
    NSArray *_observables;	// 16 = 0x10
    NSMutableArray *_results;	// 24 = 0x18
    NSMutableArray *_tokens;	// 32 = 0x20
    NSMutableIndexSet *_activeObservableIndexes;	// 40 = 0x28
    NSMutableIndexSet *_silentObservableIndexes;	// 48 = 0x30
    id <CNScheduler> _resultScheduler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000404b3
@property(readonly, nonatomic) id <CNScheduler> resultScheduler; // @synthesize resultScheduler=_resultScheduler;
@property(readonly, nonatomic) NSMutableIndexSet *silentObservableIndexes; // @synthesize silentObservableIndexes=_silentObservableIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *activeObservableIndexes; // @synthesize activeObservableIndexes=_activeObservableIndexes;
@property(readonly, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSArray *observables; // @synthesize observables=_observables;
- (void)observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3;	// IMP=0x00000000000401ef
- (void)observableAtIndexDidComplete:(unsigned long long)arg1 forObserver:(id)arg2;	// IMP=0x000000000003ffd7
- (void)observableAtIndex:(unsigned long long)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3;	// IMP=0x000000000003fd53
- (id)subscribe:(id)arg1;	// IMP=0x000000000003f72a
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f6bb
- (id)initWithObservables:(id)arg1 resultScheduler:(id)arg2 schedulerProvider:(id)arg3;	// IMP=0x000000000003f41d
- (id)initWithObservables:(id)arg1;	// IMP=0x000000000003f39a

@end

