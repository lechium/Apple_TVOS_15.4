//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSString;

@interface SearchForSportsIntent : INIntent
{
}

- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001e50
- (id)init;	// IMP=0x0000000000001d90

// Remaining properties
@property(nonatomic, copy) NSString *athleteName; // @dynamic athleteName;
@property(nonatomic, copy) NSString *athleteQId; // @dynamic athleteQId;
@property(nonatomic, copy) NSString *leagueName; // @dynamic leagueName;
@property(nonatomic, copy) NSString *leagueQId; // @dynamic leagueQId;
@property(nonatomic, copy) NSString *sportName; // @dynamic sportName;
@property(nonatomic, copy) NSString *sportQId; // @dynamic sportQId;
@property(nonatomic, copy) NSString *teamName; // @dynamic teamName;
@property(nonatomic, copy) NSString *teamQId; // @dynamic teamQId;

@end
