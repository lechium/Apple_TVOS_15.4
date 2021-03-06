//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SignpostSupportMessageArgument;

@interface SignpostSupportMetadataSegment : NSObject
{
    NSString *_typeNamespace;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSArray *_placeholderTokens;	// 24 = 0x18
    NSString *_stringPrefix;	// 32 = 0x20
    SignpostSupportMessageArgument *_argument;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001d6d2
@property(readonly, nonatomic) SignpostSupportMessageArgument *argument; // @synthesize argument=_argument;
@property(readonly, nonatomic) NSString *stringPrefix; // @synthesize stringPrefix=_stringPrefix;
@property(readonly, nonatomic) NSArray *placeholderTokens; // @synthesize placeholderTokens=_placeholderTokens;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *typeNamespace; // @synthesize typeNamespace=_typeNamespace;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d088
- (id)initWithArgumentObject:(id)arg1 typeNamespace:(id)arg2 type:(id)arg3 tokens:(id)arg4 stringPrefix:(id)arg5;	// IMP=0x000000000001cf6c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000014ca3
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2 didRedactOut:(_Bool *)arg3;	// IMP=0x0000000000014829

@end

