//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HMImmutableSettingsProtoAvailableLanguageListEvent : PBCodable <NSCopying>
{
    NSMutableArray *_languages;	// 8 = 0x8
}

+ (Class)languagesType;	// IMP=0x00000000000207fc
- (void).cxx_destruct;	// IMP=0x0000000000020640
@property(retain, nonatomic) NSMutableArray *languages; // @synthesize languages=_languages;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000204e6
- (unsigned long long)hash;	// IMP=0x00000000000204c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002042f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002026c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000201a5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000020075
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000020068
- (id)dictionaryRepresentation;	// IMP=0x000000000001fe35
- (id)description;	// IMP=0x000000000001fd86
- (id)languagesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001fd69
- (unsigned long long)languagesCount;	// IMP=0x000000000001fd4c
- (void)addLanguages:(id)arg1;	// IMP=0x000000000001fce2
- (void)clearLanguages;	// IMP=0x000000000001fcc5

@end

