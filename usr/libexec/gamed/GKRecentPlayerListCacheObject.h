//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject, GKPlayerProfileCacheObject, NSDate;

@interface GKRecentPlayerListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x0040000000063f8d
+ (id)entityName;	// IMP=0x0010000000063f80
- (id)internalRepresentation;	// IMP=0x002000000006421f
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000063f9e

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(retain, nonatomic) NSDate *sinceDate; // @dynamic sinceDate;

@end

