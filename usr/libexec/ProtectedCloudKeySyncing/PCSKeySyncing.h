//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AccountsModel, NSMutableArray, NSUserDefaults, UserRegistryDB;

@interface PCSKeySyncing : NSObject
{
    NSUserDefaults *_settings;	// 8 = 0x8
    AccountsModel *_accounts;	// 16 = 0x10
    UserRegistryDB *_database;	// 24 = 0x18
    NSMutableArray *_notifyHooks;	// 32 = 0x20
}

+ (id)defaultSyncingManager;	// IMP=0x004000000000cbe2
- (void).cxx_destruct;	// IMP=0x002000000000e8aa
@property(retain) NSMutableArray *notifyHooks; // @synthesize notifyHooks=_notifyHooks;
@property(retain) UserRegistryDB *database; // @synthesize database=_database;
@property(retain) AccountsModel *accounts; // @synthesize accounts=_accounts;
@property(retain) NSUserDefaults *settings; // @synthesize settings=_settings;
- (id)allClients;	// IMP=0x001000000000e634
- (void)updateProtocolVersionIfNeeded:(id)arg1;	// IMP=0x001000000000e560
- (_Bool)saveClient:(id)arg1;	// IMP=0x001000000000e37a
- (void)updateClient:(id)arg1;	// IMP=0x001000000000e1cf
- (id)getClientWithIdentifier:(id)arg1;	// IMP=0x001000000000e0a9
- (id)copySHA256Hash:(id)arg1;	// IMP=0x001000000000dfe8
- (id)outStandingPCSKeys:(id)arg1;	// IMP=0x001000000000df60
- (id)syncDevices;	// IMP=0x001000000000df10
- (_Bool)updateSyncedKeysToDevice:(id)arg1 type:(int)arg2 keys:(id)arg3;	// IMP=0x001000000000dd24
- (_Bool)updateSyncDevice:(id)arg1 version:(id)arg2;	// IMP=0x001000000000dc19
- (void)syncKeysWithDatabase;	// IMP=0x001000000000d62a
- (id)copyAllPCSKeys:(id *)arg1;	// IMP=0x001000000000d582
- (_Bool)setCompanionCircleMember:(_Bool)arg1;	// IMP=0x001000000000d57a
- (_Bool)companionCircleMember;	// IMP=0x001000000000d572
- (_Bool)setiCDPStatus:(_Bool)arg1;	// IMP=0x001000000000d49c
- (_Bool)iCDPStatus;	// IMP=0x001000000000d3d1
- (_Bool)storePCSKeyData:(id)arg1 current:(_Bool)arg2;	// IMP=0x001000000000d1cd
- (id)pcsKeyData:(id)arg1;	// IMP=0x001000000000d01d
- (struct _PCSIdentitySetData *)copyIdentitySet;	// IMP=0x001000000000cea1
- (void)signalComplete:(id)arg1;	// IMP=0x001000000000cdf8
- (void)addUpdateNotify:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cd6c
- (id)dsid;	// IMP=0x001000000000cd1c
- (id)userRegistry;	// IMP=0x001000000000ccbc
- (id)init;	// IMP=0x001000000000cc37

@end
