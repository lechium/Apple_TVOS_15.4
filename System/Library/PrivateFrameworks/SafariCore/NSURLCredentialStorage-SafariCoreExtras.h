//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLCredentialStorage.h>

@class NSArray, NSDictionary;

@interface NSURLCredentialStorage (SafariCoreExtras)
- (void)safari_deleteSynchronizableSidecarForCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;	// IMP=0x0000000000020ebe
- (void)safari_setSynchronizableSidecar:(id)arg1 credential:(id)arg2 forHTMLFormProtectionSpace:(id)arg3;	// IMP=0x00000000000205a0
@property(readonly, nonatomic) NSArray *safari_allPasswordManagerSidecarEntries;
@property(readonly, nonatomic) NSDictionary *safari_allSafariCredentials;
- (void)safari_setDefaultCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;	// IMP=0x000000000001fa00
- (id)_formattedLabelWithHost:(id)arg1 user:(id)arg2;	// IMP=0x000000000001f968
- (void)safari_deleteSynchronizableCredentialWithEmptyServerHost:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;	// IMP=0x000000000001f5f3
- (void)safari_setSynchronizableCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;	// IMP=0x000000000001ed36
@end

