//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface SISchemaMultiUserState
{
    NSArray *_enrolledUsers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000023ad12
@property(copy, nonatomic) NSArray *enrolledUsers; // @synthesize enrolledUsers=_enrolledUsers;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000023aa84
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000023a9c6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000023a6af
- (unsigned long long)hash;	// IMP=0x000000000023a692
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023a510
- (void)writeTo:(id)arg1;	// IMP=0x000000000023a3e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023a3d3
- (id)enrolledUsersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023a3b6
- (unsigned long long)enrolledUsersCount;	// IMP=0x000000000023a399
- (void)addEnrolledUsers:(id)arg1;	// IMP=0x000000000023a31f
- (void)deleteEnrolledUsers;	// IMP=0x000000000023a30d
- (void)clearEnrolledUsers;	// IMP=0x000000000023a2f0
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033043a
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000330402

@end

