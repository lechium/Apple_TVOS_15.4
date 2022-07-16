//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SAMPBasicPodcastAppSearch
{
}

+ (id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000025011
+ (id)basicPodcastAppSearch;	// IMP=0x0000000000024fff
- (_Bool)mutatingCommand;	// IMP=0x00000000000250ab
- (_Bool)requiresResponse;	// IMP=0x00000000000250a3
@property(copy, nonatomic) NSString *query;
@property(nonatomic) long long maxResults;
@property(nonatomic) _Bool acceptPodcastStations;
@property(nonatomic) _Bool acceptPodcastCollections;
- (id)encodedClassName;	// IMP=0x0000000000024ff2
- (id)groupIdentifier;	// IMP=0x0000000000024fde

@end
