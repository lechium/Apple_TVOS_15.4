//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUITVShowDetailPageViewModel : NSObject
{
    NSArray *_seasonIdentifiers;	// 8 = 0x8
    NSDictionary *_episodeShelfViewControllerBySeasonIdentifier;	// 16 = 0x10
    NSDictionary *_episodesBySeasonIdentifer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000168d05
@property(retain, nonatomic) NSDictionary *episodesBySeasonIdentifer; // @synthesize episodesBySeasonIdentifer=_episodesBySeasonIdentifer;
@property(retain, nonatomic) NSDictionary *episodeShelfViewControllerBySeasonIdentifier; // @synthesize episodeShelfViewControllerBySeasonIdentifier=_episodeShelfViewControllerBySeasonIdentifier;
@property(retain, nonatomic) NSArray *seasonIdentifiers; // @synthesize seasonIdentifiers=_seasonIdentifiers;
@property(readonly, nonatomic) _Bool hasContent;

@end

