//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKRealTimeMultiplayerInitiateBulletin
{
    _Bool _isReconnect;	// 112 = 0x70
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x004000000003b2ae
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003b2a6
@property _Bool isReconnect; // @synthesize isReconnect=_isReconnect;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003e394
- (void)handleDeclineAction;	// IMP=0x001000000003e217
- (void)handleAcceptAction;	// IMP=0x001000000003dda5
- (void)handleAction:(id)arg1;	// IMP=0x001000000003d9ee
- (void)assembleBulletin;	// IMP=0x001000000003d01d
- (void)parseClientData:(id)arg1;	// IMP=0x001000000003cd57
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003cb68
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003c96f
- (id)initWithPushNotification:(id)arg1;	// IMP=0x001000000003c783

@end

