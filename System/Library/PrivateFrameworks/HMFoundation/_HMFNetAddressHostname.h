//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMFNetAddressHostname
{
    NSString *_hostname;	// 24 = 0x18
}

+ (id)normalizedHostname:(id)arg1;	// IMP=0x0000000000042975
- (void).cxx_destruct;	// IMP=0x0000000000042cc9
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (id)addressString;	// IMP=0x0000000000042ca6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000042bd2
- (unsigned long long)hash;	// IMP=0x0000000000042b8e
- (id)initWithHostname:(id)arg1;	// IMP=0x0000000000042a29
- (id)init;	// IMP=0x00000000000428cd

@end
