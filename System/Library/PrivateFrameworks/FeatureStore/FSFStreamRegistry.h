//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FSFStreamRegistry : NSObject
{
}

+ (_Bool)writeDict:(id)arg1;	// IMP=0x0000000000004d1a
+ (id)readFileInToDict;	// IMP=0x0000000000004c7b
+ (id)registryFilePath;	// IMP=0x0000000000004a72
- (id)getRegisteredStreams;	// IMP=0x0000000000004c62
- (_Bool)registerForStream:(id)arg1 withSchema:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000004ad0

@end
