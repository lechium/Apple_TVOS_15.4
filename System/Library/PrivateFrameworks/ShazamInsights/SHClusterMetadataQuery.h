//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHClusterMetadataQuery : NSObject
{
}

+ (_Bool)writeMetadata:(id)arg1 toDatabaseAtLocation:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002e67
+ (id)metadataFromDatabaseAtLocation:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000294a
+ (id)dateFormatter;	// IMP=0x00000000000028f4
+ (id)stringFromStoreType:(long long)arg1;	// IMP=0x00000000000028d8
+ (long long)dataStoreTypeFromString:(id)arg1;	// IMP=0x0000000000002788

@end

