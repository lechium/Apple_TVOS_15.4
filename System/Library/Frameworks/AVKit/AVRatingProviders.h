//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AVRatingProviders : NSObject
{
    NSDictionary *_plist;	// 8 = 0x8
    NSDictionary *_mapForMovies;	// 16 = 0x10
    NSDictionary *_mapForTVShows;	// 24 = 0x18
}

+ (id)shared;	// IMP=0x00000000000ec199
+ (id)ratingProvidersWithName:(id)arg1;	// IMP=0x00000000000ec0fc
- (void).cxx_destruct;	// IMP=0x00000000000ebb2b
@property(readonly, nonatomic) NSDictionary *mapForTVShows; // @synthesize mapForTVShows=_mapForTVShows;
@property(readonly, nonatomic) NSDictionary *mapForMovies; // @synthesize mapForMovies=_mapForMovies;
@property(copy, nonatomic) NSDictionary *plist; // @synthesize plist=_plist;
- (id)findRatingString:(id)arg1;	// IMP=0x00000000000ebae4
- (id)findRatingString:(id)arg1 domain:(long long)arg2 country:(id)arg3 shouldPreferTVDomain:(_Bool)arg4;	// IMP=0x00000000000eb572
- (id)_tvShowsMapForRating:(id)arg1;	// IMP=0x00000000000eb4c9
- (id)_movieMapForRating:(id)arg1;	// IMP=0x00000000000eb420
- (void)_loadRatingMapsIfNeeded;	// IMP=0x00000000000eb405
- (void)_loadRatingsMaps;	// IMP=0x00000000000eaf6a
- (id)initWithFileURL:(id)arg1;	// IMP=0x00000000000ea7f5
- (id)init;	// IMP=0x00000000000ea7e7

@end
