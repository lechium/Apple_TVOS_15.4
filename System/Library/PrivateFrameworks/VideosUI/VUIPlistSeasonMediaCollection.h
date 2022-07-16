//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIPlistMediaEntityImageLoadParamsCreating-Protocol.h>

@class VUIPlistMediaDatabaseSeason;

__attribute__((visibility("hidden")))
@interface VUIPlistSeasonMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>
{
    VUIPlistMediaDatabaseSeason *_databaseSeason;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006e743
@property(retain, nonatomic) VUIPlistMediaDatabaseSeason *databaseSeason; // @synthesize databaseSeason=_databaseSeason;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;	// IMP=0x000000000006e661
- (id)mediaItemCount;	// IMP=0x000000000006e5d0
- (id)_valueForPropertyDescriptor:(id)arg1;	// IMP=0x000000000006e4cd
- (id)seasonNumber;	// IMP=0x000000000006e47d
- (id)showTitle;	// IMP=0x000000000006e403
- (id)showIdentifier;	// IMP=0x000000000006e356
- (id)playedState;	// IMP=0x000000000006e349
- (id)coverArtImageIdentifier;	// IMP=0x000000000006e2cf
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;	// IMP=0x000000000006e260
- (id)initWithMediaLibrary:(id)arg1 databaseSeason:(id)arg2 requestedProperties:(id)arg3;	// IMP=0x000000000006e12c

@end
