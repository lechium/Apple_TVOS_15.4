//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface HMDNaturalLightingEnabledRetryContext : HMFObject <NSCopying>
{
    _Bool _naturalLightingEnabled;	// 8 = 0x8
    unsigned long long _retryCount;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a0ca9f
@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
- (id)attributeDescriptions;	// IMP=0x0000000000a0c8a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a0c89c
- (id)initWithNaturalLightingEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 retryCount:(unsigned long long)arg3;	// IMP=0x0000000000a0c806

@end
