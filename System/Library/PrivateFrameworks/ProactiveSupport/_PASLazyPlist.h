//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASLazyPlist : NSObject
{
}

+ (void)setDeserializationStatsHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003980a
+ (CDUnknownBlockType)deserializationStatsHandler;	// IMP=0x00000000000397bd
+ (void)setSerializationStatsHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003975e
+ (CDUnknownBlockType)serializationStatsHandler;	// IMP=0x0000000000039711
+ (id)lazyPlistWithPlist:(id)arg1;	// IMP=0x0000000000039433
+ (id)lazyPlistArrayWithPlistArray:(id)arg1;	// IMP=0x0000000000039421
+ (id)lazyPlistDictionaryWithPlistDictionary:(id)arg1;	// IMP=0x000000000003940f
+ (_Bool)isLazyPlistLikelyContainedInFileAtPath:(id)arg1 format:(unsigned long long *)arg2;	// IMP=0x0000000000039257
+ (_Bool)isLazyPlistLikelyContainedInData:(id)arg1 format:(unsigned long long *)arg2;	// IMP=0x00000000000390b8
+ (id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long *)arg3 error:(id *)arg4;	// IMP=0x000000000003908d
+ (id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 format:(unsigned long long)arg3 startOfs:(long long *)arg4 error:(id *)arg5;	// IMP=0x0000000000038fb8
+ (id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000038f9d
+ (id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 format:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000038eb2
+ (id)dataWithPropertyList:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000038e98
+ (id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000038c15
+ (id)arrayWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000038a25
+ (id)arrayWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003888e
+ (id)dictionaryWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003869e
+ (id)dictionaryWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000038507
+ (id)propertyListWithPath:(id)arg1 fileRange:(struct _NSRange)arg2 error:(id *)arg3;	// IMP=0x0000000000037eb4
+ (id)propertyListWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000037980
+ (id)propertyListWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000037520
- (id)init;	// IMP=0x000000000003751a

@end

