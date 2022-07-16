//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DiagnosticMessage : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    long long _code;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000017d540
- (void).cxx_destruct;	// IMP=0x002000000017d73c
@property(readonly) long long code; // @synthesize code=_code;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000017d5ba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000017d548
- (id)description;	// IMP=0x001000000017d513
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x001000000017d4fd
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000017d4e7
- (id)initWithCode:(long long)arg1;	// IMP=0x001000000017d486
- (id)init;	// IMP=0x001000000017d472

@end
