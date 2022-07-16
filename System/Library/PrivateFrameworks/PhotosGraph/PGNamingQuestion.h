//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, PHPerson;

@interface PGNamingQuestion
{
    unsigned short _state;	// 8 = 0x8
    NSDictionary *_additionalInfo;	// 16 = 0x10
    NSString *_entityIdentifier;	// 24 = 0x18
    double _localFactoryScore;	// 32 = 0x20
    PHPerson *_person;	// 40 = 0x28
    NSString *_contactIdentifier;	// 48 = 0x30
}

+ (id)questionForPerson:(id)arg1;	// IMP=0x0000000000231d09
- (void).cxx_destruct;	// IMP=0x0000000000231cb6
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (unsigned short)state;	// IMP=0x0000000000231c83
- (double)localFactoryScore;	// IMP=0x0000000000231c71
- (id)entityIdentifier;	// IMP=0x0000000000231c60
- (id)additionalInfo;	// IMP=0x0000000000231c4f
- (id)_personForContactSuggestion;	// IMP=0x0000000000231af3
- (void)legacyRemove;	// IMP=0x0000000000231a0b
- (void)legacyPersist;	// IMP=0x0000000000231850
- (void)remove;	// IMP=0x000000000023184a
- (void)persistWithCreationDate:(id)arg1;	// IMP=0x00000000002315e2
- (unsigned short)entityType;	// IMP=0x00000000002315d7
- (unsigned short)displayType;	// IMP=0x00000000002315cc
- (unsigned short)type;	// IMP=0x00000000002315c1
- (id)_additionalInfoFromContactIdentifier:(id)arg1;	// IMP=0x000000000023127a
- (id)initWithConfirmedPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3;	// IMP=0x0000000000231255
- (id)initWithPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3;	// IMP=0x0000000000231129

@end
