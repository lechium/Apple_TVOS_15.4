//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSIntegerMap, BSMutableIntegerMap, TVSObserverSet;

@interface PBPresentationElementFocusCoordinator : NSObject
{
    long long _activeLayoutLevel;	// 8 = 0x8
    long long _highestLayoutLevel;	// 16 = 0x10
    TVSObserverSet *_observers;	// 24 = 0x18
    BSMutableIntegerMap *_levelsToElementsMap;	// 32 = 0x20
    BSIntegerMap *_levelsToLayoutState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000023a640
@property(retain, nonatomic) BSIntegerMap *levelsToLayoutState; // @synthesize levelsToLayoutState=_levelsToLayoutState;
@property(readonly, nonatomic) BSMutableIntegerMap *levelsToElementsMap; // @synthesize levelsToElementsMap=_levelsToElementsMap;
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) long long highestLayoutLevel; // @synthesize highestLayoutLevel=_highestLayoutLevel;
@property(readonly, nonatomic) long long activeLayoutLevel; // @synthesize activeLayoutLevel=_activeLayoutLevel;
- (long long)eventDeferringManagerSystemShellBehavior:(id)arg1 compareRemoteRuleOwningElement:(id)arg2 toElement:(id)arg3 inEnvironment:(id)arg4;	// IMP=0x0010000000239cd0
- (_Bool)eventDeferringManagerSystemShellBehavior:(id)arg1 shouldSuppressRemoteRuleForOwningElement:(id)arg2 inEnvironment:(id)arg3;	// IMP=0x00100000002397d0
- (void)_updateActiveLayoutLevel;	// IMP=0x0010000000238d70
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000238c70
- (void)_deregisterForFocusCoordination:(id)arg1;	// IMP=0x0010000000238bc0
- (void)_registerForFocusCoordination:(id)arg1;	// IMP=0x0010000000238ad0
- (id)description;	// IMP=0x00100000002388b0
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000238850
- (void)addObserver:(id)arg1;	// IMP=0x00100000002387f0
- (id)windowForLayoutLevel:(long long)arg1;	// IMP=0x0010000000238730
- (id)init;	// IMP=0x0010000000238600

@end
