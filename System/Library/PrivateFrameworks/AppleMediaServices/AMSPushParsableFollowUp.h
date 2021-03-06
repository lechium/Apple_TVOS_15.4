//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSPushParsable-Protocol.h>
#import <AppleMediaServices/AMSUserNotificationIntentDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableFollowUp : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate, AMSBagConsumer>
{
}

+ (id)_createNotificationFromFollowUpItem:(id)arg1;	// IMP=0x00000000001e7dfa
+ (id)_createFollowUpItemFromNotification:(id)arg1;	// IMP=0x00000000001e725c
+ (id)_createFollowUpItemFromPayload:(id)arg1;	// IMP=0x00000000001e629f
+ (_Bool)_shouldClearFollowUpFromPayload:(id)arg1;	// IMP=0x00000000001e620d
+ (_Bool)_shouldAllowFollowUp:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001e59dd
+ (void)_performPostWithPayload:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001e5571
+ (void)_performClearWithPayload:(id)arg1;	// IMP=0x00000000001e50aa
+ (id)createBagForSubProfile;	// IMP=0x00000000001e5010
+ (id)bagSubProfileVersion;	// IMP=0x00000000001e4fc0
+ (id)bagSubProfile;	// IMP=0x00000000001e4f70
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001e49f5
+ (_Bool)shouldSkipAccountCheck;	// IMP=0x00000000001e49ed
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001e491a
+ (id)sharedISO8601DateFormatter;	// IMP=0x00000000001e48c5
+ (_Bool)isDeviceOfferNotification:(id)arg1;	// IMP=0x00000000001e4850
+ (void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001e4238

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

