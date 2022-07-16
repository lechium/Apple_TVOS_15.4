//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDMMCSItemReaderWriterProtocol-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, NSMutableIndexSet, NSString;

@interface CKDMMCSItemCommandWriter : NSObject <CKDMMCSItemReaderWriterProtocol>
{
    CKDMMCSItemGroupContext *_MMCSRequest;	// 8 = 0x8
    CKDMMCSItem *_MMCSItem;	// 16 = 0x10
    NSMutableIndexSet *_byteRanges;	// 24 = 0x18
    unsigned long long _maximumLength;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004ca5e
@property(nonatomic) unsigned long long maximumLength; // @synthesize maximumLength=_maximumLength;
@property(retain, nonatomic) NSMutableIndexSet *byteRanges; // @synthesize byteRanges=_byteRanges;
@property(retain, nonatomic) CKDMMCSItem *MMCSItem; // @synthesize MMCSItem=_MMCSItem;
@property(retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // @synthesize MMCSRequest=_MMCSRequest;
- (_Bool)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x000000000004c77c
- (_Bool)isContiguous;	// IMP=0x000000000004c6bd
- (_Bool)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x000000000004c670
- (id)getFileMetadataWithError:(id *)arg1;	// IMP=0x000000000004c624
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000004c61c
- (_Bool)openWithError:(id *)arg1;	// IMP=0x000000000004c614
- (void)dealloc;	// IMP=0x000000000004c543
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;	// IMP=0x000000000004c2f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

