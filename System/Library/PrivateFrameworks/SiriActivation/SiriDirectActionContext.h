//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BBBulletin, NSDictionary, UNNotification;

@interface SiriDirectActionContext
{
    NSDictionary *_payload;	// 8 = 0x8
    BBBulletin *_bulletin;	// 16 = 0x10
    UNNotification *_notification;	// 24 = 0x18
}

+ (id)appLaunchDirectActionWithAppBundleId:(id)arg1;	// IMP=0x000000000001591c
+ (id)phoneCallDirectActionWithAppBundleId:(id)arg1;	// IMP=0x00000000000158b0
+ (id)phoneAmbiguousDirectActionWithAppBundleId:(id)arg1;	// IMP=0x0000000000015844
+ (id)musicSearchDirectActionWithAppBundleId:(id)arg1;	// IMP=0x00000000000157d8
+ (id)mapShareEtaDirectActionWithAppBundleId:(id)arg1;	// IMP=0x000000000001576c
+ (id)mapSearchDirectActionWithAppBundleId:(id)arg1;	// IMP=0x0000000000015700
+ (id)messageReplyDirectActionWithAppBundleId:(id)arg1 conversationGUID:(id)arg2;	// IMP=0x0000000000015672
+ (id)messageReadDirectActionWithAppBundleId:(id)arg1 conversationGUID:(id)arg2;	// IMP=0x00000000000155e4
+ (id)messageComposeNewThreadDirectActionWithAppBundleId:(id)arg1 fullName:(id)arg2 phoneOrEmailAddress:(id)arg3;	// IMP=0x0000000000015545
+ (id)messageComposeDirectActionWithAppBundleId:(id)arg1;	// IMP=0x00000000000154d9
+ (id)messageAmbiguousDirectActionWithAppBundleId:(id)arg1;	// IMP=0x000000000001546d
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014898
- (void).cxx_destruct;	// IMP=0x0000000000015bb6
@property(readonly, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
@property(readonly, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (id)_initWithDirectActionEvent:(long long)arg1 appBundleId:(id)arg2 conversationGUID:(id)arg3 fullName:(id)arg4 phoneOrEmailAddress:(id)arg5;	// IMP=0x0000000000015988
- (long long)_directActionEventFromAppIdsAndIntentIdentifiersOfBulletin:(id)arg1 notification:(id)arg2;	// IMP=0x0000000000014efe
- (long long)_directActionEventFromContentTypesOfBulletin:(id)arg1 notification:(id)arg2;	// IMP=0x0000000000014b64
- (id)_intentIdentifiersFromBulletin:(id)arg1 notification:(id)arg2;	// IMP=0x0000000000014b2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014a25
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000148a0
- (id)bundleId;	// IMP=0x0000000000014758
- (long long)directActionEvent;	// IMP=0x00000000000145f7
- (id)description;	// IMP=0x00000000000144b2
- (id)initWithUNNotification:(id)arg1;	// IMP=0x0000000000014444
- (id)initWithBBBulletin:(id)arg1;	// IMP=0x00000000000143d6
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000000014368

@end
