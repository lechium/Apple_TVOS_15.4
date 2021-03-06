//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAbstractCommand-Protocol.h>

@class NSData, NSDictionary, NSString, SFCommandValue;

@interface SFAbstractCommand : NSObject <SFAbstractCommand, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;	// 8 = 0x8
    int _type;	// 12 = 0xc
    SFCommandValue *_value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018a790
- (void).cxx_destruct;	// IMP=0x000000000018aa41
@property(retain, nonatomic) SFCommandValue *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018a9b1
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018a862
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018a7b0
- (_Bool)hasType;	// IMP=0x000000000018a7a5
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000002f892

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

