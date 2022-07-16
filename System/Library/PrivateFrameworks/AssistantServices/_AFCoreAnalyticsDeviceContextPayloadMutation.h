//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFCoreAnalyticsDeviceContextPayloadMutating-Protocol.h>

@class AFCoreAnalyticsDeviceContextPayload, NSNumber, NSString;

@interface _AFCoreAnalyticsDeviceContextPayloadMutation : NSObject <AFCoreAnalyticsDeviceContextPayloadMutating>
{
    AFCoreAnalyticsDeviceContextPayload *_baseModel;	// 8 = 0x8
    NSString *_nearbyProductType;	// 16 = 0x10
    NSString *_proximity;	// 24 = 0x18
    NSNumber *_alarmFiring;	// 32 = 0x20
    NSNumber *_timerFiring;	// 40 = 0x28
    NSString *_playbackState;	// 48 = 0x30
    NSNumber *_playbackRecency;	// 56 = 0x38
    NSString *_homeAnnouncementState;	// 64 = 0x40
    NSNumber *_homeAnnouncementRecency;	// 72 = 0x48
    NSString *_nearbyDevicesRequestIdentifier;	// 80 = 0x50
    NSString *_targetedResult;	// 88 = 0x58
    NSString *_contextIdentifier;	// 96 = 0x60
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasNearbyProductType:1;
        unsigned int hasProximity:1;
        unsigned int hasAlarmFiring:1;
        unsigned int hasTimerFiring:1;
        unsigned int hasPlaybackState:1;
        unsigned int hasPlaybackRecency:1;
        unsigned int hasHomeAnnouncementState:1;
        unsigned int hasHomeAnnouncementRecency:1;
        unsigned int hasNearbyDevicesRequestIdentifier:1;
        unsigned int hasTargetedResult:1;
        unsigned int hasContextIdentifier:1;
    } _mutationFlags;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000004229
- (id)generate;	// IMP=0x0000000000003e86
- (void)setContextIdentifier:(id)arg1;	// IMP=0x0000000000003e64
- (void)setTargetedResult:(id)arg1;	// IMP=0x0000000000003e42
- (void)setNearbyDevicesRequestIdentifier:(id)arg1;	// IMP=0x0000000000003e20
- (void)setHomeAnnouncementRecency:(id)arg1;	// IMP=0x0000000000003dfe
- (void)setHomeAnnouncementState:(id)arg1;	// IMP=0x0000000000003dde
- (void)setPlaybackRecency:(id)arg1;	// IMP=0x0000000000003dbe
- (void)setPlaybackState:(id)arg1;	// IMP=0x0000000000003d9e
- (void)setTimerFiring:(id)arg1;	// IMP=0x0000000000003d7e
- (void)setAlarmFiring:(id)arg1;	// IMP=0x0000000000003d5e
- (void)setProximity:(id)arg1;	// IMP=0x0000000000003d3e
- (void)setNearbyProductType:(id)arg1;	// IMP=0x0000000000003d1e
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000003cb3
- (id)init;	// IMP=0x0000000000003c9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
