//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SADistance, SAMovieV2MovieListSnippet;

@interface SAMovieV2TheaterListCell
{
}

+ (id)theaterListCellWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002c825
+ (id)theaterListCell;	// IMP=0x000000000002c813
@property(retain, nonatomic) SAMovieV2MovieListSnippet *theaterShowtimeListSnippet;
@property(copy, nonatomic) NSString *theaterName;
@property(copy, nonatomic) NSString *theaterAddress;
@property(retain, nonatomic) SADistance *relativeDistance;
- (id)encodedClassName;	// IMP=0x000000000002c806
- (id)groupIdentifier;	// IMP=0x000000000002c7f2

@end

