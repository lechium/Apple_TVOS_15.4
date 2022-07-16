//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol VOTMapsExplorationGestureManagerDelegate;

@interface VOTMapsExplorationGestureManager
{
    NSArray *_explorationSegments;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
    long long _selectionIndex;	// 24 = 0x18
    double _movedAngle;	// 32 = 0x20
    double _lastAngle;	// 40 = 0x28
    _Bool _recentlyMoved;	// 48 = 0x30
    struct CGPoint _currentLocation;	// 56 = 0x38
    struct CGPoint _currentCenter;	// 72 = 0x48
    id <VOTMapsExplorationGestureManagerDelegate> _mapsExplorationGestureManagerDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000005718d
@property(nonatomic) __weak id <VOTMapsExplorationGestureManagerDelegate> mapsExplorationGestureManagerDelegate; // @synthesize mapsExplorationGestureManagerDelegate=_mapsExplorationGestureManagerDelegate;
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x0010000000057158
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x0010000000057150
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x0010000000057148
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x0010000000057140
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x0010000000057138
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x0010000000057130
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x0010000000057128
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x0010000000057120
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x0010000000057118
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x0010000000057112
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x001000000005710c
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x0010000000057104
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x00100000000570fc
- (void)_playSound:(id)arg1;	// IMP=0x0010000000057086
- (void)_speakText:(id)arg1 doesNotInterrupt:(_Bool)arg2 cannotBeInterrupted:(_Bool)arg3;	// IMP=0x0010000000056fed
- (long long)indexForPoint:(struct CGPoint)arg1;	// IMP=0x0010000000056d02
- (void)processTouch:(struct CGPoint)arg1;	// IMP=0x0010000000056ba4
- (id)explorationSegmentsForRoadsWithAngles:(id)arg1;	// IMP=0x00100000000567f0
- (_Bool)processEvent:(id)arg1;	// IMP=0x00100000000565e4
- (_Bool)handleVerbosityChangeIncreasing:(_Bool)arg1;	// IMP=0x0010000000056560
- (_Bool)handleSelection;	// IMP=0x0010000000056334
- (_Bool)handleTracking:(struct CGPoint)arg1;	// IMP=0x0010000000056165
- (void)setActive:(_Bool)arg1;	// IMP=0x0010000000055fbd
- (void)endExploration;	// IMP=0x0010000000055f80
- (void)beginExploration;	// IMP=0x0010000000055efa
- (_Bool)explorationIsPending;	// IMP=0x0010000000055eb6
- (_Bool)explorationIsActive;	// IMP=0x0010000000055e72
- (id)currentIntersectionInformation;	// IMP=0x0010000000055e22
- (void)updateCurrentLocation;	// IMP=0x0010000000055dc6
- (void)updateExplorationSegments;	// IMP=0x0010000000055c9a
- (id)currentMap;	// IMP=0x0010000000055b6b
- (id)init;	// IMP=0x0010000000055a4f

@end

