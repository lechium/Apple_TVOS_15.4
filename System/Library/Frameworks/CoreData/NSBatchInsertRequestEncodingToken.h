//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSInputStream, NSString;

__attribute__((visibility("hidden")))
@interface NSBatchInsertRequestEncodingToken : NSObject <NSSecureCoding>
{
    NSString *_entityName;	// 8 = 0x8
    NSArray *_objectsToInsert;	// 16 = 0x10
    NSInputStream *_inputStream;	// 24 = 0x18
    unsigned long long _resultType;	// 32 = 0x20
    _Bool _secure;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000032f6
@property(readonly, nonatomic) _Bool secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(readonly, retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, retain, nonatomic) NSArray *objectsToInsert; // @synthesize objectsToInsert=_objectsToInsert;
@property(readonly, retain, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000036bb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000032fe
- (void)dealloc;	// IMP=0x0000000000003292
- (id)initForRequest:(id)arg1;	// IMP=0x00000000000031e4

@end

