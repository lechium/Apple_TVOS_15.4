//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCFeatureFlagsPayloadHandler
{
}

+ (_Bool)_reapplyConfigurationIncludingPayloads:(id)arg1 excludingPayloads:(id)arg2 error:(id *)arg3;	// IMP=0x004000000007538c
+ (_Bool)_reapplyPayloads:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000074df4
+ (id)_fullyInstalledPayloads;	// IMP=0x0010000000074d8e
- (void)unsetAside;	// IMP=0x0040000000075da1
- (void)setAside;	// IMP=0x0010000000075bfe
- (void)remove;	// IMP=0x00100000000759a4
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000757b2

@end

