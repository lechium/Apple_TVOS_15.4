//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitProcessMemoryPressureEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_dataSyncState;	// 16 = 0x10
    NSString *_processMemoryState;	// 24 = 0x18
    CDStruct_b5306035 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000996cdb
@property(retain, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(retain, nonatomic) NSString *processMemoryState; // @synthesize processMemoryState=_processMemoryState;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000996bfc
- (unsigned long long)hash;	// IMP=0x0000000000996b7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000996a8a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009969c8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000996944
- (void)writeTo:(id)arg1;	// IMP=0x00000000009968c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009968b5
- (id)dictionaryRepresentation;	// IMP=0x00000000009967cf
- (id)description;	// IMP=0x0000000000996720
@property(readonly, nonatomic) _Bool hasDataSyncState;
@property(readonly, nonatomic) _Bool hasProcessMemoryState;
@property(nonatomic) _Bool hasTimestamp;

@end

