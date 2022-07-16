//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet, NSString, NSURL, NSURLSession, XPCRequestToken;

@interface UPPManifestDownloadTask
{
    NSOrderedSet *_downloadIDs;	// 8 = 0x8
    NSURL *_manifestURL;	// 16 = 0x10
    NSString *_receivedDigest;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    _Bool _shouldHideUserPrompts;	// 40 = 0x28
    NSString *_clientID;	// 48 = 0x30
    NSString *_logKey;	// 56 = 0x38
    NSString *_manifestDigest;	// 64 = 0x40
    XPCRequestToken *_requestToken;	// 72 = 0x48
}

+ (id)_newPackageForExternalAssets:(id)arg1 withVariantDescriptor:(id)arg2;	// IMP=0x0020000000050ea2
+ (id)_newInstallForItem:(id)arg1 manifestURL:(id)arg2 manifestDigest:(id)arg3 clientID:(id)arg4 logKey:(id)arg5 withError:(id *)arg6;	// IMP=0x001000000004fb50
+ (_Bool)_isSupportedPlatformIdentifier:(id)arg1;	// IMP=0x001000000004fb34
+ (id)_enterpriseInstallationURL:(id)arg1 withDigest:(id)arg2;	// IMP=0x001000000004f928
+ (_Bool)_enterpriseInstallationAllowedForBundleID:(id)arg1 withName:(id)arg2 isValidHRNClient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000004f6ae
+ (id)_determineCanonicalAssetsForExternalItem:(id)arg1 matchedVariantDescriptor:(id *)arg2;	// IMP=0x001000000004ef35
- (void).cxx_destruct;	// IMP=0x0020000000053878
@property _Bool shouldHideUserPrompts; // @synthesize shouldHideUserPrompts=_shouldHideUserPrompts;
@property(retain) XPCRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain) NSString *manifestDigest; // @synthesize manifestDigest=_manifestDigest;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSString *clientID; // @synthesize clientID=_clientID;
- (void)_showError:(id)arg1;	// IMP=0x001000000005365e
- (_Bool)_showConfirmationPromptForInstalls:(id)arg1 response:(id)arg2;	// IMP=0x0010000000053170
- (void)_runWithURLRequest:(id)arg1;	// IMP=0x0010000000052ea6
- (void)_requestManifestInstallationOnActivePairedWatch;	// IMP=0x0010000000052ea0
- (_Bool)_isSecureURL:(id)arg1;	// IMP=0x0010000000052e22
- (_Bool)_isExternalURL:(id)arg1;	// IMP=0x0010000000052c59
- (id)_importInstalls:(id)arg1;	// IMP=0x0010000000052362
- (void)_handleResponse:(id)arg1 withData:(id)arg2;	// IMP=0x0010000000051d0e
- (id)_newInstallsForUPPManifest:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000005170d
- (void)main;	// IMP=0x001000000004eb66
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000004e34d
- (id)initWithManifestURL:(id)arg1 requestToken:(id)arg2 shouldHideUserPrompts:(_Bool)arg3;	// IMP=0x001000000004e2cf
- (id)initWithManifestURL:(id)arg1;	// IMP=0x001000000004e21a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
