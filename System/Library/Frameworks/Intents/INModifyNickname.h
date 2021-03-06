//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface INModifyNickname : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_targetNickname;	// 8 = 0x8
    NSNumber *_isRemoval;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000039c2f5
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000039c2ed
- (void).cxx_destruct;	// IMP=0x000000000039c2c5
@property(readonly, copy, nonatomic) NSNumber *isRemoval; // @synthesize isRemoval=_isRemoval;
@property(readonly, copy, nonatomic) NSString *targetNickname; // @synthesize targetNickname=_targetNickname;
- (id)_dictionaryRepresentation;	// IMP=0x000000000039c1a3
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000039c0c7
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000039bfcf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000039bf61
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000039be9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000039be91
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000039bde3
@property(readonly) unsigned long long hash;
- (id)initWithTargetNickname:(id)arg1 isRemoval:(id)arg2;	// IMP=0x000000000039bceb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

