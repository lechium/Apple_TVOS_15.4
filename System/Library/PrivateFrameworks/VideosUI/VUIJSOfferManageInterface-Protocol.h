//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/JSExport-Protocol.h>

@class JSValue, NSDictionary;

@protocol VUIJSOfferManageInterface <JSExport>
- (void)clearOffers:(JSValue *)arg1;
- (void)fetchOffers:(_Bool)arg1:(JSValue *)arg2;
- (void)saveOffer:(NSDictionary *)arg1:(JSValue *)arg2;
@end

