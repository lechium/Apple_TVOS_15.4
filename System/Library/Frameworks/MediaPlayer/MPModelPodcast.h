//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelPodcastAuthor, NSString, NSURL;

@interface MPModelPodcast
{
}

+ (id)__artworkCatalogBlock_KEY;	// IMP=0x000000000015d649
+ (id)__author_KEY;	// IMP=0x000000000015d63c
+ (id)__supportsSubscription_KEY;	// IMP=0x000000000015d62f
+ (id)__shareURL_KEY;	// IMP=0x000000000015d622
+ (id)__feedURL_KEY;	// IMP=0x000000000015d615
+ (id)__title_KEY;	// IMP=0x000000000015d608
+ (id)kindWithEpisodeKind:(id)arg1;	// IMP=0x000000000015d5ef
+ (long long)genericObjectType;	// IMP=0x00000000001e3100
- (id)artworkCatalog;	// IMP=0x000000000015d597
- (id)humanDescription;	// IMP=0x000000000015d471

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(retain, nonatomic) MPModelPodcastAuthor *author; // @dynamic author;
@property(copy, nonatomic) NSURL *feedURL; // @dynamic feedURL;
@property(copy, nonatomic) NSURL *shareURL; // @dynamic shareURL;
@property(nonatomic) _Bool supportsSubscription; // @dynamic supportsSubscription;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

