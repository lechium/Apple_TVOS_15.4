//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPlayMediaIntentExport-Protocol.h>

@class INMediaItem, INMediaSearch, INPrivatePlayMediaIntentData, NSArray, NSDate, NSNumber, NSString;

@interface INPlayMediaIntent <INPlayMediaIntentExport>
{
}

+ (id)_ignoredParameters;	// IMP=0x0000000000112d32
- (id)_spotlightContentType;	// IMP=0x000000000037170e
- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000371708
- (id)parametersByName;	// IMP=0x00000000003716f6
- (void)setVerb:(id)arg1;	// IMP=0x00000000003716f0
- (id)verb;	// IMP=0x00000000003716e3
- (void)setDomain:(id)arg1;	// IMP=0x00000000003716dd
- (id)domain;	// IMP=0x00000000003716d0
- (id)_validParameterCombinationsWithSchema:(id)arg1;	// IMP=0x000000000037138d
- (id)_keyCodableAttributes;	// IMP=0x00000000003712d3
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000037126c
- (id)_dictionaryRepresentation;	// IMP=0x0000000000370eb1
@property(copy, nonatomic) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property(copy, nonatomic) NSString *proxiedBundleIdentifier;
@property(nonatomic) long long parsecCategory;
@property(copy, nonatomic) NSArray *alternativeResults;
@property(copy, nonatomic) NSArray *audioSearchResults;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (void)setMediaSearch:(id)arg1;	// IMP=0x0000000000370851
@property(readonly, copy, nonatomic) INMediaSearch *mediaSearch;
- (void)setPlaybackSpeed:(id)arg1;	// IMP=0x0000000000370754
@property(readonly, copy, nonatomic) NSNumber *playbackSpeed;
- (void)setPlaybackQueueLocation:(long long)arg1;	// IMP=0x0000000000370643
@property(readonly, nonatomic) long long playbackQueueLocation;
@property(copy, nonatomic) NSString *recoID;
@property(copy, nonatomic) NSArray *buckets;
@property(copy, nonatomic) NSDate *expirationDate;
- (void)setResumePlayback:(id)arg1;	// IMP=0x000000000037023b
@property(readonly, copy, nonatomic) NSNumber *resumePlayback;
- (void)setPlaybackRepeatMode:(long long)arg1;	// IMP=0x0000000000370124
@property(readonly, nonatomic) long long playbackRepeatMode;
- (void)setPlayShuffled:(id)arg1;	// IMP=0x0000000000370001
@property(readonly, copy, nonatomic) NSNumber *playShuffled;
- (void)setMediaContainer:(id)arg1;	// IMP=0x000000000036febf
@property(readonly, copy, nonatomic) INMediaItem *mediaContainer;
- (void)setMediaItems:(id)arg1;	// IMP=0x000000000036fdc1
@property(readonly, copy, nonatomic) NSArray *mediaItems;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 playbackQueueLocation:(long long)arg6 playbackSpeed:(id)arg7 mediaSearch:(id)arg8;	// IMP=0x000000000036fbf7
- (id)_categoryVerb;	// IMP=0x000000000036fbea
- (long long)_intentCategory;	// IMP=0x000000000036fbdf
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000036fb6d
- (id)_metadata;	// IMP=0x000000000036fb1d
- (id)_typedBackingStore;	// IMP=0x000000000036fac6
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5;	// IMP=0x000000000001cb0f
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x000000000006ef63
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000008fdb1
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;	// IMP=0x00000000001113a5
- (_Bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;	// IMP=0x0000000000377ae8
- (CDStruct_8caa76fc)_intents_preferredScaledImageSize;	// IMP=0x00000000003ec874

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
