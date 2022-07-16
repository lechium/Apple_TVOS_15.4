//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShareMetadata.h>

@interface CKShareMetadata (CKDaemonExtensions)
- (void)_decryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x0000000000011cd2
- (void)_encryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;	// IMP=0x0000000000011b08
- (_Bool)hasEncryptedData;	// IMP=0x0000000000011ad5
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg1;	// IMP=0x000000000029b13d
- (struct _OpaquePCSShareProtection *)publicPCS;	// IMP=0x000000000029b12c
@end

