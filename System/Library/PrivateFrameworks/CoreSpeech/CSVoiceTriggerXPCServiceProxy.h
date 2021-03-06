//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSiriAssertionMonitor, NSHashTable, NSMutableSet;

@interface CSVoiceTriggerXPCServiceProxy : NSObject
{
    _Bool _isPhraseSpotterBypassed;	// 8 = 0x8
    _Bool _isRaiseToSpeakBypassed;	// 9 = 0x9
    NSMutableSet *_activationAssertions;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    CSSiriAssertionMonitor *_assertionMonitor;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000007afc4
- (void).cxx_destruct;	// IMP=0x000000000007c5c6
@property(retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor; // @synthesize assertionMonitor=_assertionMonitor;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool isRaiseToSpeakBypassed; // @synthesize isRaiseToSpeakBypassed=_isRaiseToSpeakBypassed;
@property(nonatomic) _Bool isPhraseSpotterBypassed; // @synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
- (id)fetchVoiceTriggerStats;	// IMP=0x000000000007c4fa
- (void)notifyServiceConnectionLost;	// IMP=0x000000000007c280
- (void)notifyVoiceTriggeredSiriSessionCancelled;	// IMP=0x000000000007c201
- (void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x000000000007bbf7
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x000000000007b5ed
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;	// IMP=0x000000000007b07f
- (id)_fetchAssertionMonitor;	// IMP=0x000000000007b045
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000007b02f
- (void)registerObserver:(id)arg1;	// IMP=0x000000000007b019
- (id)initWithAssertionMonitor:(id)arg1;	// IMP=0x000000000007aef4
- (id)init;	// IMP=0x000000000007aee0

@end

