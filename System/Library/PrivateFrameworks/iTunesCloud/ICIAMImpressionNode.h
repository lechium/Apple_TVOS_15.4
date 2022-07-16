//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

@interface ICIAMImpressionNode : PBCodable <NSCopying>
{
    NSString *_impressionType;	// 8 = 0x8
    NSString *_recoAlgoId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000006ce2
@property(retain, nonatomic) NSString *recoAlgoId; // @synthesize recoAlgoId=_recoAlgoId;
@property(retain, nonatomic) NSString *impressionType; // @synthesize impressionType=_impressionType;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000006c35
- (unsigned long long)hash;	// IMP=0x0000000000006be8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006b20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006a82
- (void)copyTo:(id)arg1;	// IMP=0x0000000000006a1f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000069c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000069b5
- (id)dictionaryRepresentation;	// IMP=0x0000000000006932
- (id)description;	// IMP=0x0000000000006883
@property(readonly, nonatomic) _Bool hasRecoAlgoId;
@property(readonly, nonatomic) _Bool hasImpressionType;

@end
