//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSString;

@interface SIRINLURRAnnotation : NSObject <NSSecureCoding>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ceaf4
- (void).cxx_destruct;	// IMP=0x00000000000ceca7
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)description;	// IMP=0x00000000000cec44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cebd6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ceafc
- (id)initWithKey:(id)arg1 value:(id)arg2;	// IMP=0x00000000000cea5b

@end

