//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface ML3StoreItemPlaylistData : NSObject
{
    NSArray *_lookupItems;	// 8 = 0x8
    NSData *_playlistData;	// 16 = 0x10
    NSArray *_parsedPlaylistsImportProperties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000106bf3
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2;	// IMP=0x0000000000106839
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1;	// IMP=0x00000000001067c6
- (id)_playlistPropertiesFromPlaylistData:(id)arg1;	// IMP=0x0000000000106682
- (id)_playlistPropertiesForLookupItems:(id)arg1;	// IMP=0x0000000000105ddf
@property(readonly, nonatomic) unsigned long long playlistCount;
@property(readonly, nonatomic) NSArray *parsedStorePlaylistsImportProperties;
@property(readonly, nonatomic) NSData *playlistsData;
- (id)initWithPlaylistsData:(id)arg1;	// IMP=0x0000000000105be7
- (id)initWithLookupItems:(id)arg1;	// IMP=0x0000000000105b5d

@end

