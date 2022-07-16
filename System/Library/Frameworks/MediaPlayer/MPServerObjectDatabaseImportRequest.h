//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentity, NSDate;

@interface MPServerObjectDatabaseImportRequest : NSObject
{
    id _payload;	// 8 = 0x8
    ICUserIdentity *_userIdentity;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
    NSDate *_assetURLExpirationDate;	// 32 = 0x20
    NSDate *_playbackAuthorizationTokenHalfLifeDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000088021
@property(readonly, copy, nonatomic) NSDate *playbackAuthorizationTokenHalfLifeDate; // @synthesize playbackAuthorizationTokenHalfLifeDate=_playbackAuthorizationTokenHalfLifeDate;
@property(readonly, copy, nonatomic) NSDate *assetURLExpirationDate; // @synthesize assetURLExpirationDate=_assetURLExpirationDate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
- (id)_initWithPayload:(id)arg1;	// IMP=0x0000000000087c73

@end
