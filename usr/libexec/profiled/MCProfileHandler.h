//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCProfile, NSArray, NSMutableArray, NSMutableDictionary;

@interface MCProfileHandler : NSObject
{
    MCProfile *_profile;	// 8 = 0x8
    NSMutableArray *_payloadHandlers;	// 16 = 0x10
    NSMutableDictionary *_UUIDToPersistentIDMap;	// 24 = 0x18
    _Bool _isSetAside;	// 32 = 0x20
}

+ (id)payloadsOfClass:(Class)arg1 unsetAsideBeforePayload:(id)arg2;	// IMP=0x002000000001fb26
+ (id)payloadsOfClass:(Class)arg1 setAsideBeforePayload:(id)arg2;	// IMP=0x001000000001f94e
+ (id)payloadsOfClass:(Class)arg1 removedBeforePayload:(id)arg2;	// IMP=0x001000000001f7c1
+ (id)payloadsOfClass:(Class)arg1 installedBeforePayload:(id)arg2;	// IMP=0x001000000001f5e9
+ (id)userCancelledError;	// IMP=0x001000000001cdb0
- (void).cxx_destruct;	// IMP=0x002000000001fe06
@property(readonly, retain, nonatomic) NSArray *payloadHandlers; // @synthesize payloadHandlers=_payloadHandlers;
@property(readonly, nonatomic) _Bool isSetAside; // @synthesize isSetAside=_isSetAside;
@property(readonly, retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x001000000001fdce
- (id)persistentIDForCertificateUUID:(id)arg1;	// IMP=0x001000000001fd9c
- (void)setUserInputResponses:(id)arg1;	// IMP=0x001000000001fd96
- (_Bool)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned long long)arg2 outError:(id *)arg3;	// IMP=0x001000000001fcbb
- (id)userInputArray;	// IMP=0x001000000001fcb3
- (void)convertPayloadWithUUIDToUnknownPayload:(id)arg1;	// IMP=0x001000000001f3a8
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x001000000001f129
- (void)unsetAside;	// IMP=0x001000000001efad
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x001000000001ed77
- (_Bool)isInstalled;	// IMP=0x001000000001ec06
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000001ea98
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x001000000001e8c0
- (void)unstageFromInstallationWithInstaller:(id)arg1;	// IMP=0x001000000001e6c5
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000001dd9d
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000001d001
- (id)_profileInstallationErrorWithUnderlyingError:(id)arg1;	// IMP=0x001000000001cf03
- (id)userCancelledError;	// IMP=0x001000000001ce31
- (id)initWithProfile:(id)arg1;	// IMP=0x001000000001ca4d
- (id)payloadHandlerWithUUID:(id)arg1;	// IMP=0x001000000001c84b

@end

