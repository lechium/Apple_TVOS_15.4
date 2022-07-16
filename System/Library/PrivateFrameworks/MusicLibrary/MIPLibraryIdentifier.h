//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSString;

@interface MIPLibraryIdentifier : PBCodable <NSCopying>
{
    long long _libraryId;	// 8 = 0x8
    NSString *_libraryName;	// 16 = 0x10
    struct {
        unsigned int libraryId:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000019c50
@property(nonatomic) long long libraryId; // @synthesize libraryId=_libraryId;
@property(retain, nonatomic) NSString *libraryName; // @synthesize libraryName=_libraryName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000019bb6
- (unsigned long long)hash;	// IMP=0x0000000000019b66
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019aa5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019a0c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000199a8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000019943
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000019936
- (id)dictionaryRepresentation;	// IMP=0x0000000000019876
- (id)description;	// IMP=0x00000000000197c7
@property(nonatomic) _Bool hasLibraryId;
@property(readonly, nonatomic) _Bool hasLibraryName;

@end

