//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACUIAppDescription, NSDate, NSURL;
@protocol ACUIAppInstallerDelegate;

@interface ACUIAppInstaller : NSObject
{
    ACUIAppDescription *_app;	// 8 = 0x8
    NSDate *_dateOfLastReachabilityCheck;	// 16 = 0x10
    _Bool _cachedReachabilityResult;	// 24 = 0x18
    NSDate *_dateOfLastInstallationCheck;	// 32 = 0x20
    _Bool _resultOfLastInstallationCheck;	// 40 = 0x28
    _Bool _needsAvailableInStoreCheck;	// 41 = 0x29
    _Bool _availableInStoreResult;	// 42 = 0x2a
    NSURL *_publisherURL;	// 48 = 0x30
    id <ACUIAppInstallerDelegate> _delegate;	// 56 = 0x38
}

+ (id)currentStoreFront;	// IMP=0x0000000000004600
- (void).cxx_destruct;	// IMP=0x00000000000048f0
@property(nonatomic) __weak id <ACUIAppInstallerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *publisherURL; // @synthesize publisherURL=_publisherURL;
- (void)checkAvailabilityInStore:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004580
@property(readonly, nonatomic) _Bool isAvailableInStore;
- (void)_performAvailabilityCheck:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004080
- (void)_setAvailableInStoreResult:(_Bool)arg1;	// IMP=0x0000000000003f70
- (void)start;	// IMP=0x00000000000035f0
- (void)fetchDownloadability:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003270
@property(readonly, nonatomic) _Bool isDownloadable;
@property(readonly, nonatomic) _Bool requiresReachabilityCheckToDetermineDownloadability;
- (void)_performReachabilityCheck:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002b40
- (_Bool)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(_Bool)arg1;	// IMP=0x0000000000002b00
- (_Bool)_isGreenTeaAvailable;	// IMP=0x00000000000029e0
- (void)_setCachedReachabilityResult:(_Bool)arg1;	// IMP=0x0000000000002900
@property(readonly, nonatomic) _Bool isInstalled;
- (id)initForAppWithDescription:(id)arg1;	// IMP=0x0000000000002320

@end

