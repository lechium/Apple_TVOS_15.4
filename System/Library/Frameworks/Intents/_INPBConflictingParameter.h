//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBConflictingParameter-Protocol.h>

@class NSArray, NSString;

@interface _INPBConflictingParameter : PBCodable <_INPBConflictingParameter, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_alternateItems;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013d9c8
+ (Class)alternateItemsType;	// IMP=0x000000000013d9b7
- (void).cxx_destruct;	// IMP=0x000000000013d79b
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy, nonatomic) NSArray *alternateItems; // @synthesize alternateItems=_alternateItems;
- (id)dictionaryRepresentation;	// IMP=0x000000000013d4e4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013d1da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013d11b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013d089
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013cf8a
- (void)writeTo:(id)arg1;	// IMP=0x000000000013ce05
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013cdf8
@property(readonly, nonatomic) _Bool hasKeyPath;
- (id)alternateItemsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013cd92
@property(readonly, nonatomic) unsigned long long alternateItemsCount;
- (void)addAlternateItems:(id)arg1;	// IMP=0x000000000013ccfb
- (void)clearAlternateItems;	// IMP=0x000000000013ccde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
