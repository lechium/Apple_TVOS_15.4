//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/NSSecureCoding-Protocol.h>

@class IDSCertifiedDeliveryContext, NSString;

@interface IDSServerMessagingIncomingContext : NSObject <NSSecureCoding>
{
    _Bool _fromServerStorage;	// 8 = 0x8
    IDSCertifiedDeliveryContext *_certifiedDeliveryContext;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002f099
- (void).cxx_destruct;	// IMP=0x000000000002f29e
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IDSCertifiedDeliveryContext *certifiedDeliveryContext; // @synthesize certifiedDeliveryContext=_certifiedDeliveryContext;
@property(nonatomic) _Bool fromServerStorage; // @synthesize fromServerStorage=_fromServerStorage;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f173
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002f0a1
- (id)initWithFromServerStorage:(_Bool)arg1 certifiedDeliveryContext:(id)arg2 identifier:(id)arg3;	// IMP=0x000000000002eff6

@end

