//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/CSXPCConnectionConfiguration-Protocol.h>

@class NSSet, NSString;
@protocol OS_xpc_object;

@interface SDConnectionConfiguration : NSObject <CSXPCConnectionConfiguration>
{
    _Bool _internal;	// 8 = 0x8
    _Bool _searchInternal;	// 9 = 0x9
    _Bool _isExtension;	// 10 = 0xa
    _Bool _privateIndexNonSandboxAllowed;	// 11 = 0xb
    _Bool _isPrivate;	// 12 = 0xc
    _Bool _quotaDisabled;	// 13 = 0xd
    int _pid;	// 16 = 0x10
    unsigned int _euid;	// 20 = 0x14
    unsigned int _egid;	// 24 = 0x18
    NSObject<OS_xpc_object> *_connection;	// 32 = 0x20
    NSString *_protectionClass;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    NSString *_personaID;	// 56 = 0x38
    NSSet *_allowedBundleIDs;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000568d
@property(readonly, nonatomic) _Bool quotaDisabled; // @synthesize quotaDisabled=_quotaDisabled;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) _Bool privateIndexNonSandboxAllowed; // @synthesize privateIndexNonSandboxAllowed=_privateIndexNonSandboxAllowed;
@property(readonly, nonatomic) _Bool isExtension; // @synthesize isExtension=_isExtension;
@property(readonly, nonatomic) _Bool searchInternal; // @synthesize searchInternal=_searchInternal;
@property(readonly, nonatomic) _Bool internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) unsigned int egid; // @synthesize egid=_egid;
@property(readonly, nonatomic) unsigned int euid; // @synthesize euid=_euid;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSSet *allowedBundleIDs; // @synthesize allowedBundleIDs=_allowedBundleIDs;
@property(readonly, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)initWithConnection:(id)arg1 isPrivate:(_Bool)arg2;	// IMP=0x0000000000004f7c

@end
