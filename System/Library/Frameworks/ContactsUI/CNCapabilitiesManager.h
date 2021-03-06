//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/IDSIDQueryControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate>
{
    _Bool _isListeningToIDSServiceAvailability;	// 8 = 0x8
    _Bool _isListeningToIDSQueryController;	// 9 = 0x9
    NSMutableDictionary *_destinationStatus;	// 16 = 0x10
}

+ (void)_setDefaultCapabilitiesManager:(id)arg1;	// IMP=0x00000000000015fd
+ (id)defaultCapabilitiesManager;	// IMP=0x00000000000015c0
- (void).cxx_destruct;	// IMP=0x0000000000002211
- (_Bool)_isAppAvailable:(id)arg1;	// IMP=0x0000000000002166
- (_Bool)isFaceTimeAppAvailable;	// IMP=0x000000000000215e
- (_Bool)isMessagesAppAvailable;	// IMP=0x0000000000002145
- (_Bool)isMailAppAvailable;	// IMP=0x000000000000212c
- (_Bool)isPhoneAppAvailable;	// IMP=0x0000000000002113
- (_Bool)isFaceTimeAudioAvailable;	// IMP=0x00000000000020f8
- (_Bool)isWeiboServiceAvailable;	// IMP=0x00000000000020ad
- (_Bool)isTwitterServiceAvailable;	// IMP=0x0000000000002062
- (_Bool)hasAdditionalTextTones;	// IMP=0x000000000000205a
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;	// IMP=0x0000000000001f79
- (void)_startListeningToIDSIDQueryControllerIfNecessary;	// IMP=0x0000000000001ead
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;	// IMP=0x0000000000001ddc
- (void)removeIDSServiceAvailabilityListener:(id)arg1;	// IMP=0x0000000000001d4f
- (void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000001ca6
- (id)conferenceURLForDestinationID:(id)arg1;	// IMP=0x0000000000001c91
- (id)conferenceURLForPhoneNumber:(id)arg1;	// IMP=0x0000000000001c7c
- (_Bool)hasPreviouslyConferencedWithID:(id)arg1;	// IMP=0x0000000000001a44
- (_Bool)isConferencingEverGonnaBeAvailable;	// IMP=0x0000000000001a2c
- (_Bool)isConferencingAvailable;	// IMP=0x0000000000001a24
- (_Bool)isMadridConfigured;	// IMP=0x0000000000001998
- (_Bool)isMMSConfigured;	// IMP=0x0000000000001988
- (_Bool)isEmailConfigured;	// IMP=0x00000000000018f4
- (_Bool)hasCameraCapability;	// IMP=0x00000000000018e3
- (_Bool)hasSiriCapability;	// IMP=0x00000000000018d2
- (_Bool)hasForceTouchCapability;	// IMP=0x00000000000018ca
- (_Bool)hasVibratorCapability;	// IMP=0x000000000000187b
- (_Bool)hasSMSCapability;	// IMP=0x000000000000182b
- (_Bool)hasCellularDataCapability;	// IMP=0x000000000000181a
- (_Bool)hasCellularTelephonyHardwareCapability;	// IMP=0x00000000000017ca
- (_Bool)hasCellularTelephonyCapability;	// IMP=0x000000000000177a
- (_Bool)hasTelephonyCapability;	// IMP=0x0000000000001772
- (_Bool)isSensitiveUIAllowed;	// IMP=0x0000000000001761
- (void)dealloc;	// IMP=0x0000000000001611

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

