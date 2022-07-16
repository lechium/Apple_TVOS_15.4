//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingPersonNameComponents, NSMutableArray, NSString, TUCallDisplayContext;

@interface CSDMessagingCallDisplayContext : PBCodable
{
    NSString *_callDirectoryExtensionIdentifier;	// 8 = 0x8
    NSString *_callDirectoryLabel;	// 16 = 0x10
    NSString *_callDirectoryLocalizedExtensionContainingAppName;	// 24 = 0x18
    NSString *_companyName;	// 32 = 0x20
    NSString *_contactIdentifier;	// 40 = 0x28
    NSMutableArray *_contactIdentifiers;	// 48 = 0x30
    NSString *_contactLabel;	// 56 = 0x38
    NSString *_contactName;	// 64 = 0x40
    NSString *_label;	// 72 = 0x48
    NSString *_location;	// 80 = 0x50
    NSString *_mapName;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    CSDMessagingPersonNameComponents *_protoPersonNameComponents;	// 104 = 0x68
    NSString *_suggestedName;	// 112 = 0x70
}

+ (Class)contactIdentifiersType;	// IMP=0x00200000001051fa
- (void).cxx_destruct;	// IMP=0x0010000000106ba4
@property(retain, nonatomic) NSMutableArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) NSString *callDirectoryExtensionIdentifier; // @synthesize callDirectoryExtensionIdentifier=_callDirectoryExtensionIdentifier;
@property(retain, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName; // @synthesize callDirectoryLocalizedExtensionContainingAppName=_callDirectoryLocalizedExtensionContainingAppName;
@property(retain, nonatomic) NSString *callDirectoryLabel; // @synthesize callDirectoryLabel=_callDirectoryLabel;
@property(retain, nonatomic) NSString *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(retain, nonatomic) CSDMessagingPersonNameComponents *protoPersonNameComponents; // @synthesize protoPersonNameComponents=_protoPersonNameComponents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000106690
- (unsigned long long)hash;	// IMP=0x00100000001064f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001061c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000105def
- (void)copyTo:(id)arg1;	// IMP=0x0010000000105b85
- (void)writeTo:(id)arg1;	// IMP=0x00100000001058dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001058d0
- (id)dictionaryRepresentation;	// IMP=0x00100000001052ba
- (id)description;	// IMP=0x001000000010520b
- (id)contactIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001051dd
- (unsigned long long)contactIdentifiersCount;	// IMP=0x00100000001051c0
- (void)addContactIdentifiers:(id)arg1;	// IMP=0x0010000000105156
- (void)clearContactIdentifiers;	// IMP=0x0010000000105139
@property(readonly, nonatomic) _Bool hasContactIdentifier;
@property(readonly, nonatomic) _Bool hasCallDirectoryExtensionIdentifier;
@property(readonly, nonatomic) _Bool hasCallDirectoryLocalizedExtensionContainingAppName;
@property(readonly, nonatomic) _Bool hasCallDirectoryLabel;
@property(readonly, nonatomic) _Bool hasContactLabel;
@property(readonly, nonatomic) _Bool hasContactName;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasMapName;
@property(readonly, nonatomic) _Bool hasCompanyName;
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasSuggestedName;
@property(readonly, nonatomic) _Bool hasProtoPersonNameComponents;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) TUCallDisplayContext *displayContext;
- (id)initWithCallDisplayContext:(id)arg1;	// IMP=0x0010000000123035

@end

