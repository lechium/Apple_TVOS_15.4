//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Koa/KVJSONDecodable-Protocol.h>
#import <Koa/KVJSONEncodable-Protocol.h>

@class NSData, NSString;

@interface KVItem : NSObject <KVJSONEncodable, KVJSONDecodable>
{
    const struct Item *_item;	// 8 = 0x8
    NSData *_buffer;	// 16 = 0x10
}

+ (id)itemFromBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cd4f
- (void).cxx_destruct;	// IMP=0x000000000000cc6d
@property(readonly, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
- (_Bool)hasFieldWithType:(long long)arg1 label:(id)arg2 value:(id)arg3;	// IMP=0x000000000000c8f6
- (unsigned long long)fieldCount;	// IMP=0x000000000000c8d7
- (id)fieldsWithType:(long long)arg1;	// IMP=0x000000000000c776
- (void)enumerateFieldsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c653
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToItem:(id)arg1;	// IMP=0x000000000000c5a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c52a
- (id)initFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000be9f
- (id)JSONWithIndent:(unsigned char)arg1;	// IMP=0x000000000000bc3a
@property(readonly, copy) NSString *description;
- (id)itemId;	// IMP=0x000000000000bb9c
- (long long)itemType;	// IMP=0x000000000000bb6e
- (id)init;	// IMP=0x000000000000bb0a
- (id)initWithBuffer:(id)arg1 verify:(_Bool)arg2 copy:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000000afd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
