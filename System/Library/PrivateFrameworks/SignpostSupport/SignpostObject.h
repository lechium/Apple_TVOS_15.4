//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString;

@interface SignpostObject
{
    _Bool _telemetryEnabled;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    unsigned long long _signpostId;	// 48 = 0x30
    unsigned long long _scope;	// 56 = 0x38
    NSDictionary *_attributes;	// 64 = 0x40
    NSString *_string1Name;	// 72 = 0x48
    NSString *_string1Value;	// 80 = 0x50
    NSString *_string2Name;	// 88 = 0x58
    NSString *_string2Value;	// 96 = 0x60
    NSString *_number1Name;	// 104 = 0x68
    NSNumber *_number1Value;	// 112 = 0x70
    NSString *_number2Name;	// 120 = 0x78
    NSNumber *_number2Value;	// 128 = 0x80
}

+ (id)serializationTypeNumber;	// IMP=0x00000000000115c2
- (void).cxx_destruct;	// IMP=0x000000000001cbfd
@property(retain, nonatomic) NSNumber *number2Value; // @synthesize number2Value=_number2Value;
@property(retain, nonatomic) NSString *number2Name; // @synthesize number2Name=_number2Name;
@property(retain, nonatomic) NSNumber *number1Value; // @synthesize number1Value=_number1Value;
@property(retain, nonatomic) NSString *number1Name; // @synthesize number1Name=_number1Name;
@property(retain, nonatomic) NSString *string2Value; // @synthesize string2Value=_string2Value;
@property(retain, nonatomic) NSString *string2Name; // @synthesize string2Name=_string2Name;
@property(retain, nonatomic) NSString *string1Value; // @synthesize string1Value=_string1Value;
@property(retain, nonatomic) NSString *string1Name; // @synthesize string1Name=_string1Name;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) _Bool telemetryEnabled; // @synthesize telemetryEnabled=_telemetryEnabled;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *scopeString;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001bbc4
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 signpostId:(unsigned long long)arg4 scope:(unsigned long long)arg5 timebaseRatio:(double)arg6 attributes:(id)arg7;	// IMP=0x000000000001bab0
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(_Bool)arg3;	// IMP=0x000000000001b709
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000011b94
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2;	// IMP=0x00000000000115e5

@end

