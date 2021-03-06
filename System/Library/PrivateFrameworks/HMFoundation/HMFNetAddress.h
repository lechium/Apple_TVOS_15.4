//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress
{
    HMFNetAddressInternal *_internal;	// 8 = 0x8
}

+ (id)localAddress;	// IMP=0x0000000000042cdc
- (void).cxx_destruct;	// IMP=0x00000000000433f1
@property(readonly, nonatomic) HMFNetAddressInternal *internal; // @synthesize internal=_internal;
- (id)dataUsingEncoding:(unsigned long long)arg1;	// IMP=0x0000000000043381
@property(readonly, copy, nonatomic) NSString *addressString;
@property(readonly, nonatomic) unsigned long long addressFamily;
- (id)attributeDescriptions;	// IMP=0x0000000000043221
- (id)description;	// IMP=0x000000000004320f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000043151
- (unsigned long long)hash;	// IMP=0x000000000004310d
- (id)initWithHostname:(id)arg1;	// IMP=0x0000000000042fa8
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;	// IMP=0x0000000000042e28
- (id)init;	// IMP=0x0000000000042d80

@end

