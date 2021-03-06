//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface IDSDestinationPushToken
{
    NSString *_alias;	// 8 = 0x8
    NSData *_pushToken;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000137c6e
- (void).cxx_destruct;	// IMP=0x000000000013810d
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (id)destinationURIs;	// IMP=0x000000000013802e
- (unsigned long long)hash;	// IMP=0x0000000000137fea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000137fdf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000137e9f
- (id)description;	// IMP=0x0000000000137de9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000137d3b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000137c76
- (id)initWithAlias:(id)arg1 pushToken:(id)arg2;	// IMP=0x0000000000137bcc

@end

