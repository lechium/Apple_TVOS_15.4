//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SAMPPodcastCollection;

@interface SAMPSubscribeToPodcastCollection
{
}

+ (id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001f525
+ (id)subscribeToPodcastCollection;	// IMP=0x000000000001f513
- (_Bool)requiresResponse;	// IMP=0x000000000001f595
@property(retain, nonatomic) SAMPPodcastCollection *podcastCollection;
@property(copy, nonatomic) NSString *hashedRouteUID;
@property(copy, nonatomic) NSString *assetInfo;
- (id)encodedClassName;	// IMP=0x000000000001f506
- (id)groupIdentifier;	// IMP=0x000000000001f4f2

@end

