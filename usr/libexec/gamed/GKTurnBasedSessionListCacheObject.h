//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject, MISSING_TYPE;

@interface GKTurnBasedSessionListCacheObject
{
}

+ (void)expireListsForSessionID:(id)arg1 context:(id)arg2;	// IMP=0x004000000006bf98
+ (Class)entryClass;	// IMP=0x001000000006b3b4
+ (id)entityName;	// IMP=0x001000000006b3a7
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x002000000006b962
- (MISSING_TYPE *)internalRepresentation;	// IMP=0x001000000006b610
- (id)sessions;	// IMP=0x001000000006b41c
- (id)sessionIDs;	// IMP=0x001000000006b3c5

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end
