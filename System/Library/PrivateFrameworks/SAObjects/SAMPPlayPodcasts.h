//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SAMPPlayPodcasts
{
}

+ (id)playPodcastsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003a7bd
+ (id)playPodcasts;	// IMP=0x000000000003a7ab
- (_Bool)requiresResponse;	// IMP=0x000000000003a871
@property(nonatomic) _Bool startPlaying;
@property(copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property(copy, nonatomic) NSString *requesterSharedUserId;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *episodePlaybackOrder;
- (id)encodedClassName;	// IMP=0x000000000003a79e
- (id)groupIdentifier;	// IMP=0x000000000003a78a

@end

