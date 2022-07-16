//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSFileManager, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface WFShortcutPackageFile : NSObject
{
    NSString *_sanitizedName;	// 8 = 0x8
    NSData *_shortcutData;	// 16 = 0x10
    NSData *_signedShortcutData;	// 24 = 0x18
    NSString *_shortcutName;	// 32 = 0x20
    NSFileManager *_fileManager;	// 40 = 0x28
    NSURL *_signedShortcutFileURL;	// 48 = 0x30
    NSURL *_temporaryWorkingDirectoryURL;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_executionQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000b3506
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(readonly, nonatomic) NSURL *temporaryWorkingDirectoryURL; // @synthesize temporaryWorkingDirectoryURL=_temporaryWorkingDirectoryURL;
@property(readonly, nonatomic) NSURL *signedShortcutFileURL; // @synthesize signedShortcutFileURL=_signedShortcutFileURL;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSString *shortcutName; // @synthesize shortcutName=_shortcutName;
@property(retain, nonatomic) NSData *signedShortcutData; // @synthesize signedShortcutData=_signedShortcutData;
@property(retain, nonatomic) NSData *shortcutData; // @synthesize shortcutData=_shortcutData;
- (id)generateDirectoryStructureInDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b32fb
- (id)generateSignedShortcutFileRepresentationWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b3066
- (id)generateSignedShortcutFileRepresentationWithPrivateKey:(struct __SecKey *)arg1 signingContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b28d6
- (void)preformShortcutDataExtractionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2504
- (void)extractShortcutFileRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2453
- (id)extractShortcutFileRepresentationWithSigningMethod:(long long *)arg1 iCloudIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000b21e0
- (id)extractShortcutFileRepresentationWithSigningMethod:(long long *)arg1 error:(id *)arg2;	// IMP=0x00000000000b21c9
- (id)extractShortcutFileRepresentationWithError:(id *)arg1;	// IMP=0x00000000000b21b2
- (void)commonInit;	// IMP=0x00000000000b205e
- (id)initWithSignedShortcutFileURL:(id)arg1;	// IMP=0x00000000000b1f7f
- (id)initWithSignedShortcutData:(id)arg1 shortcutName:(id)arg2;	// IMP=0x00000000000b1ec7
- (id)initWithShortcutData:(id)arg1 shortcutName:(id)arg2;	// IMP=0x00000000000b1e0f
@property(readonly, nonatomic) NSString *sanitizedName; // @synthesize sanitizedName=_sanitizedName;
@property(readonly, nonatomic) NSString *directoryName;
@property(readonly, nonatomic) NSString *fileName;

@end

