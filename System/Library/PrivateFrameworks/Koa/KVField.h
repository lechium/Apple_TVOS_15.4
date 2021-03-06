//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Koa/KVJSONEncodable-Protocol.h>

@class NSData, NSString;

@interface KVField : NSObject <KVJSONEncodable>
{
    NSData *_buffer;	// 8 = 0x8
    const struct Field *_field;	// 16 = 0x10
}

+ (id)fieldWithBuffer:(id)arg1 root:(const void *)arg2;	// IMP=0x000000000000af61
- (void).cxx_destruct;	// IMP=0x000000000000af51
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToField:(id)arg1;	// IMP=0x000000000000ab40
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000aac4
- (id)JSONWithIndent:(unsigned char)arg1;	// IMP=0x000000000000a8b1
@property(readonly, copy) NSString *description;
- (id)value;	// IMP=0x000000000000a816
- (id)label;	// IMP=0x000000000000a78f
- (long long)fieldType;	// IMP=0x000000000000a761
- (id)initWithBuffer:(id)arg1 root:(const struct Field *)arg2;	// IMP=0x000000000000a6d7
- (id)init;	// IMP=0x000000000000a673

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

