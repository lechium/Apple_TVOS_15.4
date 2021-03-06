//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray, PKProtobufShippingMethod;

@interface PKProtobufShippingMethods : PBCodable <NSCopying>
{
    PKProtobufShippingMethod *_defaultMethod;	// 8 = 0x8
    NSMutableArray *_methods;	// 16 = 0x10
}

+ (Class)methodsType;	// IMP=0x0000000000169f5b
- (void).cxx_destruct;	// IMP=0x000000000016abff
@property(retain, nonatomic) PKProtobufShippingMethod *defaultMethod; // @synthesize defaultMethod=_defaultMethod;
@property(retain, nonatomic) NSMutableArray *methods; // @synthesize methods=_methods;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016aa24
- (unsigned long long)hash;	// IMP=0x000000000016a9d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016a90f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016a703
- (void)copyTo:(id)arg1;	// IMP=0x000000000016a619
- (void)writeTo:(id)arg1;	// IMP=0x000000000016a4b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016a4ac
- (id)dictionaryRepresentation;	// IMP=0x000000000016a030
- (id)description;	// IMP=0x0000000000169f81
@property(readonly, nonatomic) _Bool hasDefaultMethod;
- (id)methodsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000169f3e
- (unsigned long long)methodsCount;	// IMP=0x0000000000169f21
- (void)addMethods:(id)arg1;	// IMP=0x0000000000169eb7
- (void)clearMethods;	// IMP=0x0000000000169e9a

@end

