//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@class NSString;

@interface WBSAnalyticsSafariCKBookmarksSyncEvent : PBCodable <NSCopying>
{
    long long _result;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    NSString *_errorCode;	// 24 = 0x18
    NSString *_errorDomain;	// 32 = 0x20
    struct {
        unsigned int result:1;
        unsigned int timestamp:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000008925
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000881d
- (unsigned long long)hash;	// IMP=0x0000000000008783
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008668
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008588
- (void)copyTo:(id)arg1;	// IMP=0x00000000000084e6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000008439
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000842c
- (id)dictionaryRepresentation;	// IMP=0x0000000000008011
- (id)description;	// IMP=0x0000000000007f62
@property(readonly, nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasResult;
@property(nonatomic) _Bool hasTimestamp;

@end

