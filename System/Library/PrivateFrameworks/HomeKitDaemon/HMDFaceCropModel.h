//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBModelCloudReference, NSData, NSDate, NSNumber, NSUUID;

@interface HMDFaceCropModel : HMBModel
{
}

+ (id)faceCropsWithUnassociatedFaceCropUUIDQuery;	// IMP=0x00000000000110cc
+ (id)faceCropsForPersonQuery;	// IMP=0x000000000001109c
+ (id)sentinelParentUUID;	// IMP=0x000000000001106c
+ (id)hmbQueries;	// IMP=0x0000000000010fad
+ (id)hmbProperties;	// IMP=0x0000000000010f7d
@property long long source;
@property struct CGRect faceBoundingBox;
- (id)createPersonFaceCrop;	// IMP=0x0000000000011880
- (id)initWithPersonFaceCrop:(id)arg1;	// IMP=0x000000000001166f

// Remaining properties
@property(retain) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(retain) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain) NSData *faceBoundingBoxData; // @dynamic faceBoundingBoxData;
@property(retain) HMBModelCloudReference *person; // @dynamic person;
@property(retain) NSNumber *sourceField; // @dynamic sourceField;
@property(retain) NSUUID *unassociatedFaceCropUUID; // @dynamic unassociatedFaceCropUUID;

@end

