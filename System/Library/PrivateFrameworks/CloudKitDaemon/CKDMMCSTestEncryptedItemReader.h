//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDMMCSItemReaderWriterProtocol-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, NSString;
@protocol CKDMMCSItemReaderWriterProtocol;

@interface CKDMMCSTestEncryptedItemReader : NSObject <CKDMMCSItemReaderWriterProtocol>
{
    CKDMMCSItemGroupContext *_MMCSRequest;	// 8 = 0x8
    CKDMMCSItem *_MMCSItem;	// 16 = 0x10
    id <CKDMMCSItemReaderWriterProtocol> _underlyingItemReader;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b62d9
@property(retain, nonatomic) id <CKDMMCSItemReaderWriterProtocol> underlyingItemReader; // @synthesize underlyingItemReader=_underlyingItemReader;
@property(retain, nonatomic) CKDMMCSItem *MMCSItem; // @synthesize MMCSItem=_MMCSItem;
@property(retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // @synthesize MMCSRequest=_MMCSRequest;
- (_Bool)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000000b6272
- (_Bool)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000000b625c
- (id)getFileMetadataWithError:(id *)arg1;	// IMP=0x00000000000b61ca
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x00000000000b61b4
- (_Bool)openWithError:(id *)arg1;	// IMP=0x00000000000b619e
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;	// IMP=0x00000000000b5f49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
