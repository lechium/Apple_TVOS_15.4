//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying>
{
    unsigned int _CAContextID;	// 8 = 0x8
    NSString *_stringIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001c8d6
+ (id)protobufSchema;	// IMP=0x000000000001c873
+ (id)tokenForString:(id)arg1;	// IMP=0x000000000001c6b7
+ (id)tokenForIdentifierOfCAContext:(unsigned int)arg1;	// IMP=0x000000000001c678
- (void).cxx_destruct;	// IMP=0x000000000001c668
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000000001c5ae
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c4e6
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c1a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c160
- (id)didFinishProtobufDecodingWithError:(out id *)arg1;	// IMP=0x000000000001bfbc
- (id)initForProtobufDecoding;	// IMP=0x000000000001be1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001be0f
- (id)_string;	// IMP=0x000000000001be01
- (_Bool)_isString;	// IMP=0x000000000001bdf3
- (unsigned int)_identifierOfCAContext;	// IMP=0x000000000001bdea
- (_Bool)_isIdentifierOfCAContext;	// IMP=0x000000000001bddd
- (id)_initWithString:(id)arg1;	// IMP=0x000000000001bd6a
- (id)_initWithIdentifier:(unsigned int)arg1;	// IMP=0x000000000001bd2f
- (id)init;	// IMP=0x000000000001bc01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
