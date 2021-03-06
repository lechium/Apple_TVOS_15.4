//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding>
{
    _Bool _registerBroker;	// 8 = 0x8
    _Bool _registerPeerPayment;	// 9 = 0x9
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000421001
+ (id)remoteRegistrationRequestWithProtobuf:(id)arg1;	// IMP=0x00000000001715c5
@property(nonatomic) _Bool registerPeerPayment; // @synthesize registerPeerPayment=_registerPeerPayment;
@property(nonatomic) _Bool registerBroker; // @synthesize registerBroker=_registerBroker;
- (id)description;	// IMP=0x000000000042118d
- (_Bool)isEqualToRemoteRegistrationRequest:(id)arg1;	// IMP=0x0000000000421172
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000042110a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042109a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000421009
- (id)protobuf;	// IMP=0x000000000017164c

@end

