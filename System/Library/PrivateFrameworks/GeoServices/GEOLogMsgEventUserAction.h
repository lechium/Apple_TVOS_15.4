//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgEventUserActionModuleInfo, NSString, PBDataReader;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLogMsgEventUserActionModuleInfo *_moduleInfo;	// 16 = 0x10
    NSString *_userActionEventKey;	// 24 = 0x18
    NSString *_userActionEventValue;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _userActionEventAction;	// 52 = 0x34
    int _userActionEventTarget;	// 56 = 0x38
    struct {
        unsigned int has_userActionEventAction:1;
        unsigned int has_userActionEventTarget:1;
        unsigned int read_moduleInfo:1;
        unsigned int read_userActionEventKey:1;
        unsigned int read_userActionEventValue:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013bac21
- (void).cxx_destruct;	// IMP=0x00000000013bb6be
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013bb5d5
- (unsigned long long)hash;	// IMP=0x00000000013bb512
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013bb39a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013bb161
- (void)copyTo:(id)arg1;	// IMP=0x00000000013bb032
- (void)writeTo:(id)arg1;	// IMP=0x00000000013bae33
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013bae24
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013ba887
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000013ba875
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013ad69f
- (id)jsonRepresentation;	// IMP=0x00000000013ad690
- (id)dictionaryRepresentation;	// IMP=0x00000000013a6d16
- (id)description;	// IMP=0x00000000013a6c67
@property(retain, nonatomic) GEOLogMsgEventUserActionModuleInfo *moduleInfo;
@property(readonly, nonatomic) _Bool hasModuleInfo;
- (int)StringAsUserActionEventAction:(id)arg1;	// IMP=0x000000000139e1ac
- (id)userActionEventActionAsString:(int)arg1;	// IMP=0x0000000001399ae6
@property(nonatomic) _Bool hasUserActionEventAction;
@property(nonatomic) int userActionEventAction;
- (int)StringAsUserActionEventTarget:(id)arg1;	// IMP=0x00000000013967c4
- (id)userActionEventTargetAsString:(int)arg1;	// IMP=0x000000000139472d
@property(nonatomic) _Bool hasUserActionEventTarget;
@property(nonatomic) int userActionEventTarget;
@property(retain, nonatomic) NSString *userActionEventValue;
@property(readonly, nonatomic) _Bool hasUserActionEventValue;
@property(retain, nonatomic) NSString *userActionEventKey;
@property(readonly, nonatomic) _Bool hasUserActionEventKey;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001393d0e
- (id)init;	// IMP=0x0000000001393cb2

@end

