//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitServerConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_storeDirectoryPath;	// 8 = 0x8
    NSString *_machServiceName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017c92c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017c9ea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017c934
- (id)description;	// IMP=0x000000000017c898
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017c81a
- (void)dealloc;	// IMP=0x000000000017c7d0
- (id)init;	// IMP=0x000000000017c724

@end

