//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedCatalogPreview, NSData, NSSet, NSString;

@interface ManagedCatalogWorkoutMetadata : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000003e0cf0

// Remaining properties
@property(nonatomic, retain) NSSet *accessibilityFeatures; // @dynamic accessibilityFeatures;
@property(nonatomic, copy) NSData *artwork; // @dynamic artwork;
@property(nonatomic, retain) NSSet *commentaryEvents; // @dynamic commentaryEvents;
@property(nonatomic, retain) NSSet *contributors; // @dynamic contributors;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, retain) NSSet *languageDisclaimers; // @dynamic languageDisclaimers;
@property(nonatomic, copy) NSString *location; // @dynamic location;
@property(nonatomic, retain) NSSet *mediaMoments; // @dynamic mediaMoments;
@property(nonatomic, copy) NSString *musicPlaylistIdentifier; // @dynamic musicPlaylistIdentifier;
@property(nonatomic, copy) NSString *musicPlaylistURL; // @dynamic musicPlaylistURL;
@property(nonatomic, retain) NSSet *musicTracks; // @dynamic musicTracks;
@property(nonatomic, retain) ManagedCatalogPreview *preview; // @dynamic preview;
@property(nonatomic, copy) NSString *sharingURL; // @dynamic sharingURL;
@property(nonatomic, copy) NSString *streamingProgramIdentifier; // @dynamic streamingProgramIdentifier;
@property(nonatomic, copy) NSString *streamingURL; // @dynamic streamingURL;
@property(nonatomic, copy) NSString *summary; // @dynamic summary;
@property(nonatomic, copy) NSString *title; // @dynamic title;
@property(nonatomic, retain) NSSet *trainerEvents; // @dynamic trainerEvents;

@end

