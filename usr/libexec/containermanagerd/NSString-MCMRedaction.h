//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (MCMRedaction)
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x002000000001f6c1
+ (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000001f672
- (id)stringByRedactingHomeContent:(id)arg1;	// IMP=0x0010000000010eb1
- (_Bool)containsDotDotPathComponents;	// IMP=0x001000000001f50f
- (_Bool)hasPrefixFromArray:(id)arg1;	// IMP=0x00100000000a2dda
@end

