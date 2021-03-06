//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVSCSemanticContextFactory : NSObject
{
}

+ (id)_buttonSemanticContextWithType:(id)arg1 name:(id)arg2;	// IMP=0x000000000000272b
+ (id)_buttonSemanticContextWithType:(id)arg1 name:(id)arg2 chooseActionName:(id)arg3;	// IMP=0x00000000000025ce
+ (id)tvShowSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x00000000000025ac
+ (id)tvSeasonSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x000000000000258a
+ (id)tvEpisodeSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x0000000000002568
+ (id)searchTextInputFieldSemanticContext;	// IMP=0x000000000000246c
+ (id)podcastSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x00000000000023da
+ (id)podcastEpisodeSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x0000000000002348
+ (id)radioStationSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x0000000000002326
+ (id)musicRecordingSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x0000000000002304
+ (id)musicGroupSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x00000000000022e2
+ (id)musicGenreSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x0000000000002250
+ (id)musicComposerSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x00000000000021be
+ (id)musicAlbumSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x000000000000219c
+ (id)movieGenreSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x000000000000210a
+ (id)movieSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x00000000000020e8
+ (id)mediaSemanticContextWithType:(id)arg1 name:(id)arg2 includeConsumeAction:(_Bool)arg3;	// IMP=0x0000000000001fb3
+ (id)navigationCommandSemanticContextWithName:(id)arg1 chooseActionName:(id)arg2;	// IMP=0x0000000000001f10
+ (id)keyboardKeySemanticContextWithName:(id)arg1;	// IMP=0x0000000000001e83
+ (id)iTunesUEpisodeSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x0000000000001df1
+ (id)iTunesUCourseSemanticContextWithName:(id)arg1 includeConsumeAction:(_Bool)arg2;	// IMP=0x0000000000001d5f
+ (id)iTunesStoreItemSemanticContextWithMetadata:(id)arg1;	// IMP=0x0000000000001d48
+ (id)iTunesStoreItemSemanticContextWithName:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000001ba1
+ (id)buttonSemanticContextWithName:(id)arg1;	// IMP=0x0000000000001b14
+ (id)applicationStateSemanticContextWithViewIdentifier:(id)arg1 mainEntity:(id)arg2 commands:(id)arg3;	// IMP=0x00000000000019c3
+ (id)applicationCollectionSemanticContextWithName:(id)arg1;	// IMP=0x0000000000001898
+ (id)applicationSemanticContextWithName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000000175b

@end

