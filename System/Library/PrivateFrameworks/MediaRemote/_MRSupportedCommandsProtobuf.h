//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MRSupportedCommandsProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_supportedCommands;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000014cbb
- (unsigned long long)hash;	// IMP=0x0000000000014c6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014bd1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014a34
- (void)writeTo:(id)arg1;	// IMP=0x0000000000014904
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000148f7
- (id)dictionaryRepresentation;	// IMP=0x0000000000014511
- (id)description;	// IMP=0x0000000000014462

@end

