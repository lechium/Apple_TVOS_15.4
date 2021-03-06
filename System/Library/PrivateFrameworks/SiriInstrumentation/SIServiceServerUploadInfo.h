//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SIServiceServerUploadInfo
{
    long long _ns_server_upload_ts;	// 8 = 0x8
    struct {
        unsigned int ns_server_upload_ts:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) long long ns_server_upload_ts; // @synthesize ns_server_upload_ts=_ns_server_upload_ts;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002c6beb
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002c6b2d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002c69fd
- (unsigned long long)hash;	// IMP=0x00000000002c69d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c6930
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c6904
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c68f7
- (void)deleteNs_server_upload_ts;	// IMP=0x00000000002c68cd
@property(nonatomic) _Bool hasNs_server_upload_ts;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000339d56

@end

