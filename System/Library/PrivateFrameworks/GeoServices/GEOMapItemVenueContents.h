//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemVenueContents-Protocol.h>

@class NSArray, NSString;

@interface GEOMapItemVenueContents : NSObject <GEOMapItemVenueContents>
{
    NSString *_title;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003817e4
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithItemList:(id)arg1;	// IMP=0x00000000003816a2
- (id)initWithTitle:(id)arg1 items:(id)arg2;	// IMP=0x00000000003815f7
- (id)init;	// IMP=0x00000000003815cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
