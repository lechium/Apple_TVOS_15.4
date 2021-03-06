//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICPlayActivityAudioQualityProperties, ICPlayActivityEnqueuerProperties, ICPlayActivityEventContainerIDs, ICPlayActivityEventItemIDs, NSArray, NSData, NSDate, NSNumber, NSString, NSTimeZone;

@interface ICMutablePlayActivityEvent
{
}

@property(nonatomic) unsigned long long sharedActivityGroupSizeMax; // @dynamic sharedActivityGroupSizeMax;
@property(nonatomic) unsigned long long sharedActivityGroupSizeCurrent; // @dynamic sharedActivityGroupSizeCurrent;
@property(copy, nonatomic) ICPlayActivityAudioQualityProperties *providedAudioQuality; // @dynamic providedAudioQuality;
@property(copy, nonatomic) ICPlayActivityAudioQualityProperties *targetedAudioQuality; // @dynamic targetedAudioQuality;
@property(nonatomic) unsigned long long playbackFormatPreference; // @dynamic playbackFormatPreference;
@property(nonatomic) unsigned long long audioQualityPreference; // @dynamic audioQualityPreference;
@property(copy, nonatomic) NSData *trackInfo; // @dynamic trackInfo;
@property(copy, nonatomic) NSData *timedMetadata; // @dynamic timedMetadata;
@property(nonatomic) long long systemReleaseType; // @dynamic systemReleaseType;
@property(copy, nonatomic) NSString *storeID; // @dynamic storeID;
@property(copy, nonatomic) NSString *storeFrontID; // @dynamic storeFrontID;
@property(nonatomic) unsigned long long storeAccountID; // @dynamic storeAccountID;
@property(nonatomic) unsigned long long sourceType; // @dynamic sourceType;
@property(copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // @dynamic siriInitiated;
@property(nonatomic) unsigned long long shufflePlayMode; // @dynamic shufflePlayMode;
@property(nonatomic, getter=isSBEnabled) _Bool SBEnabled; // @dynamic SBEnabled;
@property(copy, nonatomic) NSString *requestingBundleVersion; // @dynamic requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @dynamic requestingBundleIdentifier;
@property(nonatomic) unsigned long long repeatPlayMode; // @dynamic repeatPlayMode;
@property(copy, nonatomic) NSData *recommendationData; // @dynamic recommendationData;
@property(nonatomic) unsigned long long reasonHintType; // @dynamic reasonHintType;
@property(copy, nonatomic) NSString *queueGroupingID; // @dynamic queueGroupingID;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @dynamic privateListeningEnabled;
@property(copy, nonatomic) NSString *personalizedContainerID; // @dynamic personalizedContainerID;
@property(nonatomic) long long persistentID; // @dynamic persistentID;
@property(nonatomic, getter=isOffline) _Bool offline; // @dynamic offline;
@property(nonatomic) unsigned long long mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *lyricsLanguage; // @dynamic lyricsLanguage;
@property(nonatomic) unsigned long long lyricsDisplayedCharacterCount; // @dynamic lyricsDisplayedCharacterCount;
@property(nonatomic) unsigned long long itemType; // @dynamic itemType;
@property(nonatomic) double itemStartTime; // @dynamic itemStartTime;
@property(nonatomic) double itemEndTime; // @dynamic itemEndTime;
@property(nonatomic) double itemDuration; // @dynamic itemDuration;
@property(copy, nonatomic) ICPlayActivityEventItemIDs *itemIDs; // @dynamic itemIDs;
@property(nonatomic, getter=isInternalBuild) _Bool internalBuild; // @dynamic internalBuild;
@property(copy, nonatomic) NSString *householdID; // @dynamic householdID;
@property(copy, nonatomic) NSString *featureName; // @dynamic featureName;
@property(copy, nonatomic) NSString *externalID; // @dynamic externalID;
@property(nonatomic) unsigned long long eventType; // @dynamic eventType;
@property(copy, nonatomic) NSTimeZone *eventTimeZone; // @dynamic eventTimeZone;
@property(copy, nonatomic) NSDate *eventDate; // @dynamic eventDate;
@property(copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties; // @dynamic enqueuerProperties;
@property(nonatomic) unsigned long long endReasonType; // @dynamic endReasonType;
@property(nonatomic) unsigned long long displayType; // @dynamic displayType;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(nonatomic) unsigned long long containerType; // @dynamic containerType;
@property(copy, nonatomic) ICPlayActivityEventContainerIDs *containerIDs; // @dynamic containerIDs;
@property(copy, nonatomic) NSString *containerID; // @dynamic containerID;
@property(copy, nonatomic) NSString *buildVersion; // @dynamic buildVersion;
@property(copy, nonatomic) NSArray *buildFeatures; // @dynamic buildFeatures;
@property(nonatomic) unsigned long long autoPlayMode; // @dynamic autoPlayMode;
- (Class)_mutableCopyClass;	// IMP=0x000000000011382f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011381d

// Remaining properties
@property(nonatomic) long long version; // @dynamic version;

@end

