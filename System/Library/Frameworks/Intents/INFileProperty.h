//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INFilePropertyExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_qualifier;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    INDateComponentsRange *_dateComponentsRange;	// 32 = 0x20
    INPerson *_person;	// 40 = 0x28
    NSString *_value;	// 48 = 0x30
    NSNumber *_quantity;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ede02
- (void).cxx_destruct;	// IMP=0x00000000000edda3
@property(readonly, copy, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) INPerson *person; // @synthesize person=_person;
@property(readonly, copy, nonatomic) INDateComponentsRange *dateComponentsRange; // @synthesize dateComponentsRange=_dateComponentsRange;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *qualifier; // @synthesize qualifier=_qualifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_dictionaryRepresentation;	// IMP=0x00000000000eda7c
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000000ed9a0
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ed7ab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ed6da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ed6cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ed584
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 qualifier:(id)arg2 type:(id)arg3 dateComponentsRange:(id)arg4 person:(id)arg5 value:(id)arg6 quantity:(id)arg7;	// IMP=0x00000000000ed368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

