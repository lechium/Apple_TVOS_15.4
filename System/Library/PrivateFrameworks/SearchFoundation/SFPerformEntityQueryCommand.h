//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFPerformEntityQueryCommand-Protocol.h>

@class NSData, NSDictionary, NSString, SFSymbolImage;

@interface SFPerformEntityQueryCommand <SFPerformEntityQueryCommand, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int entityType:1;
    } _has;	// 8 = 0x8
    int _entityType;	// 12 = 0xc
    NSString *_searchString;	// 16 = 0x10
    NSString *_tokenString;	// 24 = 0x18
    SFSymbolImage *_symbolImage;	// 32 = 0x20
    NSString *_entityIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c58a6
- (void).cxx_destruct;	// IMP=0x00000000001c5853
@property(copy, nonatomic) NSString *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) SFSymbolImage *symbolImage; // @synthesize symbolImage=_symbolImage;
@property(copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c56d5
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c5586
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c54d4
- (_Bool)hasEntityType;	// IMP=0x00000000001c54c2
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000000d58d

// Remaining properties
@property(copy, nonatomic) NSString *commandDetail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
