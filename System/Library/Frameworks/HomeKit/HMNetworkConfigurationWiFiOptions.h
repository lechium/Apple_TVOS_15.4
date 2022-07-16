//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HMNetworkConfigurationWiFiOptions : HMFObject
{
    _Bool _rotate;	// 8 = 0x8
    long long _credentialType;	// 16 = 0x10
}

@property(nonatomic) _Bool rotate; // @synthesize rotate=_rotate;
@property(readonly, nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
- (id)description;	// IMP=0x0000000000257689
- (id)initWithCredentialType:(long long)arg1;	// IMP=0x000000000025761c

@end

