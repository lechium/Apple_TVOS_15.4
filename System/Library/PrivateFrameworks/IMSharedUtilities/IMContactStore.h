//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, NSArray, NSData, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IMContactStore : NSObject
{
    _Bool _batchFetchingForLaunchCompleted;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    NSData *_changeHistoryToken;	// 24 = 0x18
    NSDictionary *_handleIDToCNIDMap;	// 32 = 0x20
    NSMutableDictionary *_CNIDToHandleIDsMap;	// 40 = 0x28
    NSMutableDictionary *_IDToCNContactMap;	// 48 = 0x30
    double _lastContactStoreSync;	// 56 = 0x38
    double _lastMeContactStoreSync;	// 64 = 0x40
    CNContact *_meContact;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_changeHistoryFetchQueue;	// 80 = 0x50
    NSArray *_CNIDsForBatchFetch;	// 88 = 0x58
}

+ (id)validateAndCleanupID:(id)arg1;	// IMP=0x0000000000050c05
+ (id)validateAndFilterIDsForContactsBatchFetch:(id)arg1;	// IMP=0x00000000000509c4
+ (id)descriptionForCNContact:(id)arg1;	// IMP=0x00000000000508d7
+ (_Bool)isCNContactAKnownContact:(id)arg1;	// IMP=0x0000000000050889
+ (id)dialingForCurrentLocale;	// IMP=0x0000000000050766
+ (id)dialingCodeForID:(id)arg1;	// IMP=0x00000000000505b7
+ (id)keysForNicknameHandling;	// IMP=0x0000000000050361
+ (id)keysForMeContact;	// IMP=0x0000000000050220
+ (id)keysForCNContact;	// IMP=0x00000000000500d2
+ (id)mePredicate;	// IMP=0x00000000000500b9
+ (id)predicateForID:(id)arg1;	// IMP=0x000000000004ff8c
+ (id)createMutableContactWithMapURL:(id)arg1 andLocalizedLocationString:(id)arg2;	// IMP=0x000000000004fe36
+ (id)createMutableContactWithID:(id)arg1;	// IMP=0x000000000004fc0b
+ (_Bool)_shouldAllowContactStoreLookup;	// IMP=0x000000000004fbc7
+ (_Bool)shouldShowAbbreviatedNames;	// IMP=0x000000000004fa0c
+ (_Bool)shouldShowNickNames;	// IMP=0x000000000004f97b
+ (id)phoneNumbersForCNContact:(id)arg1;	// IMP=0x000000000004f6eb
+ (id)emailsForCNContact:(id)arg1;	// IMP=0x000000000004f499
+ (id)IDsFromCNContact:(id)arg1;	// IMP=0x000000000004f39e
+ (id)abbreviatedNameForCNContact:(id)arg1;	// IMP=0x000000000004f309
+ (id)nickNameForCNContact:(id)arg1;	// IMP=0x000000000004f2a5
+ (id)companyNameForCNContact:(id)arg1;	// IMP=0x000000000004f241
+ (id)_stringFromContact:(id)arg1 withStyle:(long long)arg2;	// IMP=0x000000000004f0a0
+ (id)fullNameForCNContact:(id)arg1;	// IMP=0x000000000004eff1
+ (id)phoneticFullNameForCNContact:(id)arg1;	// IMP=0x000000000004ef3f
+ (id)phoneticLastNameForCNContact:(id)arg1;	// IMP=0x000000000004eedb
+ (id)phoneticFirstNameForCNContact:(id)arg1;	// IMP=0x000000000004ee77
+ (id)lastNameForCNContact:(id)arg1;	// IMP=0x000000000004ee13
+ (id)firstNameForCNContact:(id)arg1;	// IMP=0x000000000004edaf
+ (id)displayNameForContact:(id)arg1;	// IMP=0x000000000004eca6
+ (id)displayNameWithPhoneNumberOrEmailForContact:(id)arg1;	// IMP=0x000000000004eb03
+ (id)displayNameWithCNNickNameOrFullNameOrCompanyNameOrAbbreviatedForContact:(id)arg1;	// IMP=0x000000000004e982
+ (id)IMContactStoreQueue;	// IMP=0x000000000004e8ff
+ (id)kIMCNContactCropRectKey;	// IMP=0x000000000004a968
+ (id)kIMCNContactThumbnailImageDataKey;	// IMP=0x000000000004a938
+ (id)kIMCNContactImageDataKey;	// IMP=0x000000000004a908
+ (id)kIMCNContactImageDataAvailableKey;	// IMP=0x000000000004a8d8
+ (id)kIMCNContactEmailAddressesKey;	// IMP=0x000000000004a8a8
+ (id)kIMCNContactPhoneNumbersKey;	// IMP=0x000000000004a878
+ (id)kIMCNContactLinkIdentifierKey;	// IMP=0x000000000004a848
+ (id)kIMCNContactIdentifierKey;	// IMP=0x000000000004a818
+ (Class)IMCNMeCardSharingPickerViewControllerClass;	// IMP=0x000000000004a7f1
+ (Class)IMCNChangeHistoryFetchRequestClass;	// IMP=0x000000000004a7c1
+ (Class)IMCNPhoneNumberClass;	// IMP=0x000000000004a791
+ (Class)IMCNLabeledValueClass;	// IMP=0x000000000004a761
+ (Class)IMCNMutableContactClass;	// IMP=0x000000000004a731
+ (Class)IMCNContactFetchRequestClass;	// IMP=0x000000000004a701
+ (Class)IMCNContactFormatterClass;	// IMP=0x000000000004a6d1
+ (id)sharedInstance;	// IMP=0x0000000000049381
+ (void)_logDictionaryInformation:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000003cb0b
+ (void)_logArray:(id)arg1 inBatchesOfSize:(long long)arg2;	// IMP=0x000000000003c9ed
+ (void)logHandleID:(id)arg1;	// IMP=0x000000000003c916
+ (void)logCNContact:(id)arg1 andID:(id)arg2;	// IMP=0x000000000003c861
+ (void)logCNContact:(id)arg1;	// IMP=0x000000000003c7ea
+ (void)logHistoryToken:(id)arg1;	// IMP=0x000000000003c796
+ (void)logContactFetchRequestResults:(id)arg1;	// IMP=0x000000000003c567
+ (void)logHandleIDs:(id)arg1 checkAdditionalLoggingEnabled:(_Bool)arg2;	// IMP=0x000000000003c4e2
+ (void)logDictionary:(id)arg1 inBatchesOfSize:(long long)arg2;	// IMP=0x000000000003c40b
+ (void)logDictionary:(id)arg1;	// IMP=0x000000000003c39e
- (void).cxx_destruct;	// IMP=0x0000000000050e33
@property(retain, nonatomic) NSArray *CNIDsForBatchFetch; // @synthesize CNIDsForBatchFetch=_CNIDsForBatchFetch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *changeHistoryFetchQueue; // @synthesize changeHistoryFetchQueue=_changeHistoryFetchQueue;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(nonatomic) double lastMeContactStoreSync; // @synthesize lastMeContactStoreSync=_lastMeContactStoreSync;
@property(nonatomic) double lastContactStoreSync; // @synthesize lastContactStoreSync=_lastContactStoreSync;
@property(nonatomic) _Bool batchFetchingForLaunchCompleted; // @synthesize batchFetchingForLaunchCompleted=_batchFetchingForLaunchCompleted;
@property(retain, nonatomic) NSMutableDictionary *IDToCNContactMap; // @synthesize IDToCNContactMap=_IDToCNContactMap;
@property(retain, nonatomic) NSMutableDictionary *CNIDToHandleIDsMap; // @synthesize CNIDToHandleIDsMap=_CNIDToHandleIDsMap;
@property(retain, nonatomic) NSDictionary *handleIDToCNIDMap; // @synthesize handleIDToCNIDMap=_handleIDToCNIDMap;
@property(retain, nonatomic) NSData *changeHistoryToken; // @synthesize changeHistoryToken=_changeHistoryToken;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)getCurrentHistoryToken;	// IMP=0x000000000004fba9
- (id)getIDToCNContactMap;	// IMP=0x000000000004fb3d
- (id)getCNIDToHandleIDsMap;	// IMP=0x000000000004fabb
- (id)getHandleIDToCNIDMap;	// IMP=0x000000000004fa9d
- (void)checkForContactStoreChanges;	// IMP=0x000000000004e2f0
- (void)handleDropEverythingEvent;	// IMP=0x000000000004e1d6
- (id)fetchMeContactWithKeys:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000004df76
- (id)fetchMeContactWithKeys:(id)arg1;	// IMP=0x000000000004df41
- (void)meCardChanged:(id)arg1;	// IMP=0x000000000004de01
- (void)resetMeCard;	// IMP=0x000000000004dded
- (void)contactStoreChanged:(id)arg1;	// IMP=0x000000000004dcf6
- (void)addEntriesToIDToCNContactMap:(id)arg1;	// IMP=0x000000000004dc4a
- (id)getAllKeysFromIDToCNContactMap;	// IMP=0x000000000004dbd6
- (void)replaceWithMutableContactForID:(id)arg1;	// IMP=0x000000000004da5b
- (void)replaceContact:(id)arg1 withID:(id)arg2;	// IMP=0x000000000004d7ed
- (void)removeContactWithID:(id)arg1;	// IMP=0x000000000004d636
- (id)getContactForID:(id)arg1;	// IMP=0x000000000004d3cd
- (void)addContact:(id)arg1 withID:(id)arg2;	// IMP=0x000000000004d1c9
- (_Bool)isContactWithIDAlreadyFetched:(id)arg1;	// IMP=0x000000000004d15d
- (_Bool)isIDAKnownContact:(id)arg1;	// IMP=0x000000000004d01d
- (void)addIDToCNIDToHandleIDsMap:(id)arg1 withCNID:(id)arg2;	// IMP=0x000000000004cec6
- (void)removeIDFromCNIDToHandleIDsMap:(id)arg1 withCNID:(id)arg2;	// IMP=0x000000000004cd5b
- (void)generateCNIDToHandleIDMap;	// IMP=0x000000000004ca9b
- (id)handleIDsForCNID:(id)arg1;	// IMP=0x000000000004c9b6
- (void)setBatchFetchingIsCompleted:(_Bool)arg1;	// IMP=0x000000000004c7f0
- (void)setBatchFetchingCompleted;	// IMP=0x000000000004c7b5
- (_Bool)isBatchFetchingForLaunchCompleted;	// IMP=0x000000000004c7ac
- (id)fetchCNContactWithIdentifier:(id)arg1;	// IMP=0x000000000004c560
- (id)completedContact:(id)arg1 withKeys:(id)arg2;	// IMP=0x000000000004c12f
- (id)fetchCNContactForHandleWithID:(id)arg1;	// IMP=0x000000000004c11b
- (id)fetchCNContactForHandleID:(id)arg1 withKeys:(id)arg2;	// IMP=0x000000000004bc2d
- (void)fetchCNContactsForHandlesWithIDs:(id)arg1 isFinalBatch:(_Bool)arg2;	// IMP=0x000000000004b13f
- (void)cacheBatchFetchResults:(id)arg1 handleIDsWithoutCNID:(id)arg2;	// IMP=0x000000000004a9a6
- (id)getContactStore;	// IMP=0x000000000004a998
- (void)dealloc;	// IMP=0x000000000004967e
- (id)initWithContactStore:(id)arg1;	// IMP=0x00000000000494ae
- (id)init;	// IMP=0x00000000000493d6

@end

