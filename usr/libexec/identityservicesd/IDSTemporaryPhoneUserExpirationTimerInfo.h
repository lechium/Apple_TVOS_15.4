//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSTemporaryPhoneUser;

@interface IDSTemporaryPhoneUserExpirationTimerInfo : NSObject
{
    IDSTemporaryPhoneUser *_user;	// 8 = 0x8
    long long _expirationPhase;	// 16 = 0x10
}

+ (long long)phaseForExpirationDate:(id)arg1;	// IMP=0x004000000014c490
- (void).cxx_destruct;	// IMP=0x002000000014c570
@property(readonly) long long expirationPhase; // @synthesize expirationPhase=_expirationPhase;
@property(readonly) IDSTemporaryPhoneUser *user; // @synthesize user=_user;
@property(readonly) double expirationInterval;
- (id)initWithUser:(id)arg1 expirationPhase:(long long)arg2;	// IMP=0x001000000014c220
- (id)initWithUser:(id)arg1;	// IMP=0x001000000014c140

@end

