//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PDSAgent/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PDSProtoTopic : PBCodable <NSCopying>
{
    NSMutableArray *_appInfos;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_qualifier;	// 24 = 0x18
}

+ (Class)appInfoType;	// IMP=0x0000000000003607
- (void).cxx_destruct;	// IMP=0x0000000000004358
@property(retain, nonatomic) NSMutableArray *appInfos; // @synthesize appInfos=_appInfos;
@property(retain, nonatomic) NSString *qualifier; // @synthesize qualifier=_qualifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000004151
- (unsigned long long)hash;	// IMP=0x00000000000040e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003fec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003de6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003cef
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003b74
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003b67
- (id)dictionaryRepresentation;	// IMP=0x00000000000036c7
- (id)description;	// IMP=0x0000000000003618
- (id)appInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000035ea
- (unsigned long long)appInfosCount;	// IMP=0x00000000000035cd
- (void)addAppInfo:(id)arg1;	// IMP=0x0000000000003563
- (void)clearAppInfos;	// IMP=0x0000000000003546

@end

