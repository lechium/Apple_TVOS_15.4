//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKTournamentServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000083f72
+ (Class)interfaceClass;	// IMP=0x0010000000083f61
- (oneway void)removeCustomTournament:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x002000000008477b
- (oneway void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008444b
- (oneway void)loadTournamentWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000083f7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

