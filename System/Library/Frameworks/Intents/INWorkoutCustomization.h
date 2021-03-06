//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INWorkoutCustomization : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_focus;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000004c23eb
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004c23e3
- (void).cxx_destruct;	// IMP=0x00000000004c23bb
@property(readonly, copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *focus; // @synthesize focus=_focus;
- (id)_dictionaryRepresentation;	// IMP=0x00000000004c2299
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000004c21bd
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000004c20c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004c2057
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004c1f09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c1efe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c1e50
@property(readonly) unsigned long long hash;
- (id)initWithFocus:(id)arg1 environment:(id)arg2;	// IMP=0x00000000004c1d58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

