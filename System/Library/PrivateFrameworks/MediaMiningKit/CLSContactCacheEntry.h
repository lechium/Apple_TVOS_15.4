//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface CLSContactCacheEntry : NSManagedObject
{
}

+ (id)entityName;	// IMP=0x000000000004ede2
- (id)cachedContact;	// IMP=0x000000000004edef

// Remaining properties
@property(nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID; // @dynamic classifiedPersonLocalIdentifierWithFaceModelID;
@property(nonatomic) NSString *contactIdentifier; // @dynamic contactIdentifier;
@property(nonatomic) _Bool hasPicture; // @dynamic hasPicture;
@property(nonatomic) double updateTimestamp; // @dynamic updateTimestamp;

@end

