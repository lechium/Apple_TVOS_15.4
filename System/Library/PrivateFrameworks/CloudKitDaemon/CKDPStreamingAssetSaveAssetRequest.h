//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKDPStreamingAssetSaveAssetRequest : PBRequest <NSCopying>
{
    long long _requestedSize;	// 8 = 0x8
    long long _uploadedSize;	// 16 = 0x10
    NSString *_uploadReceipt;	// 24 = 0x18
    struct {
        unsigned int requestedSize:1;
        unsigned int uploadedSize:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ba24a
@property(retain, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(nonatomic) long long uploadedSize; // @synthesize uploadedSize=_uploadedSize;
@property(nonatomic) long long requestedSize; // @synthesize requestedSize=_requestedSize;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ba181
- (unsigned long long)hash;	// IMP=0x00000000000ba11a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ba033
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b9f84
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b9f02
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b9e72
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b9e65
- (id)dictionaryRepresentation;	// IMP=0x00000000000b9a97
- (id)description;	// IMP=0x00000000000b99e8
@property(readonly, nonatomic) _Bool hasUploadReceipt;
@property(nonatomic) _Bool hasUploadedSize;
@property(nonatomic) _Bool hasRequestedSize;

@end

