//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INPerson;

@interface WFINPersonContact
{
    INPerson *_person;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007b689
+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x000000000007b5aa
+ (id)contactWithPerson:(id)arg1;	// IMP=0x000000000007b561
- (void).cxx_destruct;	// IMP=0x000000000007b54e
@property(retain, nonatomic) INPerson *person; // @synthesize person=_person;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007b49b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007b3f0
- (id)wfSerializedRepresentation;	// IMP=0x000000000007b226
- (id)INPersonRepresentation;	// IMP=0x000000000007b214
- (id)wfName;	// IMP=0x000000000007b1c4
- (id)initWithINPerson:(id)arg1;	// IMP=0x000000000007b0c8

@end

