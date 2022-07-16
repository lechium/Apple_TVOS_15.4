//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CreateCoordinatorOperation
{
    _Bool _createAsMobileBackup;	// 8 = 0x8
    _Bool _shouldCreate;	// 9 = 0x9
    _Bool _completeODRPromises;	// 10 = 0xa
    _Bool _enforceImportance;	// 11 = 0xb
    _Bool _wasCreated;	// 12 = 0xc
    NSString *_bundleID;	// 16 = 0x10
    unsigned long long _coordinatorType;	// 24 = 0x18
    unsigned long long _importance;	// 32 = 0x20
    id _coordinator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000d40d
@property(readonly, nonatomic) _Bool wasCreated; // @synthesize wasCreated=_wasCreated;
@property(readonly, nonatomic) id coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) unsigned long long importance; // @synthesize importance=_importance;
@property(nonatomic) _Bool enforceImportance; // @synthesize enforceImportance=_enforceImportance;
@property(nonatomic) _Bool completeODRPromises; // @synthesize completeODRPromises=_completeODRPromises;
@property(nonatomic) _Bool shouldCreate; // @synthesize shouldCreate=_shouldCreate;
@property(nonatomic) _Bool createAsMobileBackup; // @synthesize createAsMobileBackup=_createAsMobileBackup;
@property(readonly, nonatomic) unsigned long long coordinatorType; // @synthesize coordinatorType=_coordinatorType;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)_newCoordinatorWithType:(unsigned long long)arg1 forBundleID:(id)arg2 createIfNotExisting:(_Bool)arg3 wasCreated:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000000d1e7
- (_Bool)_cancelOwnedCoordinatorsForBundleID:(id)arg1;	// IMP=0x001000000000cfec
- (void)main;	// IMP=0x001000000000cbbe
- (id)initWithBundleID:(id)arg1 coordinatorType:(unsigned long long)arg2;	// IMP=0x001000000000cb18

@end

