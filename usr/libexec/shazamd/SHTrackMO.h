//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSString, NSURL, SHGroupMO, SHMetadataMO;

__attribute__((visibility("hidden")))
@interface SHTrackMO : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00200000000406a2

// Remaining properties
@property(copy, nonatomic) NSURL *artworkURL; // @dynamic artworkURL;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) SHGroupMO *group; // @dynamic group;
@property(retain, nonatomic) NSArray *labels; // @dynamic labels;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) SHMetadataMO *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *providerID; // @dynamic providerID;
@property(copy, nonatomic) NSString *providerName; // @dynamic providerName;
@property(copy, nonatomic) NSString *recognitionID; // @dynamic recognitionID;
@property(copy, nonatomic) NSString *shazamKey; // @dynamic shazamKey;
@property(copy, nonatomic) NSURL *shazamURL; // @dynamic shazamURL;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
// Error: Property attributes should begin with the type ('T') attribute, property name: syncID
// Property attributes: (null)

@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

