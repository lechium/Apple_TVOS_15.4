//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject;

@interface GKLeaderboardSetListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x0040000000059b66
+ (id)entityName;	// IMP=0x0010000000059b59
- (_Bool)isValid;	// IMP=0x0020000000059c77
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000059b77

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end

