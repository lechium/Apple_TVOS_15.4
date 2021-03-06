//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKOrderedDictionary, NSString;

@interface CKObjectDescription : NSObject
{
    _Bool _printAsDictionary;	// 8 = 0x8
    _Bool _redact;	// 9 = 0x9
    _Bool _avoidShortDescription;	// 10 = 0xa
    NSString *_descriptionPrefix;	// 16 = 0x10
    CKOrderedDictionary *_orderedDictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000016dd41
@property(retain, nonatomic) CKOrderedDictionary *orderedDictionary; // @synthesize orderedDictionary=_orderedDictionary;
@property(retain, nonatomic) NSString *descriptionPrefix; // @synthesize descriptionPrefix=_descriptionPrefix;
@property(readonly, nonatomic) _Bool avoidShortDescription; // @synthesize avoidShortDescription=_avoidShortDescription;
@property(readonly, nonatomic) _Bool redact; // @synthesize redact=_redact;
@property(nonatomic) _Bool printAsDictionary; // @synthesize printAsDictionary=_printAsDictionary;
- (id)unorderedDictionary;	// IMP=0x000000000016dccc
- (id)_dictionaryDescription:(id)arg1 shouldRedact:(_Bool)arg2;	// IMP=0x000000000016dc4b
- (id)_arrayDescription:(id)arg1 shouldRedact:(_Bool)arg2;	// IMP=0x000000000016db2e
- (id)_propertyDescriptionForProperty:(id)arg1 shouldRedact:(_Bool)arg2;	// IMP=0x000000000016d8e8
- (void)addFlagsForKey:(id)arg1 flagsAndConditions:(id)arg2;	// IMP=0x000000000016d7ab
- (void)_addProperty:(id)arg1 value:(id)arg2 shouldRedact:(_Bool)arg3;	// IMP=0x000000000016d6e1
- (void)addPropertyIfExists:(id)arg1 value:(id)arg2 shouldRedact:(_Bool)arg3;	// IMP=0x000000000016d6c4
- (void)addProperty:(id)arg1 value:(id)arg2 shouldRedact:(_Bool)arg3;	// IMP=0x000000000016d6b2
- (id)description;	// IMP=0x000000000016d4eb
- (id)initWithObject:(id)arg1 redact:(_Bool)arg2 avoidShortDescription:(_Bool)arg3;	// IMP=0x000000000016d3b1
- (id)initWithObject:(id)arg1 redact:(_Bool)arg2;	// IMP=0x000000000016d39c

@end

