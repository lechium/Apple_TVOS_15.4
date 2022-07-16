//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination
{
    HMDAccount *_account;	// 32 = 0x20
}

+ (id)shortDescription;	// IMP=0x0000000000775e1e
- (void).cxx_destruct;	// IMP=0x0000000000775df6
@property(readonly, nonatomic) HMDAccount *account; // @synthesize account=_account;
- (id)remoteDestinationString;	// IMP=0x0000000000775c67
- (id)description;	// IMP=0x0000000000775c53
- (id)debugDescription;	// IMP=0x0000000000775c3c
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000775a95
- (id)shortDescription;	// IMP=0x00000000007759d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007758ac
- (unsigned long long)hash;	// IMP=0x000000000077581f
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(_Bool)arg3 deviceCapabilities:(id)arg4;	// IMP=0x0000000000775718
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(_Bool)arg3;	// IMP=0x0000000000775703
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3 deviceCapabilities:(id)arg4;	// IMP=0x0000000000775624

@end
