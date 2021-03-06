//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Cards/CRPayloadCommand-Protocol.h>

@class NSDictionary, NSString;
@protocol NSSecureCoding><NSCopying;

@interface CRInvocationPayloadCommand <CRPayloadCommand>
{
    NSString *_invocationIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000032c2
@property(retain, nonatomic) NSString *invocationIdentifier; // @synthesize invocationIdentifier=_invocationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000031fe
@property(retain, nonatomic) id <NSSecureCoding><NSCopying> payload;

// Remaining properties
@property(nonatomic) unsigned long long commandDirection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDictionary *userInfo;

@end

