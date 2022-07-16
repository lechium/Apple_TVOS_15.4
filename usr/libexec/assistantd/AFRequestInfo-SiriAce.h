//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFRequestInfo.h>

@interface AFRequestInfo (SiriAce)
+ (id)_createAnnounceGroupFaceTimeInviteRequestFromNotification:(id)arg1 appId:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3 isSameTypeAsLastAnnouncement:(_Bool)arg4 appBundleIdOfPreviousAnnouncement:(id)arg5 timeSinceLastAnnouncement:(double)arg6;	// IMP=0x0010000000244955
+ (id)_createAnnounceVoicemailRequestFromNotification:(id)arg1 appId:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3 isSameTypeAsLastAnnouncement:(_Bool)arg4 appBundleIdOfPreviousAnnouncement:(id)arg5 timeSinceLastAnnouncement:(double)arg6;	// IMP=0x001000000024488b
+ (id)_createAnnounceReminderRequestFromNotification:(id)arg1 appId:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3 isSameTypeAsLastAnnouncement:(_Bool)arg4 appBundleIdOfPreviousAnnouncement:(id)arg5 timeSinceLastAnnouncement:(double)arg6;	// IMP=0x001000000024476e
+ (id)_createAnnounceNotificationRequestFromNotification:(id)arg1 appId:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3 isSameTypeAsLastAnnouncement:(_Bool)arg4;	// IMP=0x00100000002446af
+ (id)_createAnnounceInHomeRequestFromBundleID:(id)arg1 announcementIdentifier:(id)arg2 notificationType:(long long)arg3 synchronousBurstIndex:(unsigned long long)arg4;	// IMP=0x00100000002445f0
+ (id)_createAnnounceMessageRequestFromNotification:(id)arg1 appId:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3;	// IMP=0x001000000024453c
+ (id)_createAnnounceIncomingCallRequest:(id)arg1;	// IMP=0x0010000000244534
+ (id)_announceNotificationRequestInfoFromNotificationRequest:(id)arg1 previousRequest:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3;	// IMP=0x0010000000244098
+ (id)_announceIncomingCallRequestInfoFromRequest:(id)arg1;	// IMP=0x0010000000243fac
+ (id)requestInfoFromAnnouncementRequest:(id)arg1 previousRequest:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3;	// IMP=0x0010000000243ea4
- (void)_ad_setHandoffPayload:(id)arg1;	// IMP=0x00100000001ace54
- (id)_ad_speechRequestOptionsWithClientConfiguration:(id)arg1;	// IMP=0x00100000001acc96
- (id)_ad_localRequestCommandWithRequestHelper:(id)arg1;	// IMP=0x00100000001acbd9
- (id)_ad_requestCommandWithRequestHelper:(id)arg1;	// IMP=0x00100000001abc16
@end

