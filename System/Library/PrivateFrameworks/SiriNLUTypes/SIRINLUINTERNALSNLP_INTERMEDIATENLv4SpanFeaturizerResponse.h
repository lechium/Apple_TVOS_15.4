//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUINTERNALSNLP_INTERMEDIATESpanFeaturizerResponse;

@interface SIRINLUINTERNALSNLP_INTERMEDIATENLv4SpanFeaturizerResponse : PBCodable <NSCopying>
{
    SIRINLUINTERNALSNLP_INTERMEDIATESpanFeaturizerResponse *_response;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007eaed
@property(retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATESpanFeaturizerResponse *response; // @synthesize response=_response;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007ea6e
- (unsigned long long)hash;	// IMP=0x000000000007ea51
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e9b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e93f
- (void)copyTo:(id)arg1;	// IMP=0x000000000007e915
- (void)writeTo:(id)arg1;	// IMP=0x000000000007e8f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007e8e4
- (id)dictionaryRepresentation;	// IMP=0x000000000007e6a0
- (id)description;	// IMP=0x000000000007e5f1
@property(readonly, nonatomic) _Bool hasResponse;

@end

