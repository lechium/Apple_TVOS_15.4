//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShare.h>

@interface CKShare (CKDaemonExtensions)
- (void)_prepPCSDataWithContainer:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(_Bool)arg4 containerID:(id)arg5 sharedRecordZone:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000000fbb8
- (void)_prepPCSDataUsingPreDecryptedPCSOnlyWithContainer:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x000000000000f7b8
- (void)_prepPCSDataWithContainer:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(_Bool)arg4 containerID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000000f795
- (void)_ingestAndExportPPPCSFromShareInvitationToken:(id)arg1 container:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f34d
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x000000000000f17c
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x000000000000efab
- (_Bool)hasEncryptedPersonalInfo;	// IMP=0x000000000000ee72
- (void)setSharePCSData:(id)arg1;	// IMP=0x000000000029b118
- (void)setSharePCSData:(id)arg1 isUnitTestAccount:(_Bool)arg2;	// IMP=0x000000000029af40
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg1;	// IMP=0x000000000029af2a
- (struct _OpaquePCSShareProtection *)publicPCS;	// IMP=0x000000000029af19
- (void)setPrivatePCS:(struct _OpaquePCSShareProtection *)arg1;	// IMP=0x000000000029af03
- (struct _OpaquePCSShareProtection *)privatePCS;	// IMP=0x000000000029aef2
@end

