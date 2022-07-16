//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSDate, NSMutableSet;
@protocol OS_os_log;

@interface PNRResourceManager : NSObject
{
    NSDate *_lastCatalogLoadTime;	// 8 = 0x8
    unsigned int _catalogLoadRetryMultiplier;	// 16 = 0x10
    NSCache *_fileDataCache;	// 24 = 0x18
    NSCache *_maURLCache;	// 32 = 0x20
    unsigned long long _stateCaptureHandle;	// 40 = 0x28
    NSObject<OS_os_log> *_log;	// 48 = 0x30
    NSMutableSet *_downloadsInflight;	// 56 = 0x38
    struct os_unfair_lock_s _downloadsInflightLock;	// 64 = 0x40
}

+ (id)sharedManager;	// IMP=0x0000000000002df5
- (void).cxx_destruct;	// IMP=0x0000000000007931
- (void)catalogLoadThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007829
- (struct os_state_data_s *)_stateCaptureWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0000000000006e6a
- (void)_catalogDownloadFinishedWithResult:(long long)arg1;	// IMP=0x0000000000006d6e
- (void)_updateCatalog;	// IMP=0x0000000000006c6c
- (void)_updateCatalogAfterDelay:(double)arg1;	// IMP=0x0000000000006b27
- (void)_setLastCatalogLoadTime:(id)arg1;	// IMP=0x0000000000006ab1
- (id)_lastCatalogLoadTime;	// IMP=0x0000000000006a0a
- (void)_URLForInstalledResourceOfType:(id)arg1 logId:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005e3a
- (id)_assetQueryForPNRResource:(id)arg1;	// IMP=0x0000000000005d88
- (id)_getDataFrom:(id)arg1 zeroCacheCost:(_Bool)arg2 logId:(id)arg3;	// IMP=0x0000000000005a14
- (void)openPNRFilesForPrefix:(id)arg1 logId:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005680
- (_Bool)_lookupString:(id)arg1 inTrieMemory:(void *)arg2 value:(unsigned int *)arg3;	// IMP=0x0000000000005586
- (void)lookupStringForPhoneNumber:(id)arg1 inCC:(id)arg2 countryCodeOfDevice:(id)arg3 logId:(id)arg4 withResult:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005347
- (void)_bestStringForInCountryPhoneNumber:(id)arg1 phoneNumberCC:(id)arg2 countryOfDevice:(id)arg3 countryTrieData:(id)arg4 countryStrings:(id)arg5 logId:(id)arg6 resultBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000000003b48
- (void)lookupISOCountryCodeFromNANPNumber:(id)arg1 logId:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003872
- (void)openNANPFileUsingLogId:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000000384c
- (void)lookupCCForPhoneNumber:(id)arg1 logId:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x000000000000351c
- (void)openCountryCodeFileUsingLogId:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x00000000000034f6
- (void)_openLatestAssetWithBasename:(id)arg1 maType:(id)arg2 logId:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003094
- (void)dealloc;	// IMP=0x000000000000305a
- (id)init;	// IMP=0x0000000000002e4a

@end
