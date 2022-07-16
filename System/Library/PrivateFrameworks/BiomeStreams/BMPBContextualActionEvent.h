//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BMPBContextualActionEvent : PBCodable <NSCopying>
{
    NSString *_actionName;	// 8 = 0x8
    NSString *_appName;	// 16 = 0x10
    NSMutableArray *_contents;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSMutableArray *_parameters;	// 40 = 0x28
}

+ (Class)parameterType;	// IMP=0x00000000000891ca
+ (Class)contentType;	// IMP=0x00000000000890f8
- (void).cxx_destruct;	// IMP=0x000000000008a2c3
@property(retain, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSMutableArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000089f62
- (unsigned long long)hash;	// IMP=0x0000000000089ebf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000089d5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000899fe
- (void)copyTo:(id)arg1;	// IMP=0x000000000008983b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000895d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000895c8
- (id)dictionaryRepresentation;	// IMP=0x000000000008928a
- (id)description;	// IMP=0x00000000000891db
- (id)parameterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000891ad
- (unsigned long long)parametersCount;	// IMP=0x0000000000089190
- (void)addParameter:(id)arg1;	// IMP=0x0000000000089126
- (void)clearParameters;	// IMP=0x0000000000089109
- (id)contentAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000890db
- (unsigned long long)contentsCount;	// IMP=0x00000000000890be
- (void)addContent:(id)arg1;	// IMP=0x0000000000089054
- (void)clearContents;	// IMP=0x0000000000089037
@property(readonly, nonatomic) _Bool hasActionName;
@property(readonly, nonatomic) _Bool hasAppName;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
