//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, RBSProcessIdentity;

@interface RBLaunchdProperties : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    int _hostPid;	// 24 = 0x18
    _Bool _multiInstance;	// 28 = 0x1c
    _Bool _systemShell;	// 29 = 0x1d
    _Bool _variableEUID;	// 30 = 0x1e
    unsigned char _overrideManageFlags;	// 31 = 0x1f
    NSString *_bundleID;	// 32 = 0x20
    NSString *_jobLabel;	// 40 = 0x28
    NSString *_executablePath;	// 48 = 0x30
    int _requestedJetsamPriority;	// 56 = 0x38
    _Bool _doesOverrideManagement;	// 60 = 0x3c
    _Bool _disableFreezing;	// 61 = 0x3d
    NSString *_underlyingAssertion;	// 64 = 0x40
    RBSProcessIdentity *_specifiedIdentity;	// 72 = 0x48
    _Bool _explicitAngelFlag;	// 80 = 0x50
    NSString *_beforeTranslocationBundlePath;	// 88 = 0x58
    NSString *_homeDirectory;	// 96 = 0x60
    NSString *_tmpDirectory;	// 104 = 0x68
    NSUUID *_uuid;	// 112 = 0x70
}

+ (id)processIdentityForEndpoint:(id)arg1;	// IMP=0x000000000004d20c
+ (id)propertiesForJob:(id)arg1;	// IMP=0x000000000004ced1
+ (id)propertiesForPid:(int)arg1;	// IMP=0x000000000004cde9
+ (id)_instanceWithProperties:(id)arg1 xpcProps:(id)arg2;	// IMP=0x000000000004cbe9
- (void).cxx_destruct;	// IMP=0x000000000004e5ba
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *tmpDirectory; // @synthesize tmpDirectory=_tmpDirectory;
@property(readonly, copy, nonatomic) NSString *homeDirectory; // @synthesize homeDirectory=_homeDirectory;
@property(readonly, nonatomic) NSString *beforeTranslocationBundlePath; // @synthesize beforeTranslocationBundlePath=_beforeTranslocationBundlePath;
@property(readonly, copy, nonatomic) RBSProcessIdentity *specifiedIdentity; // @synthesize specifiedIdentity=_specifiedIdentity;
@property(readonly, nonatomic) NSString *underlyingAssertion; // @synthesize underlyingAssertion=_underlyingAssertion;
@property(readonly, nonatomic) _Bool doesOverrideManagement; // @synthesize doesOverrideManagement=_doesOverrideManagement;
@property(readonly, nonatomic) int requestedJetsamPriority; // @synthesize requestedJetsamPriority=_requestedJetsamPriority;
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *jobLabel; // @synthesize jobLabel=_jobLabel;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) _Bool disableFreezing; // @synthesize disableFreezing=_disableFreezing;
@property(readonly, nonatomic) unsigned char overrideManageFlags; // @synthesize overrideManageFlags=_overrideManageFlags;
@property(readonly, nonatomic, getter=hasVariableEUID) _Bool variableEUID; // @synthesize variableEUID=_variableEUID;
@property(readonly, nonatomic, getter=isSystemShell) _Bool systemShell; // @synthesize systemShell=_systemShell;
@property(readonly, nonatomic, getter=isMultiInstance) _Bool multiInstance; // @synthesize multiInstance=_multiInstance;
@property(readonly, nonatomic) int hostPid; // @synthesize hostPid=_hostPid;
- (id)_initDaemonOrAngelWithProperties:(id)arg1 path:(id)arg2;	// IMP=0x000000000004e2c8
- (void)_parseAdditionalProperties:(id)arg1;	// IMP=0x000000000004dcd1
- (_Bool)_parseDaemonPlist:(id)arg1;	// IMP=0x000000000004d973
- (void)_parseLASSProperties:(id)arg1;	// IMP=0x000000000004d719
- (id)_initAppWithProperties:(id)arg1;	// IMP=0x000000000004d64f
- (id)_initXPCServiceWithProperties:(id)arg1 HostPid:(int)arg2;	// IMP=0x000000000004d58e
- (id)resolvedIdentityWithPid:(int)arg1 auid:(unsigned int)arg2;	// IMP=0x000000000004d40c
- (id)resolvedIdentity;	// IMP=0x000000000004d3f6
@property(readonly, nonatomic, getter=isAngel) _Bool angel;
@property(readonly, nonatomic, getter=isDaemon) _Bool daemon;
@property(readonly, nonatomic, getter=isXPCService) _Bool XPCService;

@end

