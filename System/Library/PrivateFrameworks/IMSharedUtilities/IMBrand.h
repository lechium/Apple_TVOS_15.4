//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString;

@interface IMBrand : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
}

+ (id)placeholderName;	// IMP=0x0000000000068260
+ (id)brandWithMKMapItem:(id)arg1 brandURI:(id)arg2;	// IMP=0x000000000006816f
@property(readonly, retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)_setMapItem:(id)arg1;	// IMP=0x000000000006828f
- (void)wideLogoDataForDesiredSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006824e
- (void)squareLogoDataForDesiredSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006823c
@property(readonly, nonatomic) NSString *localizedResponseTime;
@property(readonly, nonatomic, getter=isVerified) _Bool verified;
@property(readonly, nonatomic) NSString *primaryPhoneNumber;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *brandURI;
- (void)dealloc;	// IMP=0x00000000000681d9
- (id)_init;	// IMP=0x00000000000681aa

@end
