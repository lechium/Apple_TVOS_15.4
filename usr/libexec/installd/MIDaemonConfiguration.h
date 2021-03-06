//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileInstallation/MIGlobalConfiguration.h>

@class NSArray;

@interface MIDaemonConfiguration : MIGlobalConfiguration
{
    _Bool _skipDeviceFamilyCheck;	// 8 = 0x8
    _Bool _skipThinningCheck;	// 9 = 0x9
    _Bool _allowPatchWithoutSinf;	// 10 = 0xa
    unsigned int _installQOSOverride;	// 12 = 0xc
    long long _nSimultaneousInstallations;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000008e5b
@property(readonly, nonatomic) long long nSimultaneousInstallations; // @synthesize nSimultaneousInstallations=_nSimultaneousInstallations;
@property(readonly, nonatomic) _Bool allowPatchWithoutSinf; // @synthesize allowPatchWithoutSinf=_allowPatchWithoutSinf;
@property(readonly, nonatomic) _Bool skipThinningCheck; // @synthesize skipThinningCheck=_skipThinningCheck;
@property(readonly, nonatomic) _Bool skipDeviceFamilyCheck; // @synthesize skipDeviceFamilyCheck=_skipDeviceFamilyCheck;
@property(readonly, nonatomic) unsigned int installQOSOverride; // @synthesize installQOSOverride=_installQOSOverride;
@property(readonly, copy, nonatomic) NSArray *diskImageApplicationsDirectories;
- (id)diskImageAppBundleIDToInfoMap;	// IMP=0x0010000000008fe0
@property(nonatomic) _Bool haveUpdatedPluginContainersWithParentID;
@property(readonly, nonatomic) _Bool localSigningIsUnrestricted; // @dynamic localSigningIsUnrestricted;
@property(readonly, nonatomic) _Bool codeSigningEnforcementIsDisabled; // @dynamic codeSigningEnforcementIsDisabled;
- (id)init;	// IMP=0x0010000000008a26

@end

