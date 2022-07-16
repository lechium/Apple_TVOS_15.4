//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFWatchListItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) _Bool isMediaContainer;
@property(copy, nonatomic) NSString *watchLiveTextFormat;
@property(copy, nonatomic) NSString *addedToUpNextText;
@property(copy, nonatomic) NSString *addToUpNextText;
@property(copy, nonatomic) NSString *inUpNextText;
@property(copy, nonatomic) NSString *purchaseOfferTextFormat;
@property(copy, nonatomic) NSString *installButtonTitle;
@property(copy, nonatomic) NSString *openButtonTitle;
@property(copy, nonatomic) NSString *continueInTextFormat;
@property(copy, nonatomic) NSString *seasonEpisodeTextFormat;
@property(copy, nonatomic) NSString *watchListIdentifier;
@end

