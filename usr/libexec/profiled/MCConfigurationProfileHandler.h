//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCProfileServiceProfileHandler;

@interface MCConfigurationProfileHandler
{
    MCProfileServiceProfileHandler *_OTAHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001bfd2
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x001000000001bf3e
- (void)unsetAside;	// IMP=0x001000000001beed
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x001000000001be7d
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000001bde7
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000001bcae
- (id)initWithProfile:(id)arg1;	// IMP=0x001000000001bbf2

@end
