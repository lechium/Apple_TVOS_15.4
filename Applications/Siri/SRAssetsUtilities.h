//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIClient;

@interface SRAssetsUtilities : NSObject
{
    TRIClient *_client;	// 8 = 0x8
}

+ (void)_runAssetCheckWithTask:(id)arg1;	// IMP=0x0040000000005c21
+ (void)_scheduleAssetCheckWithEarliestBeginDate:(id)arg1;	// IMP=0x0010000000005a90
+ (void)setupBackgroundAssetCheck;	// IMP=0x00100000000059a1
- (void).cxx_destruct;	// IMP=0x0020000000005f95
- (unsigned long long)_mockSiriAssetState;	// IMP=0x001000000000590c
- (id)_beginDownloadNamespaces:(id)arg1;	// IMP=0x001000000000587d
- (_Bool)_deviceSupportsUOD;	// IMP=0x001000000000583d
- (id)_requiredNamespaces;	// IMP=0x001000000000561e
- (_Bool)_supportsCurrentLocale;	// IMP=0x00100000000052cb
- (void)checkAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005054
- (void)dealloc;	// IMP=0x0010000000005012
- (id)init;	// IMP=0x0010000000004fa7

@end

