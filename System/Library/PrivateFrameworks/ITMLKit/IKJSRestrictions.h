//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSRestrictions-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSRestrictionsProxy-Protocol.h>

@class NSString;

@interface IKJSRestrictions <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy>
{
}

+ (id)restrictionsDidChangeNotificationName;	// IMP=0x0000000000023a95
- (id)_contentRestrictionsCountryCode;	// IMP=0x0000000000024169
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;	// IMP=0x0000000000023fbe
- (_Bool)allowsShowingUndownloadedMovies;	// IMP=0x0000000000023f65
- (_Bool)allowsShowingUndownloadedTVShows;	// IMP=0x0000000000023f0c
- (_Bool)allowsITunes;	// IMP=0x0000000000023eb3
@property(readonly, nonatomic) _Bool allowsMusicVideos;
@property(readonly, nonatomic) _Bool allowsExplicit;
@property(readonly, nonatomic) _Bool allowsErotica;
- (_Bool)allowArtistActivity;	// IMP=0x0000000000023d4f
- (id)maxTVShowRatingForCountry:(id)arg1;	// IMP=0x0000000000023d26
- (id)maxMovieRatingForCountry:(id)arg1;	// IMP=0x0000000000023cfd
- (_Bool)appAnalyticsAllowed;	// IMP=0x0000000000023cb2
- (_Bool)appInstallationAllowed;	// IMP=0x0000000000023c67
- (id)maxAppRating;	// IMP=0x0000000000023c3e
@property(readonly, nonatomic) long long maxTVShowRank;
@property(readonly, nonatomic) long long maxMovieRank;
- (long long)maxAppRank;	// IMP=0x0000000000023aa9
- (id)asPrivateIKJSRestrictions;	// IMP=0x0000000000023a62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

