//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RERelevanceEngineDiagnosticRegistration
{
    _Bool _supportsRegistration;	// 8 = 0x8
}

- (void)enumerateAvailableEngines:(CDUnknownBlockType)arg1;	// IMP=0x00000000000457a1
- (void)checkinEngine:(id)arg1;	// IMP=0x000000000004558e
- (void)_accessEngineDataForProcess:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044e3f
- (id)_allProcesses;	// IMP=0x0000000000044d53
- (id)_processesFileURL;	// IMP=0x0000000000044ccb
- (id)_defaultRegistrationDirectory;	// IMP=0x0000000000044bee
- (id)_init;	// IMP=0x0000000000044aed

@end

