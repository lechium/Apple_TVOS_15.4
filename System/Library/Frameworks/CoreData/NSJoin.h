//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSJoin : NSObject <NSCoding, NSCopying>
{
    NSString *_sourceAttributeName;	// 8 = 0x8
    NSString *_destinationAttributeName;	// 16 = 0x10
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009ac16
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009ab9f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009ab37
- (unsigned long long)hash;	// IMP=0x000000000009aad7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009aa58
- (void)dealloc;	// IMP=0x000000000009aa0e
- (id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;	// IMP=0x000000000009a994

@end

