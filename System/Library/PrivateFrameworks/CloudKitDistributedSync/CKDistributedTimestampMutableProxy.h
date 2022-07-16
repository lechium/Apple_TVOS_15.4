//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXWriteStructProxy-Protocol.h>

@interface CKDistributedTimestampMutableProxy <CKXWriteStructProxy>
{
}

- (void)setUnordered:(_Bool)arg1;	// IMP=0x00000000000d690b
- (void)setClock:(unsigned long long)arg1;	// IMP=0x00000000000d67f7
- (void)setModifier:(unsigned char)arg1;	// IMP=0x00000000000d66e4
- (void)setSiteIdentifierBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000d65db
- (void)setSiteIdentifier:(id)arg1;	// IMP=0x00000000000d64b7
- (id)distributedSiteIdentifier;	// IMP=0x00000000000d63c9
- (void)copyFromReadProxy:(id)arg1;	// IMP=0x00000000000d5f6c
- (void)copyFromTimestamp:(id)arg1;	// IMP=0x00000000000d8dcf

@end
