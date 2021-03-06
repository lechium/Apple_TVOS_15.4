//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INPersonHandleExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding>
{
    _Bool _suggested;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    long long _emergencyType;	// 40 = 0x28
    long long _faceTimeType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008db0c
- (void).cxx_destruct;	// IMP=0x000000000008dae4
@property(readonly, nonatomic, getter=isSuggested) _Bool suggested; // @synthesize suggested=_suggested;
@property(readonly, nonatomic) long long faceTimeType; // @synthesize faceTimeType=_faceTimeType;
@property(readonly, nonatomic) long long emergencyType; // @synthesize emergencyType=_emergencyType;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
- (id)_dictionaryRepresentation;	// IMP=0x000000000008d8e2
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000008d806
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008d6b7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008d5ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008d5e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008d509
@property(readonly) unsigned long long hash;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 faceTimeType:(long long)arg5 suggested:(_Bool)arg6;	// IMP=0x000000000008d36e
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 suggested:(_Bool)arg5;	// IMP=0x000000000008d350
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 suggested:(_Bool)arg4;	// IMP=0x000000000008d330
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 faceTimeType:(long long)arg4;	// IMP=0x000000000008d310
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4;	// IMP=0x000000000008d2f5
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3;	// IMP=0x000000000008d246
- (id)initWithValue:(id)arg1 type:(long long)arg2;	// IMP=0x000000000008d231

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

