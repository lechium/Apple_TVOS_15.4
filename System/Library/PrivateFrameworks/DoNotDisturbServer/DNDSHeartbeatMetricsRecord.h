//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSHeartbeatMetricsProtocol-Protocol.h>

@class NSNumber, NSString;

@interface DNDSHeartbeatMetricsRecord : NSObject <DNDSHeartbeatMetricsProtocol>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _manuallyEnabled;	// 9 = 0x9
    NSNumber *_numberOfSessions;	// 16 = 0x10
    NSNumber *_numberOfManualSessions;	// 24 = 0x18
    _Bool _enabledFromControlCenterPhone;	// 32 = 0x20
    _Bool _enabledFromControlCenterWatch;	// 33 = 0x21
    _Bool _enabledForOneHour;	// 34 = 0x22
    _Bool _enabledUntilEvening;	// 35 = 0x23
    _Bool _enabledUntilMorning;	// 36 = 0x24
    _Bool _enabledAtLocation;	// 37 = 0x25
    _Bool _enabledDuringEvent;	// 38 = 0x26
    _Bool _enabledDrivingMode;	// 39 = 0x27
    _Bool _enabledSleepMode;	// 40 = 0x28
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x0000000000053ae3
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;	// IMP=0x0000000000053acd
- (void).cxx_destruct;	// IMP=0x0000000000054165
@property(readonly, nonatomic) _Bool enabledSleepMode; // @synthesize enabledSleepMode=_enabledSleepMode;
@property(readonly, nonatomic) _Bool enabledDrivingMode; // @synthesize enabledDrivingMode=_enabledDrivingMode;
@property(readonly, nonatomic) _Bool enabledDuringEvent; // @synthesize enabledDuringEvent=_enabledDuringEvent;
@property(readonly, nonatomic) _Bool enabledAtLocation; // @synthesize enabledAtLocation=_enabledAtLocation;
@property(readonly, nonatomic) _Bool enabledUntilMorning; // @synthesize enabledUntilMorning=_enabledUntilMorning;
@property(readonly, nonatomic) _Bool enabledUntilEvening; // @synthesize enabledUntilEvening=_enabledUntilEvening;
@property(readonly, nonatomic) _Bool enabledForOneHour; // @synthesize enabledForOneHour=_enabledForOneHour;
@property(readonly, nonatomic) _Bool enabledFromControlCenterWatch; // @synthesize enabledFromControlCenterWatch=_enabledFromControlCenterWatch;
@property(readonly, nonatomic) _Bool enabledFromControlCenterPhone; // @synthesize enabledFromControlCenterPhone=_enabledFromControlCenterPhone;
@property(readonly, copy, nonatomic) NSNumber *numberOfManualSessions; // @synthesize numberOfManualSessions=_numberOfManualSessions;
@property(readonly, copy, nonatomic) NSNumber *numberOfSessions; // @synthesize numberOfSessions=_numberOfSessions;
@property(readonly, nonatomic) _Bool manuallyEnabled; // @synthesize manuallyEnabled=_manuallyEnabled;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x0000000000053ce5
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053a9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053a94
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000053454
@property(readonly) unsigned long long hash;
- (id)_initWithEnabled:(_Bool)arg1 manuallyEnabled:(_Bool)arg2 numberOfSessions:(id)arg3 numberOfManualSessions:(id)arg4 enabledFromControlCenterPhone:(_Bool)arg5 enabledFromControlCenterWatch:(_Bool)arg6 enabledForOneHour:(_Bool)arg7 enabledUntilEvening:(_Bool)arg8 enabledUntilMorning:(_Bool)arg9 enabledAtLocation:(_Bool)arg10 enabledDuringEvent:(_Bool)arg11 enabledDrivingMode:(_Bool)arg12 enabledSleepMode:(_Bool)arg13;	// IMP=0x00000000000531c1
- (id)_initWithRecord:(id)arg1;	// IMP=0x000000000005300f
- (id)init;	// IMP=0x0000000000052ffb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

