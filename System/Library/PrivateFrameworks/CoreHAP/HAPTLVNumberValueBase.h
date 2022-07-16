//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HAPTLVNumberValueBase : NSObject <NSCopying, HAPTLVProtocol>
{
    NSNumber *_value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000eab12
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eaa24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea9bb
- (id)_serialize;	// IMP=0x00000000000ea913
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000000ea87b
- (id)_parseFromData:(const char *)arg1 length:(unsigned long long)arg2 status:(int *)arg3;	// IMP=0x00000000000ea7d3
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ea69c
- (id)initWithValue:(id)arg1;	// IMP=0x00000000000ea631
- (id)init;	// IMP=0x00000000000ea602

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

