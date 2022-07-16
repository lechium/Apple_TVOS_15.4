//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSURL;

@interface IKAssetElement
{
    _Bool _infiniteDuration;	// 8 = 0x8
}

+ (_Bool)shouldParseChildDOMElements;	// IMP=0x00000000000124b0
@property(readonly, nonatomic, getter=isInfiniteDuration) _Bool infiniteDuration; // @synthesize infiniteDuration=_infiniteDuration;
- (id)_numberForAttribute:(id)arg1;	// IMP=0x0000000000012a61
@property(readonly, retain, nonatomic) NSString *serviceID;
@property(readonly, retain, nonatomic) NSNumber *rentalAdamID;
@property(readonly, retain, nonatomic) NSNumber *persistentID;
@property(readonly, retain, nonatomic) NSString *externalID;
@property(readonly, retain, nonatomic) NSString *contentID;
@property(readonly, retain, nonatomic) NSString *bookmarkID;
@property(readonly, retain, nonatomic) NSURL *extrasURL;
@property(readonly, retain, nonatomic) NSString *adamID;
@property(readonly, retain, nonatomic) NSString *actionParams;
- (_Bool)infiniteDuration;	// IMP=0x000000000001267d
@property(readonly, nonatomic) long long keyDelivery;
@property(readonly, nonatomic) long long type;
@property(readonly, retain, nonatomic) NSURL *url;

@end

