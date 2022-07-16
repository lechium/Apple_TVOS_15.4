//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/TIMetricProviding-Protocol.h>
#import <TextInput/TIUserModeling-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol TIUserModelConfigurationDelegate, TIUserModelDataStoring;

@interface TIUserModel : NSObject <TIUserModeling, TIMetricProviding>
{
    NSString *_inputMode;	// 8 = 0x8
    id <TIUserModelDataStoring> _userModelStore;	// 16 = 0x10
    NSMutableDictionary *_durableCounters;	// 24 = 0x18
    NSMutableDictionary *_userModelValuesCollection;	// 32 = 0x20
    NSDictionary *_settingsDictionary;	// 40 = 0x28
    double _timeOfLastPersist;	// 48 = 0x30
    _Bool _explicitTearDown;	// 56 = 0x38
    _Bool _userModelRateLimitingDisabled;	// 57 = 0x39
    id <TIUserModelConfigurationDelegate> _configurationDelegate;	// 64 = 0x40
    NSArray *_weeklyMetricKeys;	// 72 = 0x48
    NSDate *_fromDate;	// 80 = 0x50
    NSDate *_loadedDate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000618a1
@property _Bool userModelRateLimitingDisabled; // @synthesize userModelRateLimitingDisabled=_userModelRateLimitingDisabled;
@property(retain, nonatomic) NSDate *loadedDate; // @synthesize loadedDate=_loadedDate;
@property(readonly) _Bool explicitTearDown; // @synthesize explicitTearDown=_explicitTearDown;
@property(readonly, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(copy, nonatomic) NSArray *weeklyMetricKeys; // @synthesize weeklyMetricKeys=_weeklyMetricKeys;
@property(readonly, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic) __weak id <TIUserModelConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
- (int)valueForDurableKey:(id)arg1;	// IMP=0x0000000000061770
- (void)addDoubleToTransientCounter:(double)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;	// IMP=0x00000000000616c5
- (void)addIntegerToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;	// IMP=0x000000000006161f
- (void)addToDurableCounter:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000061599
- (void)trackPowerLogIfNecessary;	// IMP=0x0000000000061593
- (_Bool)persistForDate:(id)arg1;	// IMP=0x0000000000060f11
@property(readonly, nonatomic) NSDictionary *cachedSettingsDictionary;
- (void)loadSettings;	// IMP=0x0000000000060dec
- (id)populateSettingsDictionary;	// IMP=0x0000000000060d9c
- (void)doLoad;	// IMP=0x000000000006056c
- (void)loadIfNecessary;	// IMP=0x0000000000060551
- (id)valuesFromContext:(id)arg1;	// IMP=0x00000000000603e5
- (void)configureDurableCounters;	// IMP=0x0000000000060271
- (void)configureDurableCounterForName:(id)arg1;	// IMP=0x00000000000600ec
@property(readonly, nonatomic) NSArray *contexts;
- (void)tearDown;	// IMP=0x00000000000600a1
- (void)dealloc;	// IMP=0x0000000000060058
- (id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 weeklyMetricKeys:(id)arg3 fromDate:(id)arg4 explicitTearDown:(_Bool)arg5;	// IMP=0x000000000005feb2
- (id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2;	// IMP=0x000000000005fe8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
