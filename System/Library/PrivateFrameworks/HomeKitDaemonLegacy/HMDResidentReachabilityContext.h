//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDResidentReachabilityContext : HMFObject <NSSecureCoding>
{
    NSNumber *_mostRecentReachability;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000328411
- (void).cxx_destruct;	// IMP=0x00000000003283fe
@property(readonly, copy) NSNumber *mostRecentReachability; // @synthesize mostRecentReachability=_mostRecentReachability;
- (unsigned long long)hash;	// IMP=0x00000000003283a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000328269
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003281e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032816e
- (id)initWithMostRecentReachability:(id)arg1;	// IMP=0x0000000000328100
- (id)init;	// IMP=0x00000000003280ec

@end
