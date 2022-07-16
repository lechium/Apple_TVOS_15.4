//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface MIPMultiverseIdentifier : PBCodable <NSCopying>
{
    long long _accountId;	// 8 = 0x8
    long long _purchaseHistoryId;	// 16 = 0x10
    long long _sagaId;	// 24 = 0x18
    long long _storeId;	// 32 = 0x20
    NSString *_cloudUniversalLibraryId;	// 40 = 0x28
    NSMutableArray *_libraryIdentifiers;	// 48 = 0x30
    int _mediaObjectType;	// 56 = 0x38
    int _mediaType;	// 60 = 0x3c
    NSString *_name;	// 64 = 0x40
    struct {
        unsigned int accountId:1;
        unsigned int purchaseHistoryId:1;
        unsigned int sagaId:1;
        unsigned int storeId:1;
        unsigned int mediaObjectType:1;
        unsigned int mediaType:1;
    } _has;	// 72 = 0x48
}

+ (Class)libraryIdentifiersType;	// IMP=0x000000000010debc
- (void).cxx_destruct;	// IMP=0x000000000010d8e4
@property(retain, nonatomic) NSMutableArray *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property(retain, nonatomic) NSString *cloudUniversalLibraryId; // @synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId;
@property(nonatomic) long long purchaseHistoryId; // @synthesize purchaseHistoryId=_purchaseHistoryId;
@property(nonatomic) long long sagaId; // @synthesize sagaId=_sagaId;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010d5b4
- (unsigned long long)hash;	// IMP=0x000000000010d48e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010d28b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010cf98
- (void)copyTo:(id)arg1;	// IMP=0x000000000010cde1
- (void)writeTo:(id)arg1;	// IMP=0x000000000010cbb1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010cba4
- (id)dictionaryRepresentation;	// IMP=0x000000000010c5c1
- (id)description;	// IMP=0x000000000010c512
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010c4f5
- (unsigned long long)libraryIdentifiersCount;	// IMP=0x000000000010c4d8
- (void)addLibraryIdentifiers:(id)arg1;	// IMP=0x000000000010c46e
- (void)clearLibraryIdentifiers;	// IMP=0x000000000010c451
@property(readonly, nonatomic) _Bool hasCloudUniversalLibraryId;
@property(nonatomic) _Bool hasPurchaseHistoryId;
@property(nonatomic) _Bool hasSagaId;
@property(nonatomic) _Bool hasStoreId;
@property(nonatomic) _Bool hasAccountId;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsMediaType:(id)arg1;	// IMP=0x000000000010c11c
- (id)mediaTypeAsString:(int)arg1;	// IMP=0x000000000010c023
@property(nonatomic) _Bool hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
- (int)StringAsMediaObjectType:(id)arg1;	// IMP=0x000000000010be78
- (id)mediaObjectTypeAsString:(int)arg1;	// IMP=0x000000000010bdc5
@property(nonatomic) _Bool hasMediaObjectType;
@property(nonatomic) int mediaObjectType; // @synthesize mediaObjectType=_mediaObjectType;

@end
