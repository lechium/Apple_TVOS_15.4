//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSDictionary, NSObject, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

@interface HMDVendorDataManager : HMFObject <HMFLogging, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSURLSession *_urlSession;	// 16 = 0x10
    HMFTimer *_fetchTimer;	// 24 = 0x18
    long long _dataVersion;	// 32 = 0x20
    NSDictionary *_collectionsByManufacturer;	// 40 = 0x28
    NSDictionary *_entriesByProductData;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00000000007c1e85
+ (id)dbURL;	// IMP=0x00000000007c1e55
+ (id)sharedVendorDataManager;	// IMP=0x00000000007c1e25
- (void).cxx_destruct;	// IMP=0x00000000007c1401
@property(retain, nonatomic) NSDictionary *entriesByProductData; // @synthesize entriesByProductData=_entriesByProductData;
@property(retain, nonatomic) NSDictionary *collectionsByManufacturer; // @synthesize collectionsByManufacturer=_collectionsByManufacturer;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) HMFTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007c12f1
- (_Bool)_parseManufacturersList:(id)arg1 collectionsByManufacturer:(id *)arg2 entriesByProductData:(id *)arg3;	// IMP=0x00000000007c0472
- (id)_parseVendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3;	// IMP=0x00000000007bfe70
- (id)_modelsStringForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3 key:(id)arg4;	// IMP=0x00000000007bfbac
- (_Bool)_parseDatabaseFromDictionary:(id)arg1 dataVersion:(long long *)arg2 collectionsByManufacturer:(id *)arg3 entriesByProductData:(id *)arg4;	// IMP=0x00000000007bf3f6
- (void)_handleDataFromServer:(id)arg1;	// IMP=0x00000000007beeaf
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;	// IMP=0x00000000007bebd9
- (void)_fetchDataFromServer;	// IMP=0x00000000007be7ac
- (void)_start;	// IMP=0x00000000007be73b
- (void)_loadDatabaseFromLocalFiles;	// IMP=0x00000000007be6d6
- (_Bool)_loadDatabaseFromFilePath:(id)arg1 fileDescription:(id)arg2;	// IMP=0x00000000007be64e
- (_Bool)_loadDatabaseFromFileURL:(id)arg1 fileDescription:(id)arg2;	// IMP=0x00000000007be351
- (_Bool)_loadDatabaseFromDictionary:(id)arg1;	// IMP=0x00000000007be29d
@property(readonly, nonatomic) NSURL *urlForBundledInternalPlist;
@property(readonly, nonatomic) NSURL *urlForBundledPlist;
- (id)vendorModelEntryForProductData:(id)arg1;	// IMP=0x00000000007bdfe4
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;	// IMP=0x00000000007bde83
- (id)initWithDefaults;	// IMP=0x00000000007bdd02
- (id)initWithWorkQueue:(id)arg1 urlSession:(id)arg2 fetchTimer:(id)arg3;	// IMP=0x00000000007bdc23
- (id)init;	// IMP=0x00000000007bdb7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
