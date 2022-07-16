//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying>
{
    NSMutableArray *_keysAndValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000144270
@property(retain, nonatomic) NSMutableArray *keysAndValues; // @synthesize keysAndValues=_keysAndValues;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000144116
- (unsigned long long)hash;	// IMP=0x00000000001440f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014405f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000143e9c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000143dd5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000143ca5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000143c98
- (id)dictionaryRepresentation;	// IMP=0x0000000000143a65
- (id)description;	// IMP=0x00000000001439b6
- (id)keysAndValuesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000143999
- (unsigned long long)keysAndValuesCount;	// IMP=0x000000000014397c
- (void)addKeysAndValues:(id)arg1;	// IMP=0x0000000000143912
- (void)clearKeysAndValues;	// IMP=0x00000000001438f5

@end

