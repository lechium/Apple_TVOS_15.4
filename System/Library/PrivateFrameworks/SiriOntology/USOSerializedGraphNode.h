//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface USOSerializedGraphNode : NSObject <NSSecureCoding>
{
    int _usoElementId;	// 8 = 0x8
    NSNumber *_usoVerbId;	// 16 = 0x10
    NSNumber *_integerPayload;	// 24 = 0x18
    NSString *_stringPayload;	// 32 = 0x20
    NSString *_entityLabel;	// 40 = 0x28
    NSString *_verbLabel;	// 48 = 0x30
    NSArray *_normalizedStringPayloads;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d7fdc
- (void).cxx_destruct;	// IMP=0x00000000000d8662
@property(retain, nonatomic) NSArray *normalizedStringPayloads; // @synthesize normalizedStringPayloads=_normalizedStringPayloads;
@property(retain, nonatomic) NSString *verbLabel; // @synthesize verbLabel=_verbLabel;
@property(retain, nonatomic) NSString *entityLabel; // @synthesize entityLabel=_entityLabel;
@property(retain, nonatomic) NSString *stringPayload; // @synthesize stringPayload=_stringPayload;
@property(retain, nonatomic) NSNumber *integerPayload; // @synthesize integerPayload=_integerPayload;
@property(retain, nonatomic) NSNumber *usoVerbId; // @synthesize usoVerbId=_usoVerbId;
@property int usoElementId; // @synthesize usoElementId=_usoElementId;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d839c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d7fe4
- (id)initWithUsoElementId:(int)arg1;	// IMP=0x00000000000d7fd0

@end

