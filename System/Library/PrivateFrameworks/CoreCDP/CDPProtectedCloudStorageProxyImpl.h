//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPProtectedCloudStorageProxy-Protocol.h>

@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>
{
}

- (_Bool)_performPCSBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000001f35
- (_Bool)pcsRestoreLocalBackup:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001e1e
- (_Bool)pcsSynchronizeKeysWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001d07
- (_Bool)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001bf0
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001ad9
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000195a
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;	// IMP=0x00000000000018fd
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000001825
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000016b9
- (_Bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;	// IMP=0x00000000000015d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
