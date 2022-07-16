//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface ADSystemService
{
    struct __CFDictionary *_commandMap;	// 8 = 0x8
    struct __CFDictionary *_commandMapV2;	// 16 = 0x10
}

- (void)handleResponse:(id)arg1 toCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x002000000009783b
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000096d22
- (id)controlCenterLockRestrictedCommands;	// IMP=0x0010000000096d1a
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000096c38
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000096b15
- (id)domains;	// IMP=0x0010000000096ac5
- (id)handle;	// IMP=0x0010000000096abc
- (_Bool)isSystemService;	// IMP=0x0010000000096ab4
- (id)_systemDomains;	// IMP=0x0010000000096a07
- (void)dealloc;	// IMP=0x00100000000969ac
- (MISSING_TYPE *)init;	// IMP=0x0010000000096959

@end

