//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, NSMutableArray, NSString, NoteContext;
@protocol OS_dispatch_queue;

@interface DALocalDBHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_abDBQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calDBQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_noteDBQueue;	// 24 = 0x18
    int _abConnectionCount;	// 32 = 0x20
    int _calConnectionCount;	// 36 = 0x24
    int _noteConnectionCount;	// 40 = 0x28
    void *_abDB;	// 48 = 0x30
    NSString *_familyDelegateAltDSID;	// 56 = 0x38
    NSString *_familyDelegateACAccountID;	// 64 = 0x40
    NSMutableArray *_saveRequests;	// 72 = 0x48
    CNContactStore *_contactStore;	// 80 = 0x50
    struct CalDatabase *_calDB;	// 88 = 0x58
    NSString *_clientIdentifier;	// 96 = 0x60
    NoteContext *_noteDB;	// 104 = 0x68
    CDUnknownBlockType _calUnitTestCallbackBlock;	// 112 = 0x70
}

+ (id)calTestCalDBDir;	// IMP=0x00000000000301ee
+ (void)calSetTestCalDBDir:(id)arg1;	// IMP=0x00000000000300c4
+ (id)abTestABDBDir;	// IMP=0x00000000000300b3
+ (void)abSetTestABDBDir:(id)arg1;	// IMP=0x000000000002ffda
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;	// IMP=0x000000000002d96d
+ (id)os_log;	// IMP=0x000000000002d911
- (void).cxx_destruct;	// IMP=0x00000000000303a1
@property(copy, nonatomic) CDUnknownBlockType calUnitTestCallbackBlock; // @synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock;
@property(nonatomic) int noteConnectionCount; // @synthesize noteConnectionCount=_noteConnectionCount;
@property(retain, nonatomic) NoteContext *noteDB; // @synthesize noteDB=_noteDB;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) int calConnectionCount; // @synthesize calConnectionCount=_calConnectionCount;
@property(nonatomic) struct CalDatabase *calDB; // @synthesize calDB=_calDB;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) int abConnectionCount; // @synthesize abConnectionCount=_abConnectionCount;
@property(retain, nonatomic) NSMutableArray *saveRequests; // @synthesize saveRequests=_saveRequests;
@property(retain, nonatomic) NSString *familyDelegateACAccountID; // @synthesize familyDelegateACAccountID=_familyDelegateACAccountID;
@property(retain, nonatomic) NSString *familyDelegateAltDSID; // @synthesize familyDelegateAltDSID=_familyDelegateAltDSID;
@property(nonatomic) void *abDB; // @synthesize abDB=_abDB;
- (void)calUnitTestsSetCallbackBlockForSave:(CDUnknownBlockType)arg1;	// IMP=0x00000000000301ff
- (_Bool)calCloseDBAndSave:(_Bool)arg1;	// IMP=0x000000000002fc2d
- (_Bool)calSaveDBAndFlushCaches;	// IMP=0x000000000002f990
- (_Bool)calSaveDB;	// IMP=0x000000000002f731
- (void)calClearSuperfluousChanges;	// IMP=0x000000000002f723
- (void)calOpenDBAsGenericClient;	// IMP=0x000000000002f6ea
- (void)calOpenDBWithClientIdentifier:(id)arg1;	// IMP=0x000000000002f63d
- (_Bool)_calOpenDBWithClientIdentifier:(id)arg1;	// IMP=0x000000000002f1e2
- (void)_registerForCalendarYieldNotifications;	// IMP=0x000000000002f067
- (id)abDefaultAccountInfoSuitableForLogging;	// IMP=0x000000000002eedd
- (id)abConstraintPlistPath;	// IMP=0x000000000002eed5
- (_Bool)abCloseDBAndSave:(_Bool)arg1;	// IMP=0x000000000002ec15
- (_Bool)abSaveDB;	// IMP=0x000000000002eb93
- (void)abValidateDefaultSource;	// IMP=0x000000000002eb85
- (void)abProcessAddedImages;	// IMP=0x000000000002eaa8
- (void)abProcessAddedRecords;	// IMP=0x000000000002e9cb
- (void)abOpenDBAsGenericClient;	// IMP=0x000000000002e977
- (void)abOpenDBWithClientIdentifier:(id)arg1;	// IMP=0x000000000002e868
- (_Bool)_abOpenDBWithClientIdentifier:(id)arg1;	// IMP=0x000000000002e348
- (void)_registerForAddressBookYieldNotifications;	// IMP=0x000000000002e16a
- (_Bool)useContacts;	// IMP=0x000000000002e151
- (void)removeDelegateDatabasesNotMatchingAltDSIDs:(id)arg1;	// IMP=0x000000000002e112
- (void)executeAllSaveRequests;	// IMP=0x000000000002debb
- (void)addSaveRequest:(id)arg1;	// IMP=0x000000000002de10
- (void *)abDBThrowOnNil:(_Bool)arg1;	// IMP=0x000000000002dcf1
- (id)changeTrackingID;	// IMP=0x000000000002dc77
- (void)dealloc;	// IMP=0x000000000002db9b
- (id)initWithContactsFamilyDelegateAltDSID:(id)arg1 familyDelegateACAccountID:(id)arg2;	// IMP=0x000000000002db13
- (id)init;	// IMP=0x000000000002da3f

@end
