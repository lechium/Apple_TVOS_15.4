//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SECC2MPError;

__attribute__((visibility("hidden")))
@interface SECC2MPGenericEventMetricValue : PBCodable
{
    unsigned long long _dateValue;	// 8 = 0x8
    double _doubleValue;	// 16 = 0x10
    SECC2MPError *_errorValue;	// 24 = 0x18
    NSString *_stringValue;	// 32 = 0x20
    struct {
        unsigned int dateValue:1;
        unsigned int doubleValue:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000084c60
@property(retain, nonatomic) SECC2MPError *errorValue; // @synthesize errorValue=_errorValue;
@property(nonatomic) unsigned long long dateValue; // @synthesize dateValue=_dateValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000084b37
- (unsigned long long)hash;	// IMP=0x00100000000849b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000084895
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000847b2
- (void)copyTo:(id)arg1;	// IMP=0x001000000008470d
- (void)writeTo:(id)arg1;	// IMP=0x001000000008465f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000084652
- (id)dictionaryRepresentation;	// IMP=0x00100000000844e5
- (id)description;	// IMP=0x0010000000084436
@property(readonly, nonatomic) _Bool hasErrorValue;
@property(nonatomic) _Bool hasDateValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(readonly, nonatomic) _Bool hasStringValue;

@end

