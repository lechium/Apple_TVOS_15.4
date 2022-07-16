//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface CAMSchemaCAMResponse
{
    int _action;	// 8 = 0x8
    unsigned int _responseStatusCode;	// 12 = 0xc
    NSString *_enforcer;	// 16 = 0x10
    struct {
        unsigned int action:1;
        unsigned int responseStatusCode:1;
    } _has;	// 24 = 0x18
    _Bool _hasEnforcer;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000056dd4
@property(nonatomic) _Bool hasEnforcer; // @synthesize hasEnforcer=_hasEnforcer;
@property(copy, nonatomic) NSString *enforcer; // @synthesize enforcer=_enforcer;
@property(nonatomic) unsigned int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(nonatomic) int action; // @synthesize action=_action;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000056bc6
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000056b08
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000568d3
- (unsigned long long)hash;	// IMP=0x000000000005686a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056669
- (void)writeTo:(id)arg1;	// IMP=0x00000000000565b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000562f5
- (void)deleteEnforcer;	// IMP=0x00000000000562e1
- (void)deleteResponseStatusCode;	// IMP=0x00000000000562a2
@property(nonatomic) _Bool hasResponseStatusCode;
- (void)deleteAction;	// IMP=0x000000000005622f
@property(nonatomic) _Bool hasAction;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000311bec

@end
