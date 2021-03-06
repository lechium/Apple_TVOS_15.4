//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServiceAllCollectionsViewTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface _GEOAllCollectionViewTicket <GEOMapServiceAllCollectionsViewTicket>
{
}

- (void)parseAllCollectionViewResponse:(id)arg1 usingError:(id)arg2 usingUserInfo:(id)arg3 onCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007102f3
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000007101b7

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

