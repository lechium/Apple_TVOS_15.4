//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NAIdentifiable-Protocol.h>

@class HMMediaProfile, MTAlarm, NSString;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItem <NAIdentifiable>
{
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 8 = 0x8
    HMMediaProfile *_mediaProfile;	// 16 = 0x10
    MTAlarm *_alarm;	// 24 = 0x18
    NSString *_alarmIdentifier;	// 32 = 0x20
}

+ (id)na_identity;	// IMP=0x000000000022d37a
- (void).cxx_destruct;	// IMP=0x000000000022d648
@property(copy, nonatomic) NSString *alarmIdentifier; // @synthesize alarmIdentifier=_alarmIdentifier;
@property(readonly, copy, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
@property(readonly, nonatomic) HMMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2;	// IMP=0x000000000022d570
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022d49f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

