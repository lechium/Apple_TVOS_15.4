//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCoding-Protocol.h>

@class IDSMessageContext, NSData, NSMutableDictionary;

@interface IDSProtobuf : NSObject <NSCoding>
{
    NSMutableDictionary *_protoBufParams;	// 8 = 0x8
    NSData *_uncompressedData;	// 16 = 0x10
}

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(_Bool)arg2;	// IMP=0x000000000010894a
- (void).cxx_destruct;	// IMP=0x0000000000109417
@property(retain, nonatomic) NSData *uncompressedData; // @synthesize uncompressedData=_uncompressedData;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000109339
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001092b6
@property(retain, nonatomic) IDSMessageContext *context;
@property(nonatomic) _Bool isResponse;
@property(nonatomic) unsigned short type;
@property(retain, nonatomic) NSData *data;
- (id)dictionaryRepresentationWithUncompressedData;	// IMP=0x0000000000108de8
- (id)dictionaryRepresentation;	// IMP=0x0000000000108d75
- (void)dealloc;	// IMP=0x0000000000108d25
- (id)init;	// IMP=0x0000000000108c8e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000108bb7
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(_Bool)arg3;	// IMP=0x0000000000108a20
- (id)description;	// IMP=0x0000000000108968

@end

