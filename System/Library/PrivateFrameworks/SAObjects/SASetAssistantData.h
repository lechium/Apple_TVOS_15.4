//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSString, SAMediaContentRatingRestrictions, SAVoice, SAWatchData;

@interface SASetAssistantData <SAServerBoundCommand>
{
}

+ (id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000037df6
+ (id)setAssistantData;	// IMP=0x0000000000037de4
- (_Bool)requiresResponse;	// IMP=0x000000000003829a
@property(retain, nonatomic) SAWatchData *watchData;
@property(copy, nonatomic) NSNumber *voiceTriggerEnabled;
@property(nonatomic) _Bool voiceOver;
@property(copy, nonatomic) NSString *userInterfaceIdiom;
@property(copy, nonatomic) NSNumber *uiScale;
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property(retain, nonatomic) SAVoice *ttsVoice;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *temperatureUnit;
@property(copy, nonatomic) NSNumber *storefront;
@property(copy, nonatomic) NSString *region;
@property(copy, nonatomic) NSString *preferredLanguage;
@property(copy, nonatomic) NSArray *parentalRestrictions;
@property(copy, nonatomic) NSString *osVersion;
@property(nonatomic) _Bool mediaPlayerExplicitContentDisallowed;
@property(retain, nonatomic) SAMediaContentRatingRestrictions *mediaContentRatingRestrictions;
@property(copy, nonatomic) NSArray *meCards;
@property(copy, nonatomic) NSString *lastName;
@property(nonatomic) _Bool inRetailStoreDemoMode;
@property(copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;
@property(nonatomic) _Bool handsFree;
@property(copy, nonatomic) NSString *fullStorefrontId;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *deviceVersion;
@property(copy, nonatomic) NSString *deviceEnclosure;
@property(copy, nonatomic) NSString *deviceColor;
@property(copy, nonatomic) NSArray *deviceCapabilities;
@property(copy, nonatomic) NSNumber *debugFlags;
@property(copy, nonatomic) NSString *countryCode;
@property(nonatomic) _Bool censorSpeech;
@property(copy, nonatomic) NSString *anchor;
@property(copy, nonatomic) NSNumber *allowUserGeneratedContent;
@property(copy, nonatomic) NSArray *abSources;
- (id)encodedClassName;	// IMP=0x0000000000037dd7
- (id)groupIdentifier;	// IMP=0x0000000000037dc3

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

