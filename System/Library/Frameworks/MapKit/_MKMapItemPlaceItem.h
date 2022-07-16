//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/_MKPlaceItem-Protocol.h>

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@interface _MKMapItemPlaceItem : NSObject <_MKPlaceItem>
{
    MKMapItem *_mapItem;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    _Bool _isIntermediateMapItem;	// 24 = 0x18
}

+ (id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 isIntermediateMapItem:(_Bool)arg3;	// IMP=0x000000000016d105
+ (id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000016d0a9
- (void).cxx_destruct;	// IMP=0x000000000016d1e0
@property(readonly, nonatomic) _Bool hasContactOnly;
@property(readonly, nonatomic) _Bool isIntermediateMapItem;
- (void)setIsSuggestedFavorite:(_Bool)arg1;	// IMP=0x000000000016d1b7
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) _Bool isContactPersisted;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
