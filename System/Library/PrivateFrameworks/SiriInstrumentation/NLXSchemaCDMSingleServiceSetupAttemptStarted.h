//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NLXSchemaCDMSingleServiceSetupAttemptStarted
{
    int _serviceType;	// 8 = 0x8
    unsigned int _retryNumber;	// 12 = 0xc
    struct {
        unsigned int serviceType:1;
        unsigned int retryNumber:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int retryNumber; // @synthesize retryNumber=_retryNumber;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000008425e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000841a0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000083f20
- (unsigned long long)hash;	// IMP=0x0000000000083edb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000083dec
- (void)writeTo:(id)arg1;	// IMP=0x0000000000083d7b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000083d6e
- (void)deleteRetryNumber;	// IMP=0x0000000000083d44
@property(nonatomic) _Bool hasRetryNumber;
- (void)deleteServiceType;	// IMP=0x0000000000083cd1
@property(nonatomic) _Bool hasServiceType;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000314ef6

@end

