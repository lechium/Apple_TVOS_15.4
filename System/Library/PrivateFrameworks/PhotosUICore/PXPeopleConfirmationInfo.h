//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, PHPerson;

@interface PXPeopleConfirmationInfo : NSObject
{
    _Bool _wasNaming;	// 8 = 0x8
    PHPerson *_sourcePerson;	// 16 = 0x10
    PHPerson *_targetPerson;	// 24 = 0x18
    NSSet *_otherPersons;	// 32 = 0x20
    NSString *_localizedName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000073c305
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) _Bool wasNaming; // @synthesize wasNaming=_wasNaming;
@property(readonly, nonatomic) NSSet *otherPersons; // @synthesize otherPersons=_otherPersons;
@property(readonly, nonatomic) PHPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
@property(readonly, nonatomic) PHPerson *sourcePerson; // @synthesize sourcePerson=_sourcePerson;
- (id)description;	// IMP=0x000000000073c047
- (id)initWithBootstrapContext:(id)arg1;	// IMP=0x000000000073be81
- (id)initWithSourcePerson:(id)arg1 targetPerson:(id)arg2 confirmedSuggestions:(id)arg3;	// IMP=0x000000000073bd78

@end

