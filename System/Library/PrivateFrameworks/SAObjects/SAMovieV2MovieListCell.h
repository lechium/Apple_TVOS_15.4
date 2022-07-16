//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString, SAMovieV2MovieDetailSnippet;

@interface SAMovieV2MovieListCell
{
}

+ (id)movieListCellWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000147f7
+ (id)movieListCell;	// IMP=0x00000000000147e5
@property(copy, nonatomic) NSDate *theatricalReleaseDate;
@property(copy, nonatomic) NSString *rating;
@property(copy, nonatomic) NSNumber *qualityRating;
@property(copy, nonatomic) NSArray *posterImages;
@property(copy, nonatomic) NSString *movieName;
@property(retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property(copy, nonatomic) NSArray *displayableShowtimes;
- (id)encodedClassName;	// IMP=0x00000000000147d8
- (id)groupIdentifier;	// IMP=0x00000000000147c4

@end
