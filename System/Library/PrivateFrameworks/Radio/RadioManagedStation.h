//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface RadioManagedStation : NSManagedObject
{
}

+ (id)defaultPropertiesToFetch;	// IMP=0x0000000000001aa4
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) _Bool virtualPlayEnabled;
@property(nonatomic) int subscriberCount;
- (id)streamKeyURL;	// IMP=0x0000000000004dfe
- (id)streamCertificateURL;	// IMP=0x0000000000004d5d
@property(retain, nonatomic) NSURL *streamURL;
@property(copy, nonatomic) NSString *stationStringID;
@property(nonatomic) long long stationID;
@property(copy, nonatomic) NSString *stationHash;
@property(copy, nonatomic) NSString *stationDescription;
@property(nonatomic) int sortOrder;
@property(nonatomic) long long songMixType;
@property(copy, nonatomic) NSArray *skipTimestamps;
@property(nonatomic) double skipInterval;
@property(copy, nonatomic) NSString *skipIdentifier;
@property(nonatomic) int skipFrequency;
@property(nonatomic) _Bool skipEnabled;
@property(copy, nonatomic) NSString *shareToken;
@property(nonatomic, getter=isSubscribed) _Bool subscribed;
- (void)setStreamKeyURL:(id)arg1;	// IMP=0x0000000000004453
- (void)setStreamCertificateURL:(id)arg1;	// IMP=0x0000000000004365
@property(nonatomic, getter=isSponsored) _Bool sponsored;
@property(nonatomic, getter=isSharingEnabled) _Bool sharingEnabled;
@property(nonatomic, getter=isShared) _Bool shared;
@property(retain, nonatomic) NSArray *seedTracks;
@property(nonatomic) _Bool requiresSubscription;
@property(nonatomic, getter=isPreviewOnly) _Bool previewOnly;
@property(nonatomic, getter=isPremiumPlacement) _Bool premiumPlacement;
@property(nonatomic) long long persistentID;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) _Bool likesEnabled;
@property(nonatomic) _Bool isExplicit;
@property(nonatomic) unsigned long long impressionThreshold;
@property(nonatomic) _Bool hasSkipRules;
@property(nonatomic, getter=isGatewayVideoAdEnabled) _Bool gatewayVideoAdEnabled;
@property(nonatomic, getter=isFeatured) _Bool featured;
@property(retain, nonatomic) NSArray *editableFields;
@property(nonatomic) _Bool editEnabled;
@property(copy, nonatomic) NSDictionary *debugDictionary;
@property(copy, nonatomic) NSString *coreSeedName;
@property(copy, nonatomic) NSData *artworkURLData;
@property(copy, nonatomic) NSURL *artworkURL;
@property(retain, nonatomic) NSData *adData;
@property(nonatomic) long long adamID;
@property(readonly, nonatomic, getter=isPreview) _Bool preview;
- (id)feedbackDictionaryRepresentation;	// IMP=0x0000000000001f82
- (id)additionalReferencedTrackDescriptors;	// IMP=0x0000000000001b97

@end

